
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int startareatraveltimes ;
struct TYPE_12__ {int areanum; unsigned short* areatraveltimes; unsigned short tmptraveltime; scalar_t__ inlist; struct TYPE_12__* next; struct TYPE_12__* prev; } ;
typedef TYPE_3__ aas_routingupdate_t ;
struct TYPE_13__ {size_t cluster; int travelflags; int areanum; unsigned short starttraveltime; unsigned short* traveltimes; int* reachabilities; } ;
typedef TYPE_4__ aas_routingcache_t ;
struct TYPE_14__ {TYPE_6__* first; } ;
typedef TYPE_5__ aas_reversedreachability_t ;
struct TYPE_15__ {int linknum; int areanum; struct TYPE_15__* next; } ;
typedef TYPE_6__ aas_reversedlink_t ;
struct TYPE_16__ {size_t areanum; unsigned short traveltime; int traveltype; } ;
typedef TYPE_7__ aas_reachability_t ;
struct TYPE_17__ {unsigned short*** areatraveltimes; TYPE_2__* areasettings; TYPE_3__* areaupdate; TYPE_7__* reachability; TYPE_5__* reversedreachability; int frameroutingupdates; TYPE_1__* clusters; } ;
struct TYPE_11__ {int areaflags; int cluster; int firstreachablearea; } ;
struct TYPE_10__ {int numreachabilityareas; } ;


 int FUNC_0 (size_t) ;
 int FUNC_1 (size_t,int) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (unsigned short*,int ,int) ;
 TYPE_8__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;

void FUNC_4(aas_routingcache_t *VAR_5)
{
 int VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
 int VAR_12;
 unsigned short int VAR_13, VAR_14[128];
 aas_routingupdate_t *VAR_15, *VAR_16, *VAR_17, *VAR_18;
 aas_reachability_t *VAR_19;
 aas_reversedreachability_t *VAR_20;
 aas_reversedlink_t *VAR_21;





 VAR_12 = VAR_1.clusters[VAR_5->cluster].numreachabilityareas;

 VAR_1.frameroutingupdates++;



 VAR_9 = ~VAR_5->travelflags;

 VAR_10 = FUNC_1(VAR_5->cluster, VAR_5->areanum);
 if (VAR_10 >= VAR_12) return;

 FUNC_3(VAR_14, 0, sizeof(VAR_14));

 VAR_17 = &VAR_1.areaupdate[VAR_10];
 VAR_17->areanum = VAR_5->areanum;

 VAR_17->areatraveltimes = VAR_14;
 VAR_17->tmptraveltime = VAR_5->starttraveltime;

 VAR_5->traveltimes[VAR_10] = VAR_5->starttraveltime;

 VAR_17->next = ((void*)0);
 VAR_17->prev = ((void*)0);
 VAR_15 = VAR_17;
 VAR_16 = VAR_17;

 while (VAR_15)
 {
  VAR_17 = VAR_15;

  if (VAR_17->next) VAR_17->next->prev = ((void*)0);
  else VAR_16 = ((void*)0);
  VAR_15 = VAR_17->next;

  VAR_17->inlist = VAR_3;

  VAR_20 = &VAR_1.reversedreachability[VAR_17->areanum];

  for (VAR_6 = 0, VAR_21 = VAR_20->first; VAR_21; VAR_21 = VAR_21->next, VAR_6++)
  {
   VAR_11 = VAR_21->linknum;
   VAR_19 = &VAR_1.reachability[VAR_11];

   if (FUNC_2(VAR_19->traveltype) & VAR_9) continue;

   if (VAR_1.areasettings[VAR_19->areanum].areaflags & VAR_0) continue;

   if (FUNC_0(VAR_19->areanum) & VAR_9) continue;

   VAR_7 = VAR_21->areanum;

   VAR_8 = VAR_1.areasettings[VAR_7].cluster;

   if (VAR_8 > 0 && VAR_8 != VAR_5->cluster) continue;

   VAR_10 = FUNC_1(VAR_5->cluster, VAR_7);
   if (VAR_10 >= VAR_12) continue;


   VAR_13 = VAR_17->tmptraveltime +

      VAR_17->areatraveltimes[VAR_6] +
       VAR_19->traveltime;

   if (!VAR_5->traveltimes[VAR_10] ||
     VAR_5->traveltimes[VAR_10] > VAR_13)
   {
    VAR_5->traveltimes[VAR_10] = VAR_13;
    VAR_5->reachabilities[VAR_10] = VAR_11 - VAR_1.areasettings[VAR_7].firstreachablearea;
    VAR_18 = &VAR_1.areaupdate[VAR_10];
    VAR_18->areanum = VAR_7;
    VAR_18->tmptraveltime = VAR_13;

    VAR_18->areatraveltimes = VAR_1.areatraveltimes[VAR_7][VAR_11 -
             VAR_1.areasettings[VAR_7].firstreachablearea];
    if (!VAR_18->inlist)
    {



     VAR_18->next = ((void*)0);
     VAR_18->prev = VAR_16;
     if (VAR_16) VAR_16->next = VAR_18;
     else VAR_15 = VAR_18;
     VAR_16 = VAR_18;
     VAR_18->inlist = VAR_4;
    }
   }
  }
 }
}
