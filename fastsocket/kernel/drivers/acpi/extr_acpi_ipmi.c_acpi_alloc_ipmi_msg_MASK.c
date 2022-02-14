
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pnp_dev {int dev; } ;
struct acpi_ipmi_msg {struct acpi_ipmi_device* device; int head; int tx_complete; } ;
struct acpi_ipmi_device {struct pnp_dev* pnp_dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *) ;
 struct acpi_ipmi_msg* FUNC_3 (int,int ) ;

__attribute__((used)) static struct acpi_ipmi_msg *FUNC_4(struct acpi_ipmi_device *VAR_1)
{
 struct acpi_ipmi_msg *VAR_2;
 struct pnp_dev *VAR_3 = VAR_1->pnp_dev;

 VAR_2 = FUNC_3(sizeof(struct acpi_ipmi_msg), VAR_0);
 if (!VAR_2) {
  FUNC_1(&VAR_3->dev, "Can't allocate memory for ipmi_msg\n");
  return ((void*)0);
 }
 FUNC_2(&VAR_2->tx_complete);
 FUNC_0(&VAR_2->head);
 VAR_2->device = VAR_1;
 return VAR_2;
}
