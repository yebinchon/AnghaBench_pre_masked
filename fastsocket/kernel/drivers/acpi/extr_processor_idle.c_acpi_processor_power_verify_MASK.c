
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct acpi_processor_cx {int type; int valid; } ;
struct TYPE_2__ {struct acpi_processor_cx* states; int timer_broadcast_on_state; } ;
struct acpi_processor {int id; TYPE_1__ power; } ;


 unsigned int VAR_0 ;



 int VAR_1 ;
 int FUNC_0 (struct acpi_processor_cx*) ;
 int FUNC_1 (struct acpi_processor*,struct acpi_processor_cx*) ;
 int FUNC_2 (unsigned int,struct acpi_processor*,struct acpi_processor_cx*) ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_3 (int ,int ,struct acpi_processor*,int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct acpi_processor *VAR_4)
{
 unsigned int VAR_5;
 unsigned int VAR_6 = 0;

 VAR_4->power.timer_broadcast_on_state = VAR_1;

 for (VAR_5 = 1; VAR_5 < VAR_0 && VAR_5 <= VAR_3; VAR_5++) {
  struct acpi_processor_cx *VAR_7 = &VAR_4->power.states[VAR_5];

  switch (VAR_7->type) {
  case 130:
   VAR_7->valid = 1;
   break;

  case 129:
   FUNC_0(VAR_7);
   break;

  case 128:
   FUNC_1(VAR_4, VAR_7);
   break;
  }
  if (!VAR_7->valid)
   continue;

  FUNC_2(VAR_5, VAR_4, VAR_7);
  FUNC_4(VAR_7->type);
  VAR_6++;
 }

 FUNC_3(VAR_4->id, VAR_2,
     VAR_4, 1);

 return (VAR_6);
}
