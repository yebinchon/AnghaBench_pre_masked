
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pnp_dev {int dev; } ;
struct acpi_ipmi_device {int flags; struct pnp_dev* pnp_dev; int handle; } ;
typedef int acpi_status ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int *,int *,struct acpi_ipmi_device*) ;
 int VAR_3 ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (int ,int *) ;

__attribute__((used)) static int FUNC_5(struct acpi_ipmi_device *VAR_4)
{
 acpi_status VAR_5;

 if (FUNC_4(VAR_2, &VAR_4->flags))
  return 0;

 VAR_5 = FUNC_1(VAR_4->handle,
          VAR_0,
          &VAR_3,
          ((void*)0), VAR_4);
 if (FUNC_0(VAR_5)) {
  struct pnp_dev *VAR_6 = VAR_4->pnp_dev;
  FUNC_2(&VAR_6->dev, "Can't register IPMI opregion space "
   "handle\n");
  return -VAR_1;
 }
 FUNC_3(VAR_2, &VAR_4->flags);
 return 0;
}
