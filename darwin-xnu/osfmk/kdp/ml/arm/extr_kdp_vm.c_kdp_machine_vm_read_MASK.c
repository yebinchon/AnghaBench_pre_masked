
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef scalar_t__ pmap_t ;
typedef int mach_vm_size_t ;
typedef scalar_t__ mach_vm_address_t ;
struct TYPE_3__ {scalar_t__ nbytes; scalar_t__ address; } ;
typedef TYPE_1__ kdp_readphysmem64_req_t ;
typedef scalar_t__ caddr_t ;
typedef int addr64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int,int) ;
 int FUNC_1 (TYPE_1__*,scalar_t__,int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (scalar_t__,int) ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (char*,int,...) ;
 int FUNC_4 (int) ;

mach_vm_size_t
FUNC_5( mach_vm_address_t VAR_6, caddr_t VAR_7, mach_vm_size_t VAR_8)
{
 addr64_t VAR_9, VAR_10;
 addr64_t VAR_11, VAR_12;
 mach_vm_size_t VAR_13, VAR_14;
 pmap_t VAR_15;





 VAR_9 = (addr64_t) VAR_6;
 VAR_10 = (addr64_t) VAR_7;

 if (VAR_4) {
  kdp_readphysmem64_req_t VAR_16;
  mach_vm_size_t VAR_17;

  VAR_16.address = VAR_6;
  VAR_16.nbytes = (uint32_t)VAR_8;
  VAR_17 = FUNC_1(&VAR_16, VAR_7, 0 );
  return VAR_17;
 } else {

  VAR_13 = VAR_8;

  if (VAR_2)
   VAR_15 = VAR_2;
  else
   VAR_15 = VAR_5;

  while (VAR_13 != 0) {




   if ((VAR_12 = FUNC_2(VAR_5, VAR_10)) == 0)
    goto exit;

   if ((VAR_11 = FUNC_2(VAR_15, VAR_9)) == 0)
    goto exit;


   if (!VAR_3 && ((!FUNC_4(VAR_12)) || (!FUNC_4(VAR_11))))
    goto exit;

   VAR_14 = VAR_0 - (VAR_9 & VAR_1);

   if (VAR_14 > (VAR_0 - (VAR_10 & VAR_1)))
    VAR_14 = VAR_0 - (VAR_10 & VAR_1);

   if (VAR_14 > VAR_13)
    VAR_14 = VAR_13;





   FUNC_0(VAR_11, VAR_12, VAR_14);

   VAR_9 += VAR_14;
   VAR_10 += VAR_14;
   VAR_13 -= VAR_14;
  }
 }
exit:



 return (VAR_8 - VAR_13);
}
