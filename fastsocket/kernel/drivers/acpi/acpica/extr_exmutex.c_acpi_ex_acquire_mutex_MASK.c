
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ sync_level; int acquisition_depth; scalar_t__ original_sync_level; TYPE_3__* owner_thread; int node; } ;
struct TYPE_4__ {scalar_t__ value; } ;
union acpi_operand_object {TYPE_2__ mutex; TYPE_1__ integer; } ;
typedef int u16 ;
struct acpi_walk_state {TYPE_3__* thread; } ;
typedef int acpi_status ;
struct TYPE_6__ {scalar_t__ current_sync_level; int thread_id; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,union acpi_operand_object*) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,union acpi_operand_object*,int ) ;
 int FUNC_4 (union acpi_operand_object*,TYPE_3__*) ;
 int FUNC_5 (int ) ;
 int VAR_4 ;
 int FUNC_6 (int ) ;

acpi_status
FUNC_7(union acpi_operand_object *VAR_5,
        union acpi_operand_object *VAR_6,
        struct acpi_walk_state *VAR_7)
{
 acpi_status VAR_8;

 FUNC_1(VAR_4, VAR_6);

 if (!VAR_6) {
  FUNC_6(VAR_2);
 }



 if (!VAR_7->thread) {
  FUNC_0((VAR_3,
       "Cannot acquire Mutex [%4.4s], null thread info",
       FUNC_5(VAR_6->mutex.node)));
  FUNC_6(VAR_0);
 }





 if (VAR_7->thread->current_sync_level > VAR_6->mutex.sync_level) {
  FUNC_0((VAR_3,
       "Cannot acquire Mutex [%4.4s], current SyncLevel is too large (%d)",
       FUNC_5(VAR_6->mutex.node),
       VAR_7->thread->current_sync_level));
  FUNC_6(VAR_1);
 }

 VAR_8 = FUNC_3((u16) VAR_5->integer.value,
           VAR_6,
           VAR_7->thread->thread_id);
 if (FUNC_2(VAR_8) && VAR_6->mutex.acquisition_depth == 1) {



  VAR_6->mutex.owner_thread = VAR_7->thread;
  VAR_6->mutex.original_sync_level =
      VAR_7->thread->current_sync_level;
  VAR_7->thread->current_sync_level =
      VAR_6->mutex.sync_level;



  FUNC_4(VAR_6, VAR_7->thread);
 }

 FUNC_6(VAR_8);
}
