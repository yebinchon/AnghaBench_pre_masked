
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int mach_vm_size_t ;
typedef int mach_vm_address_t ;
typedef int caddr_t ;
typedef int addr64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int,int) ;
 int FUNC_1 (int,unsigned int,int ) ;
 int FUNC_2 (int,unsigned int,int ) ;
 int FUNC_3 (int ,int) ;
 int VAR_2 ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*,int,int,int,...) ;

mach_vm_size_t
FUNC_6( caddr_t VAR_3, mach_vm_address_t VAR_4, mach_vm_size_t VAR_5)
{
 addr64_t VAR_6, VAR_7;
 addr64_t VAR_8, VAR_9;
 mach_vm_size_t VAR_10, VAR_11, VAR_12, VAR_13;





 VAR_6 = (addr64_t) VAR_3;
 VAR_7 = (addr64_t) VAR_4;

 VAR_10 = VAR_5;

 while (VAR_10 != 0) {
  if ((VAR_9 = FUNC_3(VAR_2, VAR_7)) == 0)
   goto exit;

  if ((VAR_8 = FUNC_3(VAR_2, VAR_6)) == 0)
   goto exit;



  if ((!FUNC_4(VAR_9)) || (!FUNC_4(VAR_8)))
   goto exit;

  VAR_12 = ((VAR_8 + VAR_0) & (-VAR_0)) - VAR_8;
  VAR_13 = ((VAR_9 + VAR_0) & (-VAR_0)) - VAR_9;

  if (VAR_12 > VAR_13)
   VAR_11 = VAR_13;
  else
   VAR_11 = VAR_12;
  if (VAR_11 > VAR_10)
   VAR_11 = VAR_10;




  FUNC_0(VAR_8, VAR_9, VAR_11);
  FUNC_1(VAR_9, (unsigned int)VAR_11, VAR_1);
  FUNC_2(VAR_9, (unsigned int)VAR_11, VAR_1);

  VAR_6 += VAR_11;
  VAR_7 += VAR_11;
  VAR_10 -= VAR_11;
 }
exit:
 return (VAR_5 - VAR_10);
}
