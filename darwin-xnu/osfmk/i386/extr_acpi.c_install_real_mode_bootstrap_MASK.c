
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
typedef int addr64_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (scalar_t__,int ,scalar_t__) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,unsigned int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

void
FUNC_3(void *VAR_4)
{







 FUNC_0(FUNC_1((vm_offset_t) VAR_2),
     (addr64_t) VAR_1,
     VAR_3-VAR_2);





 FUNC_2(
  VAR_0+VAR_1,
  (unsigned int)FUNC_1((vm_offset_t)VAR_4));


 __asm__("wbinvd");
}
