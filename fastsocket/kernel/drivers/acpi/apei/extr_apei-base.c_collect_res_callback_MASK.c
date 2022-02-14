
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef int u64 ;
typedef int u32 ;
struct apei_resources {int ioport; int iomem; } ;
struct apei_exec_context {TYPE_1__* ins_table; } ;
struct acpi_generic_address {int space_id; } ;
struct acpi_whea_header {size_t instruction; struct acpi_generic_address register_region; } ;
struct TYPE_2__ {int flags; } ;




 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct acpi_generic_address*,int *,int*) ;
 int FUNC_1 (int *,int ,int) ;

__attribute__((used)) static int FUNC_2(struct apei_exec_context *VAR_2,
    struct acpi_whea_header *VAR_3,
    void *VAR_4)
{
 struct apei_resources *VAR_5 = VAR_4;
 struct acpi_generic_address *VAR_6 = &VAR_3->register_region;
 u8 VAR_7 = VAR_3->instruction;
 u32 VAR_8;
 u64 VAR_9;
 int VAR_10;

 if (!(VAR_2->ins_table[VAR_7].flags & VAR_0))
  return 0;

 VAR_10 = FUNC_0(VAR_6, &VAR_9, &VAR_8);
 if (VAR_10)
  return VAR_10;

 switch (VAR_6->space_id) {
 case 128:
  return FUNC_1(&VAR_5->iomem, VAR_9,
        VAR_8 / 8);
 case 129:
  return FUNC_1(&VAR_5->ioport, VAR_9,
        VAR_8 / 8);
 default:
  return -VAR_1;
 }
}
