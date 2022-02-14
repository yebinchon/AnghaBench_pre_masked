
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {TYPE_4__* next; int original_sync_level; TYPE_3__* prev; struct acpi_thread_state* owner_thread; } ;
union acpi_operand_object {TYPE_5__ mutex; } ;
struct acpi_thread_state {TYPE_4__* acquired_mutex_list; } ;
struct TYPE_6__ {TYPE_3__* prev; } ;
struct TYPE_9__ {TYPE_1__ mutex; } ;
struct TYPE_7__ {int original_sync_level; TYPE_4__* next; } ;
struct TYPE_8__ {TYPE_2__ mutex; } ;



void FUNC_0(union acpi_operand_object *VAR_0)
{
 struct acpi_thread_state *VAR_1 = VAR_0->mutex.owner_thread;

 if (!VAR_1) {
  return;
 }



 if (VAR_0->mutex.next) {
  (VAR_0->mutex.next)->mutex.prev = VAR_0->mutex.prev;
 }

 if (VAR_0->mutex.prev) {
  (VAR_0->mutex.prev)->mutex.next = VAR_0->mutex.next;







  (VAR_0->mutex.prev)->mutex.original_sync_level =
      VAR_0->mutex.original_sync_level;
 } else {
  VAR_1->acquired_mutex_list = VAR_0->mutex.next;
 }
}
