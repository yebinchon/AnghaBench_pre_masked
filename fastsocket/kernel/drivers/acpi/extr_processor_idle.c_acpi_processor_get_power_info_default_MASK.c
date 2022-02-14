
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {TYPE_2__* states; } ;
struct acpi_processor {TYPE_1__ power; } ;
struct TYPE_4__ {int valid; size_t type; int entry_method; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;

__attribute__((used)) static int FUNC_0(struct acpi_processor *VAR_3)
{
 if (!VAR_3->power.states[VAR_2].valid) {


  VAR_3->power.states[VAR_2].type = VAR_2;
  VAR_3->power.states[VAR_2].valid = 1;
  VAR_3->power.states[VAR_2].entry_method = VAR_0;
 }

 VAR_3->power.states[VAR_1].valid = 1;
 return 0;
}
