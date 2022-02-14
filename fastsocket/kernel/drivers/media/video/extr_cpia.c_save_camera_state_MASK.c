
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int blueGain; int greenGain; int redGain; } ;
struct TYPE_4__ {int blueComp; int green2Comp; int green1Comp; int redComp; int coarseExpHi; int coarseExpLo; int fineExp; int gain; } ;
struct TYPE_6__ {TYPE_2__ colourBalance; TYPE_1__ exposure; } ;
struct cam_data {int cmd_queue; TYPE_3__ params; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int ,int ,int ,...) ;
 int FUNC_1 (struct cam_data*,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct cam_data *VAR_4)
{
 if(!(VAR_4->cmd_queue & VAR_0))
  FUNC_1(VAR_4, VAR_2, 0, 0, 0, 0);
 if(!(VAR_4->cmd_queue & VAR_1))
  FUNC_1(VAR_4, VAR_3, 0, 0, 0, 0);

 FUNC_0("%d/%d/%d/%d/%d/%d/%d/%d\n",
      VAR_4->params.exposure.gain,
      VAR_4->params.exposure.fineExp,
      VAR_4->params.exposure.coarseExpLo,
      VAR_4->params.exposure.coarseExpHi,
      VAR_4->params.exposure.redComp,
      VAR_4->params.exposure.green1Comp,
      VAR_4->params.exposure.green2Comp,
      VAR_4->params.exposure.blueComp);
 FUNC_0("%d/%d/%d\n",
      VAR_4->params.colourBalance.redGain,
      VAR_4->params.colourBalance.greenGain,
      VAR_4->params.colourBalance.blueGain);
}
