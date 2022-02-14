
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int flags; int method_flags; int owner_id; TYPE_3__* mutex; scalar_t__ thread_count; } ;
union acpi_operand_object {TYPE_4__ method; } ;
struct acpi_walk_state {int method_node; TYPE_1__* thread; } ;
struct TYPE_6__ {int * thread_id; int os_mutex; int original_sync_level; int acquisition_depth; } ;
struct TYPE_7__ {TYPE_2__ mutex; } ;
struct TYPE_5__ {int current_sync_level; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,struct acpi_walk_state*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (union acpi_operand_object*) ;
 int FUNC_4 (struct acpi_walk_state*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int VAR_5 ;
 int VAR_6 ;

void
FUNC_9(union acpi_operand_object *VAR_7,
     struct acpi_walk_state *VAR_8)
{

 FUNC_2(VAR_5, VAR_8);



 if (!VAR_7) {
  VAR_6;
 }

 if (VAR_8) {



  FUNC_4(VAR_8);





  if (VAR_7->method.mutex) {



   VAR_7->method.mutex->mutex.acquisition_depth--;
   if (!VAR_7->method.mutex->mutex.acquisition_depth) {
    VAR_8->thread->current_sync_level =
        VAR_7->method.mutex->mutex.
        original_sync_level;

    FUNC_7(VAR_7->method.
            mutex->mutex.os_mutex);
    VAR_7->method.mutex->mutex.thread_id = ((void*)0);
   }
  }







  if (!(VAR_7->method.flags & VAR_4)) {



   FUNC_6(VAR_8->
        method_node);





   if (VAR_7->method.
       flags & VAR_3) {
    FUNC_5(VAR_7->
          method.
          owner_id);
   }
  }
 }



 if (VAR_7->method.thread_count) {
  VAR_7->method.thread_count--;
 } else {
  FUNC_1((VAR_1, "Invalid zero thread count in method"));
 }



 if (VAR_7->method.thread_count) {




  FUNC_0((VAR_0,
      "*** Completed execution of one thread, %d threads remaining\n",
      VAR_7->method.thread_count));
 } else {
  if ((VAR_7->method.method_flags & VAR_2)
      && (!VAR_7->method.mutex)) {
   (void)FUNC_3(VAR_7);
  }



  if (!(VAR_7->method.flags & VAR_4)) {
   FUNC_8(&VAR_7->method.owner_id);
  }
 }

 VAR_6;
}
