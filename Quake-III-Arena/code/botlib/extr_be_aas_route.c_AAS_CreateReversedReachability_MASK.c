
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int numlinks; TYPE_2__* first; } ;
typedef TYPE_1__ aas_reversedreachability_t ;
struct TYPE_9__ {int areanum; int linknum; struct TYPE_9__* next; } ;
typedef TYPE_2__ aas_reversedlink_t ;
struct TYPE_10__ {size_t areanum; } ;
typedef TYPE_3__ aas_reachability_t ;
struct TYPE_11__ {int numreachableareas; int firstreachablearea; } ;
typedef TYPE_4__ aas_areasettings_t ;
struct TYPE_13__ {int numareas; int reachabilitysize; TYPE_1__* reversedreachability; TYPE_3__* reachability; TYPE_4__* areasettings; } ;
struct TYPE_12__ {int (* Print ) (int ,char*,int) ;} ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 () ;
 TYPE_6__ VAR_2 ;
 TYPE_5__ VAR_3 ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (int ,char*,int) ;

void FUNC_5(void)
{
 int VAR_4, VAR_5;
 aas_reversedlink_t *VAR_6;
 aas_reachability_t *VAR_7;
 aas_areasettings_t *VAR_8;
 char *VAR_9;






 if (VAR_2.reversedreachability) FUNC_0(VAR_2.reversedreachability);

 VAR_9 = (char *) FUNC_1(VAR_2.numareas * sizeof(aas_reversedreachability_t) +
       VAR_2.reachabilitysize * sizeof(aas_reversedlink_t));

 VAR_2.reversedreachability = (aas_reversedreachability_t *) VAR_9;

 VAR_9 += VAR_2.numareas * sizeof(aas_reversedreachability_t);

 for (VAR_4 = 1; VAR_4 < VAR_2.numareas; VAR_4++)
 {

  VAR_8 = &VAR_2.areasettings[VAR_4];

  if (VAR_8->numreachableareas >= 128)
   VAR_3.Print(VAR_1, "area %d has more than 128 reachabilities\n", VAR_4);

  for (VAR_5 = 0; VAR_5 < VAR_8->numreachableareas && VAR_5 < 128; VAR_5++)
  {

   VAR_7 = &VAR_2.reachability[VAR_8->firstreachablearea + VAR_5];

   VAR_6 = (aas_reversedlink_t *) VAR_9;
   VAR_9 += sizeof(aas_reversedlink_t);

   VAR_6->areanum = VAR_4;
   VAR_6->linknum = VAR_8->firstreachablearea + VAR_5;
   VAR_6->next = VAR_2.reversedreachability[VAR_7->areanum].first;
   VAR_2.reversedreachability[VAR_7->areanum].first = VAR_6;
   VAR_2.reversedreachability[VAR_7->areanum].numlinks++;
  }
 }



}
