
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vm_prot_t ;
typedef TYPE_1__* vm_map_t ;
typedef int vm_map_offset_t ;
typedef int uint32_t ;
typedef scalar_t__ ppnum_t ;
typedef int pmap_t ;
typedef int mach_vm_size_t ;
typedef scalar_t__ mach_vm_address_t ;
typedef int kern_return_t ;
struct TYPE_4__ {int pmap; } ;


 unsigned int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 unsigned int VAR_8 ;





 unsigned int VAR_9 ;


 int FUNC_2 (int ,scalar_t__,scalar_t__,int ,int,int ,int ) ;
 int FUNC_3 (scalar_t__,unsigned int) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*,int ) ;

kern_return_t FUNC_6(vm_map_t VAR_10, mach_vm_address_t VAR_11, mach_vm_address_t VAR_12,
   mach_vm_size_t VAR_13, unsigned int VAR_14)
{
    vm_prot_t VAR_15;
    unsigned int VAR_16;
    ppnum_t VAR_17;
    pmap_t VAR_18 = VAR_10->pmap;

    VAR_15 = (VAR_14 & VAR_9)
  ? VAR_0 : (VAR_0|VAR_1);

    VAR_17 = (ppnum_t)FUNC_1(VAR_12);

    switch(VAR_14 & VAR_8 ) {

 case 132:
 default:
     VAR_16 = FUNC_0(VAR_12);
     break;

 case 131:
     VAR_16 = VAR_4;
     break;

 case 128:
     VAR_16 = VAR_7;
     break;

 case 129:
     VAR_16 = VAR_6;
     break;

 case 134:
     VAR_16 = VAR_2;
     break;

 case 133:
     VAR_16 = VAR_3;
     break;

 case 130:
     VAR_16 = VAR_5;
     break;
    }

    FUNC_3(VAR_17, VAR_16);

    FUNC_5(VAR_10, (vm_map_offset_t)VAR_11);



    return FUNC_2(VAR_18, VAR_11, VAR_17, (uint32_t) FUNC_1(FUNC_4(VAR_13)), VAR_15, 0, 0);
}
