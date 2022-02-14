
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int power; } ;
struct TYPE_5__ {unsigned int count; TYPE_3__* states; } ;
struct acpi_processor {TYPE_1__ flags; TYPE_2__ power; } ;
struct TYPE_6__ {scalar_t__ type; scalar_t__ valid; } ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct acpi_processor*) ;
 int FUNC_1 (struct acpi_processor*) ;
 int FUNC_2 (struct acpi_processor*) ;
 unsigned int FUNC_3 (struct acpi_processor*) ;
 int FUNC_4 (TYPE_3__*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct acpi_processor *VAR_3)
{
 unsigned int VAR_4;
 int VAR_5;






 FUNC_4(VAR_3->power.states, 0, sizeof(VAR_3->power.states));

 VAR_5 = FUNC_0(VAR_3);
 if (VAR_5 == -VAR_2)
  VAR_5 = FUNC_2(VAR_3);

 if (VAR_5)
  return VAR_5;

 FUNC_1(VAR_3);

 VAR_3->power.count = FUNC_3(VAR_3);





 for (VAR_4 = 1; VAR_4 < VAR_0; VAR_4++) {
  if (VAR_3->power.states[VAR_4].valid) {
   VAR_3->power.count = VAR_4;
   if (VAR_3->power.states[VAR_4].type >= VAR_1)
    VAR_3->flags.power = 1;
  }
 }

 return 0;
}
