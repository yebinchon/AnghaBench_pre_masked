
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cause; } ;
struct l3_process {int debug; TYPE_1__ para; int st; } ;






 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct l3_process*,int ,int *) ;

__attribute__((used)) static void
FUNC_2(struct l3_process *VAR_1, int VAR_2) {

 if (VAR_1->debug & VAR_0)
  FUNC_0(VAR_1->st, "check_infoelements ret %d", VAR_2);
 switch(VAR_2) {
  case 0:
   break;
  case 131:
   VAR_1->para.cause = 96;
   FUNC_1(VAR_1, 0, ((void*)0));
   break;
  case 128:
   VAR_1->para.cause = 99;
   FUNC_1(VAR_1, 0, ((void*)0));
   break;
  case 130:
   VAR_1->para.cause = 100;
   FUNC_1(VAR_1, 0, ((void*)0));
   break;
  case 129:
  default:
   break;
 }
}
