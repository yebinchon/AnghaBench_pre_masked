
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pnp_dev {int dummy; } ;
struct TYPE_4__ {int write_protect; } ;
struct TYPE_5__ {TYPE_1__ mem; } ;
struct acpi_resource_extended_address64 {scalar_t__ producer_consumer; scalar_t__ resource_type; int granularity; int address_length; int minimum; TYPE_2__ info; } ;
struct TYPE_6__ {struct acpi_resource_extended_address64 ext_address64; } ;
struct acpi_resource {TYPE_3__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct pnp_dev*,int ,int ,int ) ;
 int FUNC_1 (struct pnp_dev*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct pnp_dev *VAR_5,
            struct acpi_resource *VAR_6)
{
 struct acpi_resource_extended_address64 *VAR_7 = &VAR_6->data.ext_address64;

 if (VAR_7->producer_consumer == VAR_4)
  return;

 if (VAR_7->resource_type == VAR_3)
  FUNC_1(VAR_5,
   VAR_7->minimum, VAR_7->address_length,
   VAR_7->info.mem.write_protect);
 else if (VAR_7->resource_type == VAR_2)
  FUNC_0(VAR_5,
   VAR_7->minimum, VAR_7->address_length,
   VAR_7->granularity == 0xfff ? VAR_0 :
    VAR_1);
}
