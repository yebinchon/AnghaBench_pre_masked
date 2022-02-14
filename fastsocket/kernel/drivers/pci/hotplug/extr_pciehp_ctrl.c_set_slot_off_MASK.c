
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct slot {int dummy; } ;
struct controller {int dummy; } ;


 scalar_t__ FUNC_0 (struct controller*) ;
 scalar_t__ FUNC_1 (struct controller*) ;
 scalar_t__ FUNC_2 (struct controller*) ;
 int FUNC_3 (struct controller*,char*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct slot*) ;
 scalar_t__ FUNC_6 (struct slot*) ;
 scalar_t__ FUNC_7 (struct slot*,int) ;

__attribute__((used)) static void FUNC_8(struct controller *VAR_0, struct slot * VAR_1)
{

 if (FUNC_1(VAR_0)) {
  if (FUNC_6(VAR_1)) {
   FUNC_3(VAR_0,
     "Issue of Slot Power Off command failed\n");
   return;
  }





  FUNC_4(1000);
 }

 if (FUNC_2(VAR_0))
  FUNC_5(VAR_1);

 if (FUNC_0(VAR_0)) {
  if (FUNC_7(VAR_1, 1)) {
   FUNC_3(VAR_0,
     "Issue of Set Attention Led command failed\n");
   return;
  }
 }
}
