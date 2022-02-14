
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cmd; } ;
struct cx18_in_work_order {int rpu; TYPE_1__ mb; } ;
struct cx18 {int dummy; } ;






 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct cx18*,struct cx18_in_work_order*) ;
 int FUNC_2 (struct cx18*,struct cx18_in_work_order*) ;

__attribute__((used)) static void FUNC_3(struct cx18 *VAR_0, struct cx18_in_work_order *VAR_1)
{
 switch (VAR_1->rpu) {
 case 130:
 {
  switch (VAR_1->mb.cmd) {
  case 128:
   FUNC_2(VAR_0, VAR_1);
   break;
  case 129:
   FUNC_1(VAR_0, VAR_1);
   break;
  default:
   FUNC_0("Unknown CPU to EPU mailbox command %#0x\n",
      VAR_1->mb.cmd);
   break;
  }
  break;
 }
 case 131:
  FUNC_0("Unknown APU to EPU mailbox command %#0x\n",
     VAR_1->mb.cmd);
  break;
 default:
  break;
 }
}
