
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {size_t cluster; size_t areanum; unsigned short tmptraveltime; scalar_t__ inlist; struct TYPE_10__* next; struct TYPE_10__* prev; } ;
typedef TYPE_2__ aas_routingupdate_t ;
struct TYPE_11__ {size_t cluster; size_t areanum; unsigned short starttraveltime; unsigned short* traveltimes; int travelflags; } ;
typedef TYPE_3__ aas_routingcache_t ;
struct TYPE_12__ {scalar_t__ areanum; size_t frontcluster; size_t backcluster; } ;
typedef TYPE_4__ aas_portal_t ;
struct TYPE_13__ {int numportals; int firstportal; int numreachabilityareas; } ;
typedef TYPE_5__ aas_cluster_t ;
struct TYPE_14__ {size_t numportals; int* portalindex; unsigned short* portalmaxtraveltimes; TYPE_2__* portalupdate; TYPE_4__* portals; TYPE_5__* clusters; TYPE_1__* areasettings; } ;
struct TYPE_9__ {int cluster; } ;


 int FUNC_0 (size_t,scalar_t__) ;
 TYPE_3__* FUNC_1 (size_t,size_t,int ) ;
 TYPE_6__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

void FUNC_2(aas_routingcache_t *VAR_4)
{
 int VAR_5, VAR_6, VAR_7, VAR_8;
 unsigned short int VAR_9;
 aas_portal_t *VAR_10;
 aas_cluster_t *VAR_11;
 aas_routingcache_t *VAR_12;
 aas_routingupdate_t *VAR_13, *VAR_14, *VAR_15, *VAR_16;







 VAR_15 = &VAR_0.portalupdate[VAR_0.numportals];
 VAR_15->cluster = VAR_4->cluster;
 VAR_15->areanum = VAR_4->areanum;
 VAR_15->tmptraveltime = VAR_4->starttraveltime;

 VAR_8 = VAR_0.areasettings[VAR_4->areanum].cluster;
 if (VAR_8 < 0)
 {
  VAR_4->traveltimes[-VAR_8] = VAR_4->starttraveltime;
 }

 VAR_15->next = ((void*)0);
 VAR_15->prev = ((void*)0);
 VAR_13 = VAR_15;
 VAR_14 = VAR_15;

 while (VAR_13)
 {
  VAR_15 = VAR_13;

  if (VAR_15->next) VAR_15->next->prev = ((void*)0);
  else VAR_14 = ((void*)0);
  VAR_13 = VAR_15->next;

  VAR_15->inlist = VAR_2;

  VAR_11 = &VAR_0.clusters[VAR_15->cluster];

  VAR_12 = FUNC_1(VAR_15->cluster,
        VAR_15->areanum, VAR_4->travelflags);

  for (VAR_5 = 0; VAR_5 < VAR_11->numportals; VAR_5++)
  {
   VAR_6 = VAR_0.portalindex[VAR_11->firstportal + VAR_5];
   VAR_10 = &VAR_0.portals[VAR_6];

   if (VAR_10->areanum == VAR_15->areanum) continue;

   VAR_7 = FUNC_0(VAR_15->cluster, VAR_10->areanum);
   if (VAR_7 >= VAR_11->numreachabilityareas) continue;

   VAR_9 = VAR_12->traveltimes[VAR_7];
   if (!VAR_9) continue;
   VAR_9 += VAR_15->tmptraveltime;

   if (!VAR_4->traveltimes[VAR_6] ||
     VAR_4->traveltimes[VAR_6] > VAR_9)
   {
    VAR_4->traveltimes[VAR_6] = VAR_9;
    VAR_16 = &VAR_0.portalupdate[VAR_6];
    if (VAR_10->frontcluster == VAR_15->cluster)
    {
     VAR_16->cluster = VAR_10->backcluster;
    }
    else
    {
     VAR_16->cluster = VAR_10->frontcluster;
    }
    VAR_16->areanum = VAR_10->areanum;

    VAR_16->tmptraveltime = VAR_9 + VAR_0.portalmaxtraveltimes[VAR_6];
    if (!VAR_16->inlist)
    {



     VAR_16->next = ((void*)0);
     VAR_16->prev = VAR_14;
     if (VAR_14) VAR_14->next = VAR_16;
     else VAR_13 = VAR_16;
     VAR_14 = VAR_16;
     VAR_16->inlist = VAR_3;
    }
   }
  }
 }
}
