
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int my_csflags ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 int FUNC_0 (int,int *) ;
 int FUNC_1 (char*) ;
 int VAR_3 ;
 int FUNC_2 (int ,int ,int*,int) ;
 int VAR_4 ;
 int FUNC_3 () ;

__attribute__((used)) static int
FUNC_4(void){
 int VAR_5;
 uint32_t VAR_6;

 VAR_3; FUNC_0(FUNC_2(FUNC_3(), VAR_1, &VAR_6, sizeof(VAR_6)), ((void*)0));

 if (!(VAR_6 & VAR_2)) {
  return 0;
 }

 VAR_5 = FUNC_2(FUNC_3(), VAR_0, ((void*)0), 0);
 if (VAR_5) {
  switch (VAR_4) {
  case 128:
   FUNC_1("clearing platform binary not supported, skipping test");
   return -1;
  default:
   FUNC_1("csops failed with flag CS_OPS_CLEARPLATFORM");
   return -1;
  }
 }

 VAR_6 = 0;
 VAR_3; FUNC_0(FUNC_2(FUNC_3(), VAR_1, &VAR_6, sizeof(VAR_6)), ((void*)0));

 if (VAR_6 & VAR_2) {
  FUNC_1("platform binary flag still set");
  return -1;
 }

 return 0;
}
