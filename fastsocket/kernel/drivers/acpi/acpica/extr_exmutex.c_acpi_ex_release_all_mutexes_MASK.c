
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int original_sync_level; int * thread_id; int * owner_thread; int os_mutex; scalar_t__ acquisition_depth; union acpi_operand_object* next; int * prev; } ;
union acpi_operand_object {TYPE_1__ mutex; } ;
struct acpi_thread_state {int current_sync_level; union acpi_operand_object* acquired_mutex_list; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 union acpi_operand_object* VAR_0 ;
 int FUNC_2 (int ) ;

void FUNC_3(struct acpi_thread_state *VAR_1)
{
 union acpi_operand_object *VAR_2 = VAR_1->acquired_mutex_list;
 union acpi_operand_object *VAR_3;

 FUNC_0();



 while (VAR_2) {
  VAR_3 = VAR_2;
  VAR_2 = VAR_3->mutex.next;

  VAR_3->mutex.prev = ((void*)0);
  VAR_3->mutex.next = ((void*)0);
  VAR_3->mutex.acquisition_depth = 0;



  if (VAR_3 == VAR_0) {



   (void)FUNC_1();
  } else {
   FUNC_2(VAR_3->mutex.os_mutex);
  }



  VAR_3->mutex.owner_thread = ((void*)0);
  VAR_3->mutex.thread_id = ((void*)0);



  VAR_1->current_sync_level =
      VAR_3->mutex.original_sync_level;
 }
}
