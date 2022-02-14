
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int pmcw; } ;
struct subchannel {int ssd_info; TYPE_1__ schib; int schid; } ;


 int FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct subchannel *VAR_0)
{
 int VAR_1;

 if (FUNC_1(VAR_0->schid)) {


  FUNC_2(&VAR_0->ssd_info, &VAR_0->schib.pmcw);
 } else {
  VAR_1 = FUNC_0(VAR_0->schid, &VAR_0->ssd_info);
  if (VAR_1)
   FUNC_2(&VAR_0->ssd_info, &VAR_0->schib.pmcw);
  FUNC_3(&VAR_0->ssd_info);
 }
}
