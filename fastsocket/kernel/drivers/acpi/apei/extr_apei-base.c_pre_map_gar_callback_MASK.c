
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct apei_exec_context {TYPE_1__* ins_table; } ;
struct acpi_whea_header {size_t instruction; int register_region; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct apei_exec_context *VAR_1,
    struct acpi_whea_header *VAR_2,
    void *VAR_3)
{
 u8 VAR_4 = VAR_2->instruction;

 if (VAR_1->ins_table[VAR_4].flags & VAR_0)
  return FUNC_0(&VAR_2->register_region);

 return 0;
}
