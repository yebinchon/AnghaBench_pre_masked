
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int traveltime; int traveltype; int end; int start; int edgenum; int facenum; int areanum; } ;
typedef TYPE_1__ aas_reachability_t ;
struct TYPE_8__ {int traveltime; int traveltype; int end; int start; int edgenum; int facenum; int areanum; struct TYPE_8__* next; } ;
typedef TYPE_2__ aas_lreachability_t ;
struct TYPE_9__ {size_t firstreachablearea; size_t numreachableareas; } ;
typedef TYPE_3__ aas_areasettings_t ;
struct TYPE_10__ {int reachabilitysize; int numareas; TYPE_1__* reachability; TYPE_3__* areasettings; } ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,int ) ;
 TYPE_5__ VAR_0 ;
 TYPE_2__** VAR_1 ;
 int VAR_2 ;

void FUNC_3(void)
{
 int VAR_3;
 aas_areasettings_t *VAR_4;
 aas_lreachability_t *VAR_5;
 aas_reachability_t *VAR_6;

 if (VAR_0.reachability) FUNC_0(VAR_0.reachability);
 VAR_0.reachability = (aas_reachability_t *) FUNC_1((VAR_2 + 10) * sizeof(aas_reachability_t));
 VAR_0.reachabilitysize = 1;
 for (VAR_3 = 0; VAR_3 < VAR_0.numareas; VAR_3++)
 {
  VAR_4 = &VAR_0.areasettings[VAR_3];
  VAR_4->firstreachablearea = VAR_0.reachabilitysize;
  VAR_4->numreachableareas = 0;
  for (VAR_5 = VAR_1[VAR_3]; VAR_5; VAR_5 = VAR_5->next)
  {
   VAR_6 = &VAR_0.reachability[VAR_4->firstreachablearea +
             VAR_4->numreachableareas];
   VAR_6->areanum = VAR_5->areanum;
   VAR_6->facenum = VAR_5->facenum;
   VAR_6->edgenum = VAR_5->edgenum;
   FUNC_2(VAR_5->start, VAR_6->start);
   FUNC_2(VAR_5->end, VAR_6->end);
   VAR_6->traveltype = VAR_5->traveltype;
   VAR_6->traveltime = VAR_5->traveltime;

   VAR_4->numreachableareas++;
  }
  VAR_0.reachabilitysize += VAR_4->numreachableareas;
 }
}
