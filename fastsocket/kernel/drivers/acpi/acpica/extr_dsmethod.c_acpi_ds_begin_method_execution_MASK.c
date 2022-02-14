
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ thread_count; int method_flags; scalar_t__ sync_level; TYPE_3__* mutex; int owner_id; } ;
union acpi_operand_object {TYPE_4__ method; } ;
struct acpi_walk_state {TYPE_1__* thread; } ;
struct acpi_namespace_node {int dummy; } ;
typedef int acpi_status ;
struct TYPE_6__ {scalar_t__ sync_level; scalar_t__ thread_id; scalar_t__ original_sync_level; int os_mutex; int acquisition_depth; } ;
struct TYPE_7__ {TYPE_2__ mutex; } ;
struct TYPE_5__ {scalar_t__ current_sync_level; scalar_t__ thread_id; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,struct acpi_namespace_node*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (union acpi_operand_object*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct acpi_namespace_node*) ;
 int VAR_8 ;
 int FUNC_8 (int ) ;

acpi_status
FUNC_9(struct acpi_namespace_node *VAR_9,
          union acpi_operand_object *VAR_10,
          struct acpi_walk_state *VAR_11)
{
 acpi_status VAR_12 = VAR_6;

 FUNC_2(VAR_8, VAR_9);

 if (!VAR_9) {
  FUNC_8(VAR_5);
 }



 if (VAR_10->method.thread_count == VAR_0) {
  FUNC_0((VAR_4,
       "Method reached maximum reentrancy limit (255)"));
  FUNC_8(VAR_2);
 }




 if (VAR_10->method.method_flags & VAR_7) {





  if (!VAR_10->method.mutex) {
   VAR_12 = FUNC_3(VAR_10);
   if (FUNC_1(VAR_12)) {
    FUNC_8(VAR_12);
   }
  }
  if (VAR_11 &&
      (VAR_11->thread->current_sync_level >
       VAR_10->method.mutex->mutex.sync_level)) {
   FUNC_0((VAR_4,
        "Cannot acquire Mutex for method [%4.4s], current SyncLevel is too large (%d)",
        FUNC_7(VAR_9),
        VAR_11->thread->current_sync_level));

   FUNC_8(VAR_3);
  }





  if (!VAR_11 ||
      !VAR_10->method.mutex->mutex.thread_id ||
      (VAR_11->thread->thread_id !=
       VAR_10->method.mutex->mutex.thread_id)) {




   VAR_12 =
       FUNC_4(VAR_10->method.mutex->
            mutex.os_mutex,
            VAR_1);
   if (FUNC_1(VAR_12)) {
    FUNC_8(VAR_12);
   }



   if (VAR_11) {
    VAR_10->method.mutex->mutex.
        original_sync_level =
        VAR_11->thread->current_sync_level;

    VAR_10->method.mutex->mutex.thread_id =
        VAR_11->thread->thread_id;
    VAR_11->thread->current_sync_level =
        VAR_10->method.sync_level;
   } else {
    VAR_10->method.mutex->mutex.
        original_sync_level =
        VAR_10->method.mutex->mutex.sync_level;
   }
  }



  VAR_10->method.mutex->mutex.acquisition_depth++;
 }






 if (!VAR_10->method.owner_id) {
  VAR_12 = FUNC_6(&VAR_10->method.owner_id);
  if (FUNC_1(VAR_12)) {
   goto cleanup;
  }
 }





 VAR_10->method.thread_count++;
 FUNC_8(VAR_12);

      cleanup:


 if (VAR_10->method.mutex) {
  FUNC_5(VAR_10->method.mutex->mutex.os_mutex);
 }
 FUNC_8(VAR_12);
}
