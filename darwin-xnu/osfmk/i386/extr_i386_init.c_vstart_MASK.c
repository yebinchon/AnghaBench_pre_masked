
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ vm_offset_t ;
typedef int uint32_t ;
struct TYPE_10__ {int kaddr; int ksize; int PhysicalMemorySize; int MemoryMapSize; int MemoryMap; int CommandLine; int Version; int Revision; } ;
typedef TYPE_1__ boot_args ;
typedef int boolean_t ;
struct TYPE_11__ {int cpu_int_stack_top; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (void*) ;
 void* VAR_2 ;
 int FUNC_2 () ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t FUNC_3 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int ,TYPE_1__*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_5 (int ) ;
 TYPE_5__* FUNC_6 (int) ;
 int FUNC_7 (TYPE_5__*) ;
 int FUNC_8 (TYPE_5__*) ;
 int FUNC_9 (TYPE_5__*) ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_10 () ;
 int FUNC_11 (uintptr_t) ;
 int FUNC_12 (TYPE_1__*) ;
 TYPE_1__* VAR_18 ;
 int* VAR_19 ;
 scalar_t__ FUNC_13 (scalar_t__) ;
 int FUNC_14 () ;
 int FUNC_15 () ;
 void* VAR_20 ;
 int FUNC_16 (int ) ;
 TYPE_1__* FUNC_17 (int ) ;
 int FUNC_18 (uintptr_t) ;
 int FUNC_19 () ;
 int FUNC_20 (uintptr_t,int ) ;

__attribute__((noreturn))
void
FUNC_21(vm_offset_t VAR_21)
{
 boolean_t VAR_22 = !(VAR_21 == 0);
 int VAR_23 = 0;
 uint32_t VAR_24;

 FUNC_16(VAR_11);

 if (VAR_22) {



  FUNC_19();
  FUNC_16(VAR_14);




  VAR_18 = (boot_args *)VAR_21;
  VAR_24 = VAR_18->kaddr + VAR_18->ksize;
  VAR_20 = (void *)(uintptr_t)((VAR_24 + VAR_6 - 1) &~ (VAR_6 - 1));




  FUNC_0("revision      0x%x\n", VAR_18->Revision);
  FUNC_0("version       0x%x\n", VAR_18->Version);
  FUNC_0("command line  %s\n", VAR_18->CommandLine);
  FUNC_0("memory map    0x%x\n", VAR_18->MemoryMap);
  FUNC_0("memory map sz 0x%x\n", VAR_18->MemoryMapSize);
  FUNC_0("kaddr         0x%x\n", VAR_18->kaddr);
  FUNC_0("ksize         0x%x\n", VAR_18->ksize);
  FUNC_0("physfree      %p\n", VAR_20);
  FUNC_0("bootargs: %p, &ksize: %p &kaddr: %p\n",
   VAR_18,
   &VAR_18->ksize,
   &VAR_18->kaddr);
  FUNC_0("SMBIOS mem sz 0x%llx\n", VAR_18->PhysicalMemorySize);







  VAR_18 = (boot_args *)
      FUNC_13(VAR_21);
  FUNC_0("i386_init(0x%lx) kernelBootArgs=%p\n",
      (unsigned long)VAR_21, VAR_18);





  FUNC_4(VAR_0, VAR_18);
  FUNC_16(VAR_7);

  FUNC_2();
  FUNC_16(VAR_13);
  VAR_15 = (vm_offset_t)FUNC_1(VAR_20);

  FUNC_5(VAR_8);

  FUNC_7(FUNC_6(0));
  FUNC_16(VAR_9);
  FUNC_8(FUNC_6(0));

  FUNC_16(VAR_10);
  FUNC_9(FUNC_6(0));



 } else {

  FUNC_18((uintptr_t)FUNC_1(VAR_2));

  VAR_23 = VAR_19[(FUNC_3(VAR_1)>>VAR_4) & VAR_3];
  FUNC_0("CPU: %d, GSBASE initial value: 0x%llx\n", VAR_23, FUNC_17(VAR_5));
  FUNC_8(FUNC_6(VAR_23));
 }

 FUNC_16(VAR_12);
 FUNC_20(VAR_22 ? (uintptr_t) VAR_16
         : (uintptr_t) VAR_17,
    FUNC_6(VAR_23)->cpu_int_stack_top);
}
