
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_offset_t ;
typedef int uint32_t ;
typedef int DTEntry ;


 scalar_t__ FUNC_0 (char*,char*,int *) ;
 int FUNC_1 (int ,char*,void**,int*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (char*,...) ;
 scalar_t__ FUNC_3 (scalar_t__,uintptr_t) ;
 scalar_t__ FUNC_4 () ;

__attribute__((used)) static uint32_t
FUNC_5(void)
{
 DTEntry VAR_4;
 uintptr_t *VAR_5;
 uint32_t VAR_6;
 vm_offset_t VAR_7 = 0;

 VAR_1 = FUNC_4();

 VAR_7 = VAR_1;
 FUNC_2("pe_arm_map_interrupt_controller: soc_phys:  0x%lx\n", (unsigned long)VAR_7);
 if (VAR_7 == 0)
  return 0;

 if (FUNC_0("interrupt-controller", "master", &VAR_4) == VAR_3) {
  FUNC_2("pe_arm_map_interrupt_controller: found interrupt-controller\n");
  FUNC_1(VAR_4, "reg", (void **)&VAR_5, &VAR_6);
  VAR_0 = FUNC_3(VAR_7 + *VAR_5, *(VAR_5 + 1));
  FUNC_2("pe_arm_map_interrupt_controller: gPicBase: 0x%lx\n", (unsigned long)VAR_0);
 }
 if (VAR_0 == 0) {
  FUNC_2("pe_arm_map_interrupt_controller: failed to find the interrupt-controller.\n");
  return 0;
 }

 if (FUNC_0("device_type", "timer", &VAR_4) == VAR_3) {
  FUNC_2("pe_arm_map_interrupt_controller: found timer\n");
  FUNC_1(VAR_4, "reg", (void **)&VAR_5, &VAR_6);
  VAR_2 = FUNC_3(VAR_7 + *VAR_5, *(VAR_5 + 1));
  FUNC_2("pe_arm_map_interrupt_controller: gTimerBase: 0x%lx\n", (unsigned long)VAR_2);
 }
 if (VAR_2 == 0) {
  FUNC_2("pe_arm_map_interrupt_controller: failed to find the timer.\n");
  return 0;
 }

 return 1;
}
