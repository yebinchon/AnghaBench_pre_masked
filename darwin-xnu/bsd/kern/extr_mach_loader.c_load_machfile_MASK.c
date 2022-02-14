
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int vm_map_t ;
typedef int vm_map_size_t ;
typedef int vm_map_offset_t ;
typedef scalar_t__ thread_t ;
typedef int task_t ;
struct vnode {int dummy; } ;
struct mach_header {int flags; } ;
struct image_params {scalar_t__ ip_arch_offset; scalar_t__ ip_arch_size; int ip_flags; scalar_t__ ip_new_thread; TYPE_1__* ip_vattr; struct vnode* ip_vp; } ;
typedef int proc_t ;
typedef int pmap_t ;
typedef scalar_t__ off_t ;
typedef scalar_t__ load_return_t ;
struct TYPE_7__ {int is_64bit_addr; int is_64bit_data; scalar_t__ has_pagezero; } ;
typedef TYPE_2__ load_result_t ;
typedef int kern_return_t ;
typedef int int64_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_6__ {scalar_t__ va_data_size; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 scalar_t__ VAR_20 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__) ;
 TYPE_2__ VAR_21 ;
 int VAR_22 ;
 scalar_t__ FUNC_6 (struct vnode*,int ,scalar_t__,struct mach_header*,scalar_t__,scalar_t__,int ,int,int,TYPE_2__*,int *,struct image_params*) ;
 int FUNC_7 (int ,int ,int) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 () ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int) ;
 int FUNC_16 (int ,int ,int ,scalar_t__) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int ,int*,int*) ;
 int FUNC_22 (int ) ;
 scalar_t__ FUNC_23 (int ,int) ;
 int FUNC_24 (int ) ;
 int FUNC_25 (int ,int) ;
 int FUNC_26 (int ,int ) ;
 int FUNC_27 (int ) ;
 int FUNC_28 (int ) ;

load_return_t
FUNC_29(
 struct image_params *VAR_23,
 struct mach_header *VAR_24,
 thread_t VAR_25,
 vm_map_t *VAR_26,
 load_result_t *VAR_27
)
{
 struct vnode *VAR_28 = VAR_23->ip_vp;
 off_t VAR_29 = VAR_23->ip_arch_offset;
 off_t VAR_30 = VAR_23->ip_arch_size;
 off_t VAR_31 = VAR_23->ip_vattr->va_data_size;
 pmap_t VAR_32 = 0;
 vm_map_t VAR_33;
 load_result_t VAR_34;
 load_return_t VAR_35;
 boolean_t VAR_36 = VAR_17;
 int VAR_37 = (VAR_23->ip_flags & VAR_4);
 task_t VAR_38 = FUNC_3();
 proc_t VAR_39 = FUNC_2();
 int64_t VAR_40 = 0;
 int64_t VAR_41 = 0;
 int64_t VAR_42 = 0;
 int64_t VAR_43 = 0;
 kern_return_t VAR_44;

 if (VAR_30 > VAR_31) {
  return(VAR_9);
 }

 VAR_27->is_64bit_addr = ((VAR_23->ip_flags & VAR_6) == VAR_6);
 VAR_27->is_64bit_data = ((VAR_23->ip_flags & VAR_7) == VAR_7);

 task_t VAR_45;
 if (VAR_23->ip_new_thread) {
  VAR_45 = FUNC_5(VAR_23->ip_new_thread);
 } else {
  VAR_45 = VAR_38;
 }
 VAR_32 = FUNC_7(FUNC_4(VAR_45),
      (vm_map_size_t) 0,
      VAR_27->is_64bit_addr);
 VAR_33 = FUNC_16(VAR_32,
   0,
   FUNC_15(VAR_27->is_64bit_addr),
   VAR_17);
 if ( !FUNC_1() && (VAR_24->flags & VAR_12) ) {
         FUNC_18(VAR_33);

 }




 if ((VAR_24->flags & VAR_13) && !(VAR_23->ip_flags & VAR_2))
  FUNC_19(VAR_33);




 if (!(VAR_23->ip_flags & VAR_3)) {
  FUNC_21(VAR_33, &VAR_43, &VAR_42);
  VAR_43 = (FUNC_9() % VAR_43) * VAR_42;

  VAR_40 = FUNC_9();
  VAR_40 %= FUNC_20(VAR_33);
  VAR_40 <<= FUNC_24(VAR_33);

  VAR_41 = FUNC_9();
  VAR_41 %= FUNC_22(VAR_33);
  VAR_41 <<= FUNC_24(VAR_33);

  VAR_40 += VAR_43;
 }

 if (!VAR_27)
  VAR_27 = &VAR_34;

 *VAR_27 = VAR_21;




 VAR_27->is_64bit_addr = ((VAR_23->ip_flags & VAR_6) == VAR_6);
 VAR_27->is_64bit_data = ((VAR_23->ip_flags & VAR_7) == VAR_7);

 VAR_35 = FUNC_6(VAR_28, VAR_33, VAR_25, VAR_24, VAR_29, VAR_30,
                       0, VAR_40, VAR_41, VAR_27,
         ((void*)0), VAR_23);

 if (VAR_35 != VAR_11) {
  FUNC_17(VAR_33);
  return(VAR_35);
 }





 if (!VAR_27->is_64bit_addr) {
  VAR_36 = VAR_0;
 }







 if (VAR_27->is_64bit_addr &&
     (VAR_23->ip_flags & VAR_5)) {
  int VAR_46;
  vm_map_offset_t VAR_47;

  VAR_46 = FUNC_9();
  VAR_46 &= (1 << 8)-1;
  VAR_47 = (((vm_map_offset_t)VAR_46)
         << 27);
  FUNC_25(VAR_33, VAR_47);
 }





 if (VAR_36 &&
     (FUNC_23(VAR_33, 0x1000) == VAR_0)) {
  {
   FUNC_17(VAR_33);
   return (VAR_9);
  }
 }

 FUNC_14(VAR_33);






 if (VAR_37) {
  VAR_44 = FUNC_13(VAR_38);
  if (VAR_44 != VAR_8) {
   FUNC_17(VAR_33);
   return (VAR_10);
  }
  FUNC_8(VAR_39, 0);
  FUNC_28(VAR_39);
  FUNC_10(VAR_38);
  FUNC_27(VAR_39);






  FUNC_11(FUNC_5(VAR_25), VAR_38);
 }
 *VAR_26 = VAR_33;
 return(VAR_11);
}
