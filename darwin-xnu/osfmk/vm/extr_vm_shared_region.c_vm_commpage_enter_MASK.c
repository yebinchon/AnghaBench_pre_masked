
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int vm_tag_t ;
typedef scalar_t__ vm_map_t ;
typedef int vm_map_size_t ;
typedef int vm_map_offset_t ;
struct TYPE_4__ {int vmkf_beyond_max; } ;
typedef TYPE_1__ vm_map_kernel_flags_t ;
typedef scalar_t__ task_t ;
typedef scalar_t__ kern_return_t ;
typedef scalar_t__ ipc_port_t ;
typedef int boolean_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int VAR_7 ;
 TYPE_1__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 int FUNC_4 (int ) ;
 int VAR_28 ;
 scalar_t__ FUNC_5 (scalar_t__,int*,int,int ,int,TYPE_1__,int ,scalar_t__,int ,int ,int,int,int ) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;

kern_return_t
FUNC_8(
 vm_map_t VAR_29,
 task_t VAR_30,
 boolean_t VAR_31)
{
 ipc_port_t VAR_32, VAR_33;
 vm_map_offset_t VAR_34, VAR_35, VAR_36;
 vm_map_size_t VAR_37, VAR_38, VAR_39;
 int VAR_40;
 vm_map_kernel_flags_t VAR_41;
 kern_return_t VAR_42;

 FUNC_0(
  ("commpage: -> enter(%p,%p)\n",
   (void )FUNC_2(VAR_29),
   (void *)FUNC_2(VAR_30)));

 VAR_39 = VAR_21;

 VAR_40 = VAR_4;
 VAR_41 = VAR_8;
 VAR_41.vmkf_beyond_max = VAR_3;


 FUNC_3(! (VAR_31 ^ FUNC_6(VAR_29)));
 if (VAR_31) {
  VAR_32 = VAR_23;
  VAR_34 = (vm_map_offset_t) VAR_18;
  VAR_37 = VAR_17;
  VAR_38 = VAR_20;
  VAR_35 = VAR_19;
  VAR_33 = VAR_26;
  VAR_36 = (vm_map_offset_t) VAR_27;
 } else {
  VAR_32 = VAR_22;
  VAR_34 =
   (vm_map_offset_t)(unsigned) VAR_14;
  VAR_37 = VAR_13;
  VAR_38 = VAR_16;
  VAR_35 = VAR_15;
  VAR_33 = VAR_24;
  VAR_36 = (vm_map_offset_t) VAR_25;
 }

    vm_tag_t VAR_43 = VAR_7;
 if ((VAR_34 & (VAR_28 - 1)) == 0 &&
     (VAR_37 & (VAR_28 - 1)) == 0) {

  VAR_43 = VAR_9;
 }

 FUNC_3(VAR_32 != VAR_1);
 VAR_42 = FUNC_5(
  VAR_29,
  &VAR_34,
  VAR_37,
  0,
  VAR_40,
  VAR_41,
  VAR_43,
  VAR_32,
  0,
  VAR_0,
  VAR_12,
  VAR_12,
  VAR_6);
 if (VAR_42 != VAR_2) {
  FUNC_1(
   ("commpage: enter(%p,0x%llx,0x%llx) "
    "commpage %p mapping failed 0x%x\n",
    (void )FUNC_2(VAR_29),
    (long long)VAR_34,
    (long long)VAR_37,
    (void )FUNC_2(VAR_32), VAR_42));
 }


 FUNC_3(VAR_33 != VAR_1);
 VAR_42 = FUNC_5(
  VAR_29,
  &VAR_36,
  VAR_39,
  0,
  VAR_40,
  VAR_41,
  VAR_43,
  VAR_33,
  0,
  VAR_0,
  VAR_12|VAR_11,
  VAR_12|VAR_11,
  VAR_6);
 if (VAR_42 != VAR_2) {
  FUNC_1(
   ("commpage text: enter(%p,0x%llx,0x%llx) "
    "commpage text %p mapping failed 0x%x\n",
    (void )FUNC_2(VAR_29),
    (long long)VAR_36,
    (long long)VAR_39,
    (void )FUNC_2(VAR_33), VAR_42));
 }





 if (VAR_38 != 0) {
  VAR_42 = FUNC_5(
   VAR_29,
   &VAR_35,
   VAR_38,
   0,
   VAR_4,
   VAR_41,
   VAR_43,
   VAR_1,
   0,
   VAR_0,
   VAR_10,
   VAR_10,
   VAR_5);
  if (VAR_42 != VAR_2) {
   FUNC_1(
    ("commpage: enter(%p,0x%llx,0x%llx) "
     "objc mapping failed 0x%x\n",
     (void )FUNC_2(VAR_29),
     (long long)VAR_35,
     (long long)VAR_38, VAR_42));
  }
 }

 FUNC_0(
  ("commpage: enter(%p,%p) <- 0x%x\n",
   (void )FUNC_2(VAR_29),
   (void )FUNC_2(VAR_30), VAR_42));
 return VAR_42;

}
