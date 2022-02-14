
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pnp_dev {int dev; } ;
struct TYPE_3__ {int write_protect; } ;
struct TYPE_4__ {TYPE_1__ mem; } ;
struct acpi_resource_address64 {scalar_t__ producer_consumer; scalar_t__ resource_type; int granularity; int address_length; int minimum; TYPE_2__ info; } ;
struct acpi_resource {int type; } ;
typedef int acpi_status ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct acpi_resource*,struct acpi_resource_address64*) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (struct pnp_dev*,int ,int ,int ) ;
 int FUNC_4 (struct pnp_dev*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_5(struct pnp_dev *VAR_5,
        struct acpi_resource *VAR_6)
{
 struct acpi_resource_address64 VAR_7, *VAR_8 = &VAR_7;
 acpi_status VAR_9;

 VAR_9 = FUNC_1(VAR_6, VAR_8);
 if (!FUNC_0(VAR_9)) {
  FUNC_2(&VAR_5->dev, "failed to convert resource type %d\n",
    VAR_6->type);
  return;
 }

 if (VAR_8->producer_consumer == VAR_4)
  return;

 if (VAR_8->resource_type == VAR_3)
  FUNC_4(VAR_5,
   VAR_8->minimum, VAR_8->address_length,
   VAR_8->info.mem.write_protect);
 else if (VAR_8->resource_type == VAR_2)
  FUNC_3(VAR_5,
   VAR_8->minimum, VAR_8->address_length,
   VAR_8->granularity == 0xfff ? VAR_0 :
    VAR_1);
}
