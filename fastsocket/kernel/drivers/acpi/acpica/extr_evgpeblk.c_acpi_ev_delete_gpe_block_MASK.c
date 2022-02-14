
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct acpi_gpe_block_info {int register_count; struct acpi_gpe_block_info* event_info; struct acpi_gpe_block_info* register_info; TYPE_2__* previous; TYPE_1__* next; TYPE_3__* xrupt_block; } ;
typedef int acpi_status ;
typedef int acpi_cpu_flags ;
struct TYPE_7__ {TYPE_1__* gpe_block_list_head; } ;
struct TYPE_6__ {TYPE_1__* next; } ;
struct TYPE_5__ {TYPE_2__* previous; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct acpi_gpe_block_info*) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (TYPE_3__*) ;
 int VAR_3 ;
 int FUNC_4 (TYPE_3__*,struct acpi_gpe_block_info*,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int VAR_4 ;
 int FUNC_9 (int ) ;

acpi_status FUNC_10(struct acpi_gpe_block_info *VAR_5)
{
 acpi_status VAR_6;
 acpi_cpu_flags VAR_7;

 FUNC_2(VAR_4);

 VAR_6 = FUNC_7(VAR_1);
 if (FUNC_0(VAR_6)) {
  FUNC_9(VAR_6);
 }



 VAR_6 =
     FUNC_4(VAR_5->xrupt_block, VAR_5, ((void*)0));

 if (!VAR_5->previous && !VAR_5->next) {



  VAR_6 = FUNC_3(VAR_5->xrupt_block);
  if (FUNC_0(VAR_6)) {
   goto unlock_and_exit;
  }
 } else {


  VAR_7 = FUNC_5(VAR_3);
  if (VAR_5->previous) {
   VAR_5->previous->next = VAR_5->next;
  } else {
   VAR_5->xrupt_block->gpe_block_list_head =
       VAR_5->next;
  }

  if (VAR_5->next) {
   VAR_5->next->previous = VAR_5->previous;
  }
  FUNC_6(VAR_3, VAR_7);
 }

 VAR_2 -=
     VAR_5->register_count * VAR_0;



 FUNC_1(VAR_5->register_info);
 FUNC_1(VAR_5->event_info);
 FUNC_1(VAR_5);

      unlock_and_exit:
 VAR_6 = FUNC_8(VAR_1);
 FUNC_9(VAR_6);
}
