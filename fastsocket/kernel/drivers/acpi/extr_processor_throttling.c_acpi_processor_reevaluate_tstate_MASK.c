
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int throttling; } ;
struct TYPE_3__ {scalar_t__ state; int state_count; } ;
struct acpi_processor {TYPE_2__ flags; TYPE_1__ throttling; } ;


 unsigned long VAR_0 ;
 int FUNC_0 (struct acpi_processor*) ;
 int FUNC_1 (struct acpi_processor*,int ,int) ;

void FUNC_2(struct acpi_processor *VAR_1,
     unsigned long VAR_2)
{
 int VAR_3 = 0;

 if (VAR_2 == VAR_0) {



  VAR_1->flags.throttling = 0;
  return;
 }



 if (!VAR_1->throttling.state_count) {



  VAR_1->flags.throttling = 0;
  return;
 }
 VAR_1->flags.throttling = 1;






 VAR_3 = FUNC_0(VAR_1);
 if (VAR_3)
  goto end;

 if (VAR_1->throttling.state) {
  VAR_3 = FUNC_1(VAR_1, 0, 0);
  if (VAR_3)
   goto end;
 }

end:
 if (VAR_3)
  VAR_1->flags.throttling = 0;
}
