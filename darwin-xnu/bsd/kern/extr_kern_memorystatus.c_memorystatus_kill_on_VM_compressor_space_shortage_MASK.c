
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ os_reason_t ;
typedef scalar_t__ boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int,int ) ;
 scalar_t__ FUNC_1 (int,int ,scalar_t__) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (char*) ;

boolean_t
FUNC_4(boolean_t VAR_4) {
 if (VAR_4) {
  return FUNC_0(-1, VAR_3);
 } else {
  os_reason_t VAR_5 = FUNC_2(VAR_1, VAR_0);
  if (VAR_5 == VAR_2) {
   FUNC_3("memorystatus_kill_on_VM_compressor_space_shortage -- sync: failed to allocate jetsam reason\n");
  }

  return FUNC_1(-1, VAR_3, VAR_5);
 }
}
