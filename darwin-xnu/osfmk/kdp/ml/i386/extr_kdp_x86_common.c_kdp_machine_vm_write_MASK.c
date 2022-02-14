
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ mach_vm_size_t ;
typedef scalar_t__ mach_vm_address_t ;
typedef scalar_t__ caddr_t ;
typedef unsigned int addr64_t ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int FUNC_0 (unsigned int) ;
 unsigned int FUNC_1 (int ,unsigned int) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (unsigned int,unsigned int,unsigned int) ;
 int FUNC_3 (char*,void*,scalar_t__,scalar_t__,unsigned int,unsigned int) ;

mach_vm_size_t
FUNC_4( caddr_t VAR_4, mach_vm_address_t VAR_5, mach_vm_size_t VAR_6)
{
 addr64_t VAR_7, VAR_8;
 addr64_t VAR_9, VAR_10;
 unsigned VAR_11, VAR_12, VAR_13, VAR_14;





 VAR_7 = FUNC_0((addr64_t)(intptr_t)VAR_4);
 VAR_8 = FUNC_0((addr64_t)VAR_5);

 VAR_11 = (unsigned)VAR_6;

 while (VAR_11 != 0) {
  if ((VAR_10 = FUNC_1(VAR_3, VAR_8)) == 0)
   goto exit;

  if ((VAR_9 = FUNC_1(VAR_3, VAR_7)) == 0)
   goto exit;


  VAR_13 = (unsigned)(VAR_2 - (VAR_9 & VAR_1));
  VAR_14 = (unsigned)(VAR_2 - (VAR_10 & VAR_1));

  if (VAR_13 > VAR_14)
   VAR_12 = VAR_14;
  else
   VAR_12 = VAR_13;
  if (VAR_12 > VAR_11)
   VAR_12 = VAR_11;

  if (VAR_0 == FUNC_2(VAR_9, VAR_10, VAR_12))
   goto exit;

  VAR_7 +=VAR_12;
  VAR_8 +=VAR_12;
  VAR_11 -= VAR_12;
 }
exit:
 return (VAR_6 - VAR_11);
}
