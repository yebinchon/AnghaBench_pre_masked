
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ SceUID ;


 int VAR_0 ;
 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 () ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (char*,int ,int) ;
 int FUNC_4 (int) ;

void FUNC_5(void)
{


 SceUID VAR_1;
 int VAR_2;
 for (VAR_2 = 0; VAR_2 < 30; VAR_2++) {
  VAR_1 = FUNC_3("EBOOT.PBP", VAR_0, 0777);
  if (VAR_1 >= 0) break;
  FUNC_4(100 * 1024);
 }
 if (VAR_1 >= 0) FUNC_2(VAR_1);
 FUNC_1();
 if (VAR_2 < 30)
  FUNC_0("io resumed after %i tries\n", VAR_2);
 else {
  FUNC_0("io resume failed with %08x\n", VAR_1);
  FUNC_4(500 * 1024);
 }
}
