
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vnode_t ;
typedef int vfs_context_t ;
typedef int * upl_t ;
typedef scalar_t__ upl_size_t ;
typedef int upl_control_flags_t ;
typedef scalar_t__ uint64_t ;
typedef scalar_t__ kern_return_t ;
typedef int caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (char*,int,...) ;
 int FUNC_2 (int *,void*) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ,scalar_t__,scalar_t__*,int **,int *,unsigned int*,int*,int ) ;
 int FUNC_7 (int ,int ,int ,scalar_t__,scalar_t__,int ,int,int ,int*,int ) ;
 int FUNC_8 (int ,int *,int ,scalar_t__,scalar_t__,int,int*) ;
 int FUNC_9 (int ,int *,int ,scalar_t__,scalar_t__,int,int*) ;

int
FUNC_10(vnode_t VAR_20, uint64_t VAR_21, uint64_t VAR_22, int VAR_23, int VAR_24, void *VAR_25)
{
 int VAR_26 = 0;
 uint64_t VAR_27 = VAR_23 * VAR_7;

 kern_return_t VAR_28 = VAR_6;
 upl_t VAR_29 = ((void*)0);
 unsigned int VAR_30 = 0;
 upl_control_flags_t VAR_31 = 0;
 int VAR_32 = 0;
 upl_size_t VAR_33 = 0;

 VAR_31 = VAR_16 | VAR_17;

 if (VAR_25 == ((void*)0))
         VAR_32 = VAR_14;





 if ((VAR_24 & VAR_8) == VAR_0) {
  VAR_31 |= VAR_12;
 }

 VAR_33 = VAR_27;
 VAR_28 = FUNC_6( VAR_19,
    VAR_22,
    &VAR_33,
    &VAR_29,
    ((void*)0),
    &VAR_30,
    &VAR_31,
    VAR_18);

 if (VAR_28 != VAR_6 || (VAR_33 != VAR_27)) {
  FUNC_0("vm_map_create_upl failed with %d\n", VAR_28);
 }

 if (VAR_24 & VAR_8) {
  FUNC_8(VAR_20,
         VAR_29,
         0,
         VAR_21,
         VAR_27,
         VAR_32 | VAR_13,
         &VAR_26);
  if (VAR_26) {



   FUNC_1("vm_swapfile_io: vnode_pagein failed with %d.\n", VAR_26);

  }

 } else {
         FUNC_2(VAR_29, VAR_25);

  FUNC_9(VAR_20,
         VAR_29,
         0,
         VAR_21,
         VAR_27,
         VAR_32,
         &VAR_26);
  if (VAR_26) {



   FUNC_1("vm_swapfile_io: vnode_pageout failed with %d.\n", VAR_26);

  }
 }
 return VAR_26;
}
