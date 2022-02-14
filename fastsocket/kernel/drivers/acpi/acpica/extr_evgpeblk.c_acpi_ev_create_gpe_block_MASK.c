
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int ascii; } ;
struct acpi_namespace_node {TYPE_1__ name; } ;
struct acpi_gpe_block_info {int register_count; int block_base_number; int block_address; struct acpi_namespace_node* node; } ;
struct acpi_generic_address {int dummy; } ;
typedef int acpi_status ;


 struct acpi_gpe_block_info* FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct acpi_gpe_block_info*) ;
 int FUNC_4 (int ) ;
 int VAR_1 ;
 int FUNC_5 (int *,struct acpi_generic_address*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (struct acpi_gpe_block_info*) ;
 int FUNC_7 (struct acpi_gpe_block_info*,int) ;
 int VAR_8 ;
 int FUNC_8 (int ,struct acpi_namespace_node*,int ,int ,int ,struct acpi_gpe_block_info*,int *) ;
 int VAR_9 ;
 int FUNC_9 (int ) ;

acpi_status
FUNC_10(struct acpi_namespace_node *VAR_10,
    struct acpi_generic_address *VAR_11,
    u32 VAR_12,
    u8 VAR_13,
    u32 VAR_14,
    struct acpi_gpe_block_info **VAR_15)
{
 acpi_status VAR_16;
 struct acpi_gpe_block_info *VAR_17;

 FUNC_4(VAR_9);

 if (!VAR_12) {
  FUNC_9(VAR_6);
 }



 VAR_17 = FUNC_0(sizeof(struct acpi_gpe_block_info));
 if (!VAR_17) {
  FUNC_9(VAR_5);
 }



 VAR_17->node = VAR_10;
 VAR_17->register_count = VAR_12;
 VAR_17->block_base_number = VAR_13;

 FUNC_5(&VAR_17->block_address, VAR_11,
      sizeof(struct acpi_generic_address));





 VAR_16 = FUNC_6(VAR_17);
 if (FUNC_2(VAR_16)) {
  FUNC_3(VAR_17);
  FUNC_9(VAR_16);
 }



 VAR_16 = FUNC_7(VAR_17, VAR_14);
 if (FUNC_2(VAR_16)) {
  FUNC_3(VAR_17);
  FUNC_9(VAR_16);
 }



 VAR_16 = FUNC_8(VAR_3, VAR_10,
     VAR_4, VAR_2,
     VAR_8, VAR_17,
     ((void*)0));



 if (VAR_15) {
  (*VAR_15) = VAR_17;
 }

 FUNC_1((VAR_0,
     "GPE %02X to %02X [%4.4s] %u regs on int 0x%X\n",
     (u32) VAR_17->block_base_number,
     (u32) (VAR_17->block_base_number +
     ((VAR_17->register_count *
       VAR_1) - 1)),
     VAR_10->name.ascii, VAR_17->register_count,
     VAR_14));



 VAR_7 += VAR_12 * VAR_1;
 FUNC_9(VAR_6);
}
