
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ vm_offset_t ;
struct TYPE_4__ {int topOfKernelData; } ;
typedef TYPE_1__ boot_args ;
struct TYPE_5__ {int length; int paddr; } ;
typedef TYPE_2__ MemoryMapFileInfo ;
typedef int DTEntry ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,void**,unsigned int*) ;
 int FUNC_1 (int *,char*,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (scalar_t__,int,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (scalar_t__,scalar_t__,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 scalar_t__ VAR_30 ;
 scalar_t__ VAR_31 ;
 scalar_t__ VAR_32 ;
 scalar_t__ VAR_33 ;
 int VAR_34 ;
 scalar_t__ VAR_35 ;
 scalar_t__ VAR_36 ;
 scalar_t__ VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 scalar_t__ VAR_40 ;
 int VAR_41 ;

void
FUNC_8(boot_args * VAR_42)
{

 VAR_16 = VAR_4;
 if (VAR_37 && (VAR_23 < VAR_16)) VAR_16 = VAR_23;
 FUNC_6(VAR_38);
 if (VAR_40 < VAR_16) VAR_16 = VAR_40;
 FUNC_6(VAR_16 < VAR_4);

 VAR_12 = VAR_16;
 VAR_27 = 0;

 DTEntry VAR_43;
 MemoryMapFileInfo *VAR_44;
 unsigned int VAR_45;
 int VAR_46;

 VAR_46 = FUNC_1(((void*)0), "chosen/memory-map", &VAR_43);
 FUNC_6(VAR_46 == VAR_8);

 VAR_46 = FUNC_0(VAR_43, "TrustCache", (void**)&VAR_44, &VAR_45);
 if (VAR_46 == VAR_8) {
  FUNC_6(VAR_45 == sizeof(MemoryMapFileInfo));

  VAR_12 = FUNC_7(VAR_44->paddr);
  VAR_27 = VAR_44->length;

  FUNC_2(VAR_12, VAR_27, VAR_1);
 }


 FUNC_4(VAR_23, VAR_37, VAR_1);


 FUNC_4(VAR_17, VAR_31, VAR_1);


 FUNC_3(VAR_20, VAR_34, VAR_1);




 if (!VAR_31 && !VAR_34) {
  if (VAR_37)
   FUNC_4(VAR_23 + VAR_37, VAR_40 - (VAR_23 + VAR_37), VAR_1);
 } else {





  if ((VAR_17 + VAR_31) < VAR_40) {
   FUNC_4(VAR_17 + VAR_31, VAR_40 - (VAR_17 + VAR_31), VAR_1);
  }
 }
 FUNC_2(VAR_40, VAR_38, VAR_1);





 FUNC_4(VAR_11, VAR_26, VAR_1);


 FUNC_5(VAR_41, VAR_39, VAR_1);



 FUNC_4(VAR_10, VAR_25, VAR_1);

 FUNC_4(VAR_9, VAR_24, VAR_3);
 FUNC_2((vm_offset_t)&VAR_7, VAR_2, VAR_3);
 FUNC_2((vm_offset_t)&VAR_6, VAR_2, VAR_3);
 FUNC_2((vm_offset_t)&VAR_5, VAR_2, VAR_3);

 FUNC_3(VAR_13, VAR_28, VAR_1);
 FUNC_4(VAR_15, VAR_30, VAR_1);
 FUNC_4(VAR_18, VAR_32, VAR_1);
 FUNC_3(VAR_14, VAR_29, VAR_1);

 FUNC_4(VAR_21, VAR_35, VAR_1);

 if (VAR_33 > 0)
  FUNC_4(VAR_19, VAR_33, VAR_1);

 FUNC_4(VAR_22, VAR_36, VAR_1);

 FUNC_2(FUNC_7(VAR_42->topOfKernelData), VAR_0, VAR_1);
}
