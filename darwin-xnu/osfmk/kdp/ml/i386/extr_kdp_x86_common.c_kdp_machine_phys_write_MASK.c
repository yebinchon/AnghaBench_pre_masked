
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
typedef scalar_t__ mach_vm_size_t ;
typedef scalar_t__ mach_vm_address_t ;
typedef int kdp_x86_xcpu_func_t ;
struct TYPE_4__ {scalar_t__ nbytes; scalar_t__ address; } ;
typedef TYPE_1__ kdp_writephysmem64_req_t ;
typedef scalar_t__ caddr_t ;
typedef unsigned int addr64_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ FUNC_0 () ;
 unsigned int FUNC_1 (int ,unsigned int) ;
 int FUNC_2 (scalar_t__,int ,TYPE_1__*,scalar_t__) ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (unsigned int,unsigned int,unsigned int) ;
 int FUNC_4 (char*,void*,scalar_t__,scalar_t__,unsigned int,unsigned int) ;

mach_vm_size_t
FUNC_5(kdp_writephysmem64_req_t *VAR_5, caddr_t VAR_6,
         uint16_t VAR_7)
{
 mach_vm_address_t VAR_8 = VAR_5->address;
 mach_vm_size_t VAR_9 = VAR_5->nbytes;
 addr64_t VAR_10;
 addr64_t VAR_11, VAR_12;
 unsigned VAR_13, VAR_14, VAR_15, VAR_16;

        if ((VAR_7 != VAR_1) && (VAR_7 != FUNC_0())) {
  return (mach_vm_size_t)
   FUNC_2(VAR_7, (kdp_x86_xcpu_func_t)FUNC_5, VAR_5, VAR_6);
        }





 VAR_10 = (addr64_t)(intptr_t)VAR_6;
 VAR_12 = (addr64_t)VAR_8;

 VAR_13 = (unsigned)VAR_9;

 while (VAR_13 != 0) {
  if ((VAR_11 = FUNC_1(VAR_4, VAR_10)) == 0)
   goto exit;


  VAR_15 = (unsigned)(VAR_3 - (VAR_11 & VAR_2));
  VAR_16 = (unsigned)(VAR_3 - (VAR_12 & VAR_2));

  if (VAR_15 > VAR_16)
   VAR_14 = VAR_16;
  else
   VAR_14 = VAR_15;
  if (VAR_14 > VAR_13)
   VAR_14 = VAR_13;

  if (VAR_0 == FUNC_3(VAR_11, VAR_12, VAR_14))
   goto exit;

  VAR_10 +=VAR_14;
  VAR_12 +=VAR_14;
  VAR_13 -= VAR_14;
 }

exit:
 return (VAR_9 - VAR_13);
}
