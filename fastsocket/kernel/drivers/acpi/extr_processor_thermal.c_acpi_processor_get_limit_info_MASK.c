
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int limit; scalar_t__ throttling; } ;
struct acpi_processor {TYPE_1__ flags; } ;


 int VAR_0 ;

int FUNC_0(struct acpi_processor *VAR_1)
{

 if (!VAR_1)
  return -VAR_0;

 if (VAR_1->flags.throttling)
  VAR_1->flags.limit = 1;

 return 0;
}
