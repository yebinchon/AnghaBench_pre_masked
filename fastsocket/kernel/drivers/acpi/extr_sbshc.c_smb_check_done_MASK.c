
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ status; scalar_t__ done; } ;
union acpi_smb_status {TYPE_1__ fields; int raw; } ;
struct acpi_smb_hc {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct acpi_smb_hc*,int ,int *) ;

__attribute__((used)) static inline int FUNC_1(struct acpi_smb_hc *VAR_2)
{
 union acpi_smb_status VAR_3 = {.raw = 0};
 FUNC_0(VAR_2, VAR_0, &VAR_3.raw);
 return VAR_3.fields.done && (VAR_3.fields.status == VAR_1);
}
