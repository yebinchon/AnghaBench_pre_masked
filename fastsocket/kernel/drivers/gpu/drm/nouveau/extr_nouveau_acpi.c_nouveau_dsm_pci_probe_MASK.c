
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dev; } ;
typedef int acpi_status ;
typedef scalar_t__ acpi_handle ;
struct TYPE_2__ {scalar_t__ dhandle; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (scalar_t__,char*,scalar_t__*) ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (scalar_t__,int ,int ) ;

__attribute__((used)) static int FUNC_4(struct pci_dev *VAR_7)
{
 acpi_handle VAR_8, VAR_9;
 acpi_status VAR_10;
 int VAR_11 = 0;

 VAR_8 = FUNC_1(&VAR_7->dev);
 if (!VAR_8)
  return 0;

 VAR_10 = FUNC_2(VAR_8, "_DSM", &VAR_9);
 if (FUNC_0(VAR_10)) {
  return 0;
 }

 if (FUNC_3(VAR_8, VAR_4, VAR_3))
  VAR_11 |= VAR_0;

 if (FUNC_3(VAR_8, VAR_6,
  VAR_2))
  VAR_11 |= VAR_1;

 if (VAR_11)
  VAR_5.dhandle = VAR_8;

 return VAR_11;
}
