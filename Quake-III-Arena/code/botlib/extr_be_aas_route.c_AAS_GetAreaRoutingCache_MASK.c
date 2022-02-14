
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int travelflags; int cluster; int areanum; int starttraveltime; int type; int time; struct TYPE_12__* prev; struct TYPE_12__* next; int origin; } ;
typedef TYPE_3__ aas_routingcache_t ;
struct TYPE_13__ {TYPE_3__*** clusterareacache; TYPE_2__* areas; TYPE_1__* clusters; } ;
struct TYPE_11__ {int center; } ;
struct TYPE_10__ {int numreachabilityareas; } ;


 TYPE_3__* FUNC_0 (int ) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int VAR_0 ;
 int FUNC_6 (int ,int ) ;
 TYPE_4__ VAR_1 ;

aas_routingcache_t *FUNC_7(int VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5;
 aas_routingcache_t *VAR_6, *VAR_7;


 VAR_5 = FUNC_1(VAR_2, VAR_3);

 VAR_7 = VAR_1.clusterareacache[VAR_2][VAR_5];

 for (VAR_6 = VAR_7; VAR_6; VAR_6 = VAR_6->next)
 {

  if (VAR_6->travelflags == VAR_4) break;
 }

 if (!VAR_6)
 {
  VAR_6 = FUNC_0(VAR_1.clusters[VAR_2].numreachabilityareas);
  VAR_6->cluster = VAR_2;
  VAR_6->areanum = VAR_3;
  FUNC_6(VAR_1.areas[VAR_3].center, VAR_6->origin);
  VAR_6->starttraveltime = 1;
  VAR_6->travelflags = VAR_4;
  VAR_6->prev = ((void*)0);
  VAR_6->next = VAR_7;
  if (VAR_7) VAR_7->prev = VAR_6;
  VAR_1.clusterareacache[VAR_2][VAR_5] = VAR_6;
  FUNC_5(VAR_6);
 }
 else
 {
  FUNC_4(VAR_6);
 }

 VAR_6->time = FUNC_3();
 VAR_6->type = VAR_0;
 FUNC_2(VAR_6);
 return VAR_6;
}
