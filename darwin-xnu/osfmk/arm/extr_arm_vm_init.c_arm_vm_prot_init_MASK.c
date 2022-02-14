
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int vm_offset_t ;
typedef int pt_entry_t ;
typedef scalar_t__ pmap_paddr_t ;
struct TYPE_3__ {scalar_t__ topOfKernelData; } ;
typedef TYPE_1__ boot_args ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int,int,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int,int,int ) ;
 int FUNC_4 (int,int,int ) ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_5 (scalar_t__) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;

void
FUNC_6(boot_args * VAR_34)
{



 boolean_t VAR_35 = VAR_5;
 FUNC_4(VAR_12, VAR_31 + (VAR_32 - VAR_12), VAR_5);

 if (VAR_9) {




  FUNC_3(VAR_18, VAR_15 - VAR_18, VAR_5);
  FUNC_1(VAR_15, VAR_16, VAR_5);
  FUNC_3(VAR_15 + VAR_16, (VAR_18 + VAR_25) - (VAR_15 + VAR_16), VAR_5);
 } else {

  FUNC_3(VAR_18, VAR_25, VAR_5);
 }
 FUNC_3(VAR_17, VAR_24, VAR_8);
 FUNC_1((vm_offset_t)&VAR_14, VAR_7, VAR_8);
 FUNC_1((vm_offset_t)&VAR_13, VAR_7, VAR_8);
 FUNC_1((vm_offset_t)&VAR_11, VAR_7, VAR_8);

 FUNC_2(VAR_20, VAR_27, VAR_35);
 FUNC_3(VAR_22, VAR_29, VAR_35);
 FUNC_3(VAR_21, VAR_28, VAR_5);
 FUNC_3(VAR_23, VAR_30, VAR_8);
 FUNC_3(VAR_23 + VAR_30,
                              VAR_10 - (VAR_23 + VAR_30), VAR_35);
 FUNC_3(VAR_10, FUNC_5(VAR_34->topOfKernelData) - VAR_10, VAR_35);
 FUNC_1(VAR_19, VAR_26, VAR_5);
 FUNC_3(FUNC_5(VAR_34->topOfKernelData), VAR_1 * 8, VAR_5);
 FUNC_3(FUNC_5(VAR_34->topOfKernelData) + VAR_1 * 8, VAR_1, VAR_5);
 FUNC_4(FUNC_5(VAR_34->topOfKernelData) + VAR_1 * 9, VAR_1, VAR_5);


 FUNC_3(FUNC_5(VAR_34->topOfKernelData) + VAR_1 * 10,
                           VAR_33 - (FUNC_5(VAR_34->topOfKernelData) + VAR_1 * 10), VAR_35);





 pmap_paddr_t VAR_36 = (pmap_paddr_t)(VAR_34->topOfKernelData) + (VAR_1 * 9);
 pt_entry_t *VAR_37 = (pt_entry_t *)FUNC_5(VAR_36);

 int VAR_38 = (VAR_6 & VAR_3) >> VAR_4;
 pt_entry_t VAR_39 = VAR_37[VAR_38];

 VAR_39 = (VAR_39 & ~VAR_2) | FUNC_0(VAR_0);

 VAR_37[VAR_38] = VAR_39;
}
