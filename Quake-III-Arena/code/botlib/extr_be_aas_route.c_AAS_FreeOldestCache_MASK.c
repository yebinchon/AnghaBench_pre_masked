
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ type; size_t areanum; size_t cluster; TYPE_3__* prev; TYPE_2__* next; struct TYPE_10__* time_next; } ;
typedef TYPE_4__ aas_routingcache_t ;
struct TYPE_11__ {TYPE_2__** portalcache; TYPE_2__*** clusterareacache; TYPE_1__* areasettings; TYPE_4__* oldestcache; } ;
struct TYPE_9__ {TYPE_2__* next; } ;
struct TYPE_8__ {TYPE_3__* prev; } ;
struct TYPE_7__ {scalar_t__ cluster; } ;


 int FUNC_0 (size_t,size_t) ;
 int FUNC_1 (TYPE_4__*) ;
 scalar_t__ VAR_0 ;
 TYPE_5__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_2(void)
{
 int VAR_4;
 aas_routingcache_t *VAR_5;

 for (VAR_5 = VAR_1.oldestcache; VAR_5; VAR_5 = VAR_5->time_next) {

  if (VAR_5->type == VAR_0 && VAR_1.areasettings[VAR_5->areanum].cluster < 0) {
   continue;
  }
  break;
 }
 if (VAR_5) {

  if (VAR_5->type == VAR_0) {

   VAR_4 = FUNC_0(VAR_5->cluster, VAR_5->areanum);

   if (VAR_5->prev) VAR_5->prev->next = VAR_5->next;
   else VAR_1.clusterareacache[VAR_5->cluster][VAR_4] = VAR_5->next;
   if (VAR_5->next) VAR_5->next->prev = VAR_5->prev;
  }
  else {

   if (VAR_5->prev) VAR_5->prev->next = VAR_5->next;
   else VAR_1.portalcache[VAR_5->areanum] = VAR_5->next;
   if (VAR_5->next) VAR_5->next->prev = VAR_5->prev;
  }
  FUNC_1(VAR_5);
  return VAR_3;
 }
 return VAR_2;
}
