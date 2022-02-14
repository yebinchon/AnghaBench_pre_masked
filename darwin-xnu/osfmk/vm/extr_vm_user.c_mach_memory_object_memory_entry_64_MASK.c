
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int vm_prot_t ;
typedef TYPE_2__* vm_object_t ;
typedef int vm_object_offset_t ;
typedef TYPE_3__* vm_named_entry_t ;
typedef scalar_t__ memory_object_t ;
typedef scalar_t__ kern_return_t ;
typedef int ipc_port_t ;
typedef scalar_t__ host_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_10__ {TYPE_2__* object; } ;
struct TYPE_12__ {int protection; int ref_count; scalar_t__ internal; TYPE_1__ backing; int is_sub_map; scalar_t__ offset; int size; } ;
struct TYPE_11__ {scalar_t__ copy_strategy; scalar_t__ internal; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (unsigned int,int) ;
 TYPE_2__* VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (TYPE_3__**,int *) ;
 TYPE_2__* FUNC_4 (scalar_t__) ;
 TYPE_2__* FUNC_5 (int ) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;

kern_return_t
FUNC_8(
 host_t VAR_11,
 boolean_t VAR_12,
 vm_object_offset_t VAR_13,
 vm_prot_t VAR_14,
  memory_object_t VAR_15,
 ipc_port_t *VAR_16)
{
 unsigned int VAR_17;
 vm_named_entry_t VAR_18;
 ipc_port_t VAR_19;
 vm_object_t VAR_20;

        if (VAR_11 == VAR_1)
                return(VAR_4);

 if (VAR_15 == VAR_8 && VAR_12) {
  VAR_20 = FUNC_5(VAR_13);
  if (VAR_20->copy_strategy == VAR_7) {
   VAR_20->copy_strategy = VAR_6;
  }
 } else {
  VAR_20 = FUNC_4(VAR_15);
  if (VAR_20 != VAR_9) {
   FUNC_7(VAR_20);
  }
 }
 if (VAR_20 == VAR_9) {
  return VAR_3;
 }

 if (FUNC_3(&VAR_18, &VAR_19)
     != VAR_5) {
  FUNC_6(VAR_20);
  return VAR_2;
 }

 VAR_18->size = VAR_13;
 VAR_18->offset = 0;
 VAR_18->protection = VAR_14 & VAR_10;
 VAR_17 = FUNC_0(VAR_14);
 FUNC_1(VAR_17, VAR_18->protection);
 VAR_18->is_sub_map = VAR_0;
 FUNC_2(VAR_18->ref_count == 1);

 VAR_18->backing.object = VAR_20;
 VAR_18->internal = VAR_20->internal;
 FUNC_2(VAR_20->internal == VAR_12);

 *VAR_16 = VAR_19;
 return VAR_5;
}
