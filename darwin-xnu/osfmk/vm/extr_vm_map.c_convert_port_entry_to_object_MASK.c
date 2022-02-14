
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int vm_object_t ;
typedef TYPE_2__* vm_named_entry_t ;
typedef int uint32_t ;
typedef TYPE_3__* ipc_port_t ;
struct TYPE_13__ {scalar_t__ ip_kobject; } ;
struct TYPE_11__ {int object; } ;
struct TYPE_12__ {int protection; TYPE_1__ backing; int is_copy; int is_sub_map; int Lock; int ref_count; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_3__*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;

vm_object_t
FUNC_10(
 ipc_port_t VAR_3)
{
 vm_object_t VAR_4 = VAR_1;
 vm_named_entry_t VAR_5;
 uint32_t VAR_6 = 0;

 if (FUNC_0(VAR_3) &&
     (FUNC_2(VAR_3) == VAR_0)) {
 try_again:
  FUNC_3(VAR_3);
  if (FUNC_1(VAR_3) &&
      (FUNC_2(VAR_3) == VAR_0)) {
   VAR_5 = (vm_named_entry_t)VAR_3->ip_kobject;
   if (!(FUNC_5(&(VAR_5)->Lock))) {
    FUNC_4(VAR_3);
    VAR_6++;
    FUNC_8(VAR_6);
                         goto try_again;
   }
   VAR_5->ref_count++;
   FUNC_6(&(VAR_5)->Lock);
   FUNC_4(VAR_3);
   if (!(VAR_5->is_sub_map) &&
       !(VAR_5->is_copy) &&
       (VAR_5->protection & VAR_2)) {
    VAR_4 = VAR_5->backing.object;
    FUNC_9(VAR_4);
   }
   FUNC_7(VAR_3);
  }
 }

 return VAR_4;
}
