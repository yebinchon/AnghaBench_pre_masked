
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct rio_priv {TYPE_2__* msg_regs; int dbell_win; TYPE_1__* dbell_atmu_regs; } ;
struct rio_mport {int phy_type; struct rio_priv* priv; } ;
struct TYPE_4__ {int odmr; int oddatr; int oddpr; int odretcr; } ;
struct TYPE_3__ {int rowtar; } ;




 int FUNC_0 (int ,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (char*,int,int,int) ;

__attribute__((used)) static int FUNC_3(struct rio_mport *VAR_0,
    int VAR_1, u16 VAR_2, u16 VAR_3)
{
 struct rio_priv *VAR_4 = VAR_0->priv;
 FUNC_2("fsl_doorbell_send: index %d destid %4.4x data %4.4x\n",
   VAR_1, VAR_2, VAR_3);
 switch (VAR_0->phy_type) {
 case 129:
  FUNC_1(&VAR_4->dbell_atmu_regs->rowtar, VAR_2 << 22);
  FUNC_0(VAR_4->dbell_win, VAR_3);
  break;
 case 128:



  FUNC_1(&VAR_4->msg_regs->odmr, 0x00000000);
  FUNC_1(&VAR_4->msg_regs->odretcr, 0x00000004);
  FUNC_1(&VAR_4->msg_regs->oddpr, VAR_2 << 16);
  FUNC_1(&VAR_4->msg_regs->oddatr, VAR_3);
  FUNC_1(&VAR_4->msg_regs->odmr, 0x00000001);
  break;
 }

 return 0;
}
