
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ vm_offset_t ;
typedef int uint64_t ;
typedef int spl_t ;
typedef scalar_t__ kern_return_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int ,scalar_t__*,scalar_t__,scalar_t__,int,int ) ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (char*,int ,int ,int,scalar_t__) ;
 int FUNC_2 () ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_4 () ;
 int VAR_16 ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ VAR_17 ;
 int FUNC_6 () ;

__attribute__((used)) static vm_offset_t
FUNC_7(void)
{
 vm_offset_t VAR_18 = 0;
 spl_t VAR_19;
 int VAR_20 = 0;
 kern_return_t VAR_21 = VAR_0;

 VAR_19 = FUNC_2();
 FUNC_4();
 VAR_11++;
 VAR_18 = VAR_14;
 if (VAR_18 != 0) {
  VAR_14 = FUNC_5(VAR_18);
  VAR_12--;
 }
 else {
  if (++VAR_17 > VAR_15)
   VAR_15 = VAR_17;
  VAR_16++;
 }
 VAR_13--;
 FUNC_6();
 FUNC_3(VAR_19);

 if (VAR_18 == 0) {







  VAR_20 = VAR_1 | VAR_2 | VAR_4 | VAR_3 | VAR_5;
  VAR_21 = FUNC_0(VAR_8, &VAR_18,
        VAR_9 + (2*VAR_6),
        VAR_10,
        VAR_20,
        VAR_7);
  if (VAR_21 != VAR_0) {
   FUNC_1("stack_alloc: kernel_memory_allocate(size:0x%llx, mask: 0x%llx, flags: 0x%x) failed with %d\n", (uint64_t)(VAR_9 + (2*VAR_6)), (uint64_t)VAR_10, VAR_20, VAR_21);
  }






  VAR_18 += VAR_6;
 }
 return VAR_18;
}
