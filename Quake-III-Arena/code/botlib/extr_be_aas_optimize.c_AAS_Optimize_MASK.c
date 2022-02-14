
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int* faceoptimizeindex; int* edgeoptimizeindex; } ;
typedef TYPE_2__ optimized_t ;
struct TYPE_11__ {int numareas; int reachabilitysize; TYPE_1__* reachability; } ;
struct TYPE_10__ {int (* Print ) (int ,char*) ;} ;
struct TYPE_8__ {int traveltype; int facenum; int edgenum; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_4__ VAR_5 ;
 size_t FUNC_3 (int) ;
 TYPE_3__ VAR_6 ;
 int FUNC_4 (int ,char*) ;

void FUNC_5(void)
{
 int VAR_7, VAR_8;
 optimized_t VAR_9;

 FUNC_0(&VAR_9);
 for (VAR_7 = 1; VAR_7 < VAR_5.numareas; VAR_7++)
 {
  FUNC_1(&VAR_9, VAR_7);
 }

 for (VAR_7 = 0; VAR_7 < VAR_5.reachabilitysize; VAR_7++)
 {


  if ((VAR_5.reachability[VAR_7].traveltype & VAR_1) == VAR_2) continue;

  if ((VAR_5.reachability[VAR_7].traveltype & VAR_1) == VAR_4) continue;

  if ((VAR_5.reachability[VAR_7].traveltype & VAR_1) == VAR_3) continue;

  VAR_8 = VAR_5.reachability[VAR_7].facenum;
  VAR_5.reachability[VAR_7].facenum = VAR_9.faceoptimizeindex[FUNC_3(VAR_5.reachability[VAR_7].facenum)];
  if (VAR_8 < 0) VAR_5.reachability[VAR_7].facenum = -VAR_5.reachability[VAR_7].facenum;
  VAR_8 = VAR_5.reachability[VAR_7].edgenum;
  VAR_5.reachability[VAR_7].edgenum = VAR_9.edgeoptimizeindex[FUNC_3(VAR_5.reachability[VAR_7].edgenum)];
  if (VAR_8 < 0) VAR_5.reachability[VAR_7].edgenum = -VAR_5.reachability[VAR_7].edgenum;
 }

 FUNC_2(&VAR_9);

 VAR_6.Print(VAR_0, "AAS data optimized.\n");
}
