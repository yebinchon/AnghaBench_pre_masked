
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_offset_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef struct tbd_ops* tbd_ops_t ;
struct tbd_ops {int * member_2; int * member_1; int * member_0; } ;
struct TYPE_2__ {scalar_t__* timebase_frequency_hz; } ;
typedef scalar_t__ ARM_BOARD_WFE_TIMEOUT_NS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int) ;
 struct tbd_ops VAR_4 ;
 int VAR_5 ;
 TYPE_1__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (void*,struct tbd_ops*,int ,int) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 struct tbd_ops VAR_21 ;
 struct tbd_ops VAR_22 ;
 struct tbd_ops VAR_23 ;
 int FUNC_2 (int ,char*) ;
 struct tbd_ops VAR_24 ;
 struct tbd_ops VAR_25 ;
 struct tbd_ops VAR_26 ;
 struct tbd_ops VAR_27 ;
 struct tbd_ops VAR_28 ;

__attribute__((used)) static uint32_t
FUNC_3(void *VAR_29)
{
 vm_offset_t VAR_30 = 0;
 vm_offset_t VAR_31 = 0;
 vm_offset_t VAR_32;
 vm_offset_t VAR_33 = 0;
 uint32_t VAR_34 = 0;
 struct tbd_ops VAR_35 = {&VAR_5, ((void*)0), ((void*)0)};
 tbd_ops_t VAR_36 = &VAR_35;


 VAR_30 = VAR_8;
 VAR_31 = VAR_10;
 VAR_32 = VAR_9;
  return 0;

 if (VAR_29 != ((void*)0))
  FUNC_1(VAR_29, VAR_36, VAR_33, VAR_34);

 return 1;
}
