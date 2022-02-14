
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ vm_object_t ;
typedef TYPE_2__* vm_named_entry_t ;
typedef int uint32_t ;
typedef int kern_return_t ;
typedef TYPE_3__* ipc_port_t ;
struct TYPE_11__ {scalar_t__ ip_kobject; } ;
struct TYPE_9__ {scalar_t__ object; } ;
struct TYPE_10__ {TYPE_1__ backing; scalar_t__ is_copy; scalar_t__ is_sub_map; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (scalar_t__,int*,int *,int *) ;

kern_return_t
FUNC_5(
 ipc_port_t VAR_5,
 int *VAR_6,
 uint32_t *VAR_7,
 uint32_t *VAR_8)
{
 vm_named_entry_t VAR_9;
 vm_object_t VAR_10;
 kern_return_t VAR_11;

 if (!FUNC_0(VAR_5) ||
     FUNC_1(VAR_5) != VAR_0) {
  return VAR_1;
 }

 VAR_9 = (vm_named_entry_t) VAR_5->ip_kobject;

 FUNC_2(VAR_9);

 if (VAR_9->is_sub_map ||
     VAR_9->is_copy) {
  FUNC_3(VAR_9);
  return VAR_1;
 }

 VAR_10 = VAR_9->backing.object;
 if (VAR_10 == VAR_4) {
  FUNC_3(VAR_9);
  return VAR_1;
 }
 (void) VAR_6;
 (void) VAR_7;
 (void) VAR_8;
 VAR_11 = VAR_2;


 FUNC_3(VAR_9);

 return VAR_11;
}
