
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mISDN_ctrl_req {int op; int channel; } ;
struct ipac_hw {int (* ctrl ) (struct ipac_hw*,int ,int) ;int name; } ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (struct ipac_hw*,int ,int) ;

__attribute__((used)) static int
FUNC_2(struct ipac_hw *VAR_2, struct mISDN_ctrl_req *VAR_3)
{
 int VAR_4 = 0;

 switch (VAR_3->op) {
 case 129:
  VAR_3->op = 128;
  break;
 case 128:

  if (VAR_3->channel < 0 || VAR_3->channel > 3) {
   VAR_4 = -VAR_0;
   break;
  }
  VAR_4 = VAR_2->ctrl(VAR_2, VAR_1, VAR_3->channel);
  break;
 default:
  FUNC_0("%s: unknown CTRL OP %x\n", VAR_2->name, VAR_3->op);
  VAR_4 = -VAR_0;
  break;
 }
 return VAR_4;
}
