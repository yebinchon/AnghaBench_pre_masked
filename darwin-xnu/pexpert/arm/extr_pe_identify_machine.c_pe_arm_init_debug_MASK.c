
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int temp_bootarg_panic_trace ;
typedef int DTEntry ;


 scalar_t__ FUNC_0 (char*,char*,int *) ;
 scalar_t__ FUNC_1 (int ,char*,void**,int *) ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (char*,unsigned int*,int) ;
 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (void*,int ) ;
 int FUNC_6 (scalar_t__,uintptr_t) ;
 int VAR_6 ;
 int FUNC_7 (int ,int *,char*) ;
 int FUNC_8 (int *,int ) ;
 int VAR_7 ;

void
FUNC_9(void *VAR_8)
{
 DTEntry VAR_9;
 uintptr_t *VAR_10;
 uint32_t VAR_11;

 if (VAR_4 == 0 ) {
  FUNC_4("pe_arm_init_debug: failed to initialize gSocPhys == 0\n");
     return;
 }

 if ( FUNC_0("device_type", "cpu-debug-interface", &VAR_9) == VAR_5 ) {
  if (VAR_8 != ((void*)0)) {
   if (FUNC_1(VAR_9, "reg", (void **)&VAR_10, &VAR_11) == VAR_5) {
    FUNC_5(VAR_8, FUNC_6(VAR_4 + *VAR_10, *(VAR_10 + 1)));
   }
  }
 } else {
  FUNC_4("pe_arm_init_debug: failed to find cpu-debug-interface\n");
 }
}
