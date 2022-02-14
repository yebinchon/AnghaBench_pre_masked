
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w6692_hw {int name; } ;
struct mISDN_ctrl_req {int op; } ;


 int VAR_0 ;

 int FUNC_0 (char*,int ,int) ;

__attribute__((used)) static int
FUNC_1(struct w6692_hw *VAR_1, struct mISDN_ctrl_req *VAR_2)
{
 int VAR_3 = 0;

 switch (VAR_2->op) {
 case 128:
  VAR_2->op = 0;
  break;
 default:
  FUNC_0("%s: unknown CTRL OP %x\n", VAR_1->name, VAR_2->op);
  VAR_3 = -VAR_0;
  break;
 }
 return VAR_3;
}
