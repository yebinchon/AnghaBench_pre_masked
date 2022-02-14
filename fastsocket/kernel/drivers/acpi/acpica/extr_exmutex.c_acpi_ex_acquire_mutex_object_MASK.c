
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ thread_id; int acquisition_depth; int * owner_thread; scalar_t__ original_sync_level; int os_mutex; } ;
union acpi_operand_object {TYPE_1__ mutex; } ;
typedef int u16 ;
typedef scalar_t__ acpi_thread_id ;
typedef int acpi_status ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,union acpi_operand_object*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 union acpi_operand_object* VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int ) ;

acpi_status
FUNC_5(u16 VAR_4,
        union acpi_operand_object *VAR_5,
        acpi_thread_id VAR_6)
{
 acpi_status VAR_7;

 FUNC_1(VAR_3, VAR_5);

 if (!VAR_5) {
  FUNC_4(VAR_0);
 }



 if (VAR_5->mutex.thread_id == VAR_6) {




  VAR_5->mutex.acquisition_depth++;
  FUNC_4(VAR_1);
 }



 if (VAR_5 == VAR_2) {
  VAR_7 = FUNC_2(VAR_4);
 } else {
  VAR_7 = FUNC_3(VAR_5->mutex.os_mutex,
         VAR_4);
 }

 if (FUNC_0(VAR_7)) {



  FUNC_4(VAR_7);
 }



 VAR_5->mutex.thread_id = VAR_6;
 VAR_5->mutex.acquisition_depth = 1;
 VAR_5->mutex.original_sync_level = 0;
 VAR_5->mutex.owner_thread = ((void*)0);

 FUNC_4(VAR_1);
}
