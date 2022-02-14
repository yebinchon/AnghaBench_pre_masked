
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int vm_purgable_t ;
typedef TYPE_2__* vm_object_t ;
typedef TYPE_3__* vm_named_entry_t ;
typedef int kern_return_t ;
typedef TYPE_4__* ipc_port_t ;
struct TYPE_17__ {scalar_t__ ip_kobject; } ;
struct TYPE_14__ {TYPE_2__* object; } ;
struct TYPE_16__ {scalar_t__ offset; scalar_t__ size; TYPE_1__ backing; scalar_t__ is_copy; scalar_t__ is_sub_map; } ;
struct TYPE_15__ {scalar_t__ vo_size; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_4__*) ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int ,int*) ;
 int FUNC_6 (TYPE_2__*) ;

kern_return_t
FUNC_7(
 ipc_port_t VAR_8,
 vm_purgable_t VAR_9,
 int *VAR_10)
{
 kern_return_t VAR_11;
 vm_named_entry_t VAR_12;
 vm_object_t VAR_13;

 if (!FUNC_0(VAR_8) ||
     FUNC_1(VAR_8) != VAR_0) {
  return VAR_1;
 }
 if (VAR_9 != VAR_5 &&
     VAR_9 != VAR_4 &&
     VAR_9 != VAR_6)
  return(VAR_1);

 if ((VAR_9 == VAR_5 ||
      VAR_9 == VAR_6) &&
     (((*VAR_10 & ~(VAR_3)) != 0) ||
      ((*VAR_10 & VAR_7) > VAR_7)))
  return(VAR_1);

 VAR_12 = (vm_named_entry_t) VAR_8->ip_kobject;

 FUNC_2(VAR_12);

 if (VAR_12->is_sub_map ||
     VAR_12->is_copy) {
  FUNC_3(VAR_12);
  return VAR_1;
 }

 VAR_13 = VAR_12->backing.object;
 if (VAR_13 == VAR_2) {
  FUNC_3(VAR_12);
  return VAR_1;
 }

 FUNC_4(VAR_13);


 if (VAR_12->offset != 0 || VAR_13->vo_size != VAR_12->size) {
  FUNC_6(VAR_13);
  FUNC_3(VAR_12);
  return VAR_1;
 }

 FUNC_3(VAR_12);

 VAR_11 = FUNC_5(VAR_13, VAR_9, VAR_10);

 FUNC_6(VAR_13);

 return VAR_11;
}
