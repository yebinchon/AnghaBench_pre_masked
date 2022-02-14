
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* vm_shared_region_t ;
typedef int vm_prot_t ;
typedef scalar_t__ vm_map_size_t ;
typedef scalar_t__ vm_map_offset_t ;
typedef void task ;
typedef void _vm_map ;
typedef scalar_t__ kern_return_t ;
typedef void* ipc_port_t ;
typedef int cpu_type_t ;
typedef int cpu_subtype_t ;
typedef int boolean_t ;
struct TYPE_5__ {scalar_t__ sr_base_address; scalar_t__ sr_size; scalar_t__ sr_pmap_nesting_start; scalar_t__ sr_pmap_nesting_size; void* sr_mem_entry; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (void*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_4 (void*,scalar_t__*,scalar_t__,int ,int ,int ,int ,void*,scalar_t__,int ,int ,int ,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 TYPE_1__* FUNC_6 (void*,int ,int ,int ) ;
 int FUNC_7 (void*,TYPE_1__*) ;

kern_return_t
FUNC_8(
 struct _vm_map *VAR_11,
 struct task *VAR_12,
 boolean_t VAR_13,
 void *VAR_14,
 cpu_type_t VAR_15,
 cpu_subtype_t VAR_16)
{
 kern_return_t VAR_17;
 vm_shared_region_t VAR_18;
 vm_map_offset_t VAR_19, VAR_20, VAR_21;
 vm_map_size_t VAR_22, VAR_23;
 vm_map_offset_t VAR_24;
 vm_map_size_t VAR_25;
 ipc_port_t VAR_26;
 vm_prot_t VAR_27, VAR_28;

 FUNC_0(
  ("shared_region: -> "
   "enter(map=%p,task=%p,root=%p,cpu=<%d,%d>,64bit=%d)\n",
   (void )FUNC_2(VAR_11),
   (void )FUNC_2(VAR_12),
   (void )FUNC_2(VAR_14),
   VAR_15, VAR_16, VAR_13));


 VAR_18 = FUNC_6(VAR_14, VAR_15, VAR_16, VAR_13);
 if (VAR_18 == ((void*)0)) {

  FUNC_1(
   ("shared_region: -> "
    "enter(map=%p,task=%p,root=%p,cpu=<%d,%d>,64bit=%d): "
    "lookup failed !\n",
    (void )FUNC_2(VAR_11),
    (void )FUNC_2(VAR_12),
    (void )FUNC_2(VAR_14),
    VAR_15, VAR_16, VAR_13));

  return VAR_0;
 }

 VAR_17 = VAR_1;

 VAR_19 = VAR_18->sr_base_address;
 VAR_22 = VAR_18->sr_size;
 VAR_26 = VAR_18->sr_mem_entry;
 VAR_24 = VAR_18->sr_pmap_nesting_start;
 VAR_25 = VAR_18->sr_pmap_nesting_size;

 VAR_27 = VAR_9;







 VAR_28 = VAR_8;






 VAR_20 = 0;

 if (VAR_24 > VAR_19) {

  VAR_21 = VAR_19;
  VAR_23 = VAR_24 - VAR_19;
  VAR_17 = FUNC_4(
   VAR_11,
   &VAR_21,
   VAR_23,
   0,
   VAR_3,
   VAR_6,
   VAR_5,
   VAR_26,
   VAR_20,
   VAR_2,
   VAR_27,
   VAR_28,
   VAR_4);
  if (VAR_17 != VAR_1) {
   FUNC_1(
    ("shared_region: enter(%p,%p,%p,%d,%d,%d): "
     "vm_map_enter(0x%llx,0x%llx,%p) error 0x%x\n",
     (void )FUNC_2(VAR_11),
     (void )FUNC_2(VAR_12),
     (void )FUNC_2(VAR_14),
     VAR_15, VAR_16, VAR_13,
     (long long)VAR_21,
     (long long)VAR_23,
     (void )FUNC_2(VAR_26), VAR_17));
   goto done;
  }
  FUNC_0(
   ("shared_region: enter(%p,%p,%p,%d,%d,%d): "
    "vm_map_enter(0x%llx,0x%llx,%p) error 0x%x\n",
    (void )FUNC_2(VAR_11),
    (void )FUNC_2(VAR_12),
    (void )FUNC_2(VAR_14),
    VAR_15, VAR_16, VAR_13,
    (long long)VAR_21, (long long)VAR_23,
    (void )FUNC_2(VAR_26), VAR_17));
  VAR_20 += VAR_23;
  VAR_22 -= VAR_23;
 }





 for (;
      VAR_25 > 0;
      VAR_20 += VAR_23,
       VAR_22 -= VAR_23,
       VAR_25 -= VAR_23) {
  VAR_21 = VAR_19 + VAR_20;
  VAR_23 = VAR_25;
  if (VAR_23 > VAR_10) {
   VAR_23 = (vm_map_offset_t) VAR_10;
  }
  VAR_17 = FUNC_4(
   VAR_11,
   &VAR_21,
   VAR_23,
   0,
   VAR_3,
   VAR_6,
   VAR_7,
   VAR_26,
   VAR_20,
   VAR_2,
   VAR_27,
   VAR_28,
   VAR_4);
  if (VAR_17 != VAR_1) {
   FUNC_1(
    ("shared_region: enter(%p,%p,%p,%d,%d,%d): "
     "vm_map_enter(0x%llx,0x%llx,%p) error 0x%x\n",
     (void )FUNC_2(VAR_11),
     (void )FUNC_2(VAR_12),
     (void )FUNC_2(VAR_14),
     VAR_15, VAR_16, VAR_13,
     (long long)VAR_21,
     (long long)VAR_23,
     (void )FUNC_2(VAR_26), VAR_17));
   goto done;
  }
  FUNC_0(
   ("shared_region: enter(%p,%p,%p,%d,%d,%d): "
    "nested vm_map_enter(0x%llx,0x%llx,%p) error 0x%x\n",
    (void )FUNC_2(VAR_11),
    (void )FUNC_2(VAR_12),
    (void )FUNC_2(VAR_14),
    VAR_15, VAR_16, VAR_13,
    (long long)VAR_21, (long long)VAR_23,
    (void )FUNC_2(VAR_26), VAR_17));
 }
 if (VAR_22 > 0) {

  VAR_21 = VAR_19 + VAR_20;
  VAR_23 = VAR_22;
  VAR_17 = FUNC_4(
   VAR_11,
   &VAR_21,
   VAR_23,
   0,
   VAR_3,
   VAR_6,
   VAR_5,
   VAR_26,
   VAR_20,
   VAR_2,
   VAR_27,
   VAR_28,
   VAR_4);
  if (VAR_17 != VAR_1) {
   FUNC_1(
    ("shared_region: enter(%p,%p,%p,%d,%d,%d): "
     "vm_map_enter(0x%llx,0x%llx,%p) error 0x%x\n",
     (void )FUNC_2(VAR_11),
     (void )FUNC_2(VAR_12),
     (void )FUNC_2(VAR_14),
     VAR_15, VAR_16, VAR_13,
     (long long)VAR_21,
     (long long)VAR_23,
     (void )FUNC_2(VAR_26), VAR_17));
   goto done;
  }
  FUNC_0(
   ("shared_region: enter(%p,%p,%p,%d,%d,%d): "
    "vm_map_enter(0x%llx,0x%llx,%p) error 0x%x\n",
    (void )FUNC_2(VAR_11),
    (void )FUNC_2(VAR_12),
    (void )FUNC_2(VAR_14),
    VAR_15, VAR_16, VAR_13,
    (long long)VAR_21, (long long)VAR_23,
    (void )FUNC_2(VAR_26), VAR_17));
  VAR_20 += VAR_23;
  VAR_22 -= VAR_23;
 }
 FUNC_3(VAR_22 == 0);

done:
 if (VAR_17 == VAR_1) {

  FUNC_7(VAR_12, VAR_18);
 } else {

  FUNC_5(VAR_18);
  FUNC_7(VAR_12, ((void*)0));
 }

 FUNC_0(
  ("shared_region: enter(%p,%p,%p,%d,%d,%d) <- 0x%x\n",
   (void )FUNC_2(VAR_11),
   (void )FUNC_2(VAR_12),
   (void )FUNC_2(VAR_14),
   VAR_15, VAR_16, VAR_13, VAR_17));
 return VAR_17;
}
