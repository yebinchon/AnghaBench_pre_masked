
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vm_size_t ;
typedef scalar_t__ uint32_t ;
typedef scalar_t__ pmap_t ;
typedef scalar_t__ mach_vm_size_t ;
typedef scalar_t__ mach_vm_address_t ;
struct TYPE_3__ {scalar_t__ nbytes; scalar_t__ address; } ;
typedef TYPE_1__ kdp_readphysmem64_req_t ;
typedef scalar_t__ caddr_t ;
typedef int addr64_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (TYPE_1__*,scalar_t__,int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_4 (scalar_t__,int) ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_5 (int,int,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,scalar_t__,void*,scalar_t__) ;

mach_vm_size_t
FUNC_8( mach_vm_address_t VAR_9, caddr_t VAR_10, mach_vm_size_t VAR_11)
{
 addr64_t VAR_12 = FUNC_1((addr64_t)VAR_9);
 addr64_t VAR_13 = FUNC_1((addr64_t)(intptr_t)VAR_10);
 addr64_t VAR_14, VAR_15;
 mach_vm_size_t VAR_16 = VAR_11;
 mach_vm_size_t VAR_17 = 0, VAR_18, VAR_19;
 pmap_t VAR_20 = VAR_8;





 if (VAR_7 && FUNC_0(VAR_9)) {
  kdp_readphysmem64_req_t VAR_21;
  mach_vm_size_t VAR_22;

  VAR_21.address = VAR_9;
  VAR_21.nbytes = (uint32_t)VAR_11;
  VAR_22 = FUNC_3(&VAR_21, VAR_10, VAR_2);
  return VAR_22;
 }





 if (VAR_5)
  VAR_20 = VAR_5;

 while (VAR_16 != 0) {
  if (!(VAR_15 = FUNC_4(VAR_20,
       VAR_12)))
   goto exit;


  if(!(VAR_14 = FUNC_4(VAR_8, VAR_13)))
   goto exit;


  if (VAR_6 == VAR_1)
   if (!FUNC_6(FUNC_2(VAR_14)) || !FUNC_6(FUNC_2(VAR_15)))
    goto exit;


  VAR_18 = VAR_4 - (VAR_15 & VAR_3);
  VAR_19 = VAR_4 - (VAR_14 & VAR_3);
  if (VAR_18 > VAR_19)
   VAR_17 = VAR_19;
  else
   VAR_17 = VAR_18;
  if (VAR_17 > VAR_16)
   VAR_17 = VAR_16;


  if (VAR_0 == FUNC_5(VAR_15,
        VAR_14,
        (vm_size_t)VAR_17))
   goto exit;
  VAR_12 += VAR_17;
  VAR_13 += VAR_17;
  VAR_16 -= VAR_17;
 }
exit:
 return (VAR_11 - VAR_16);
}
