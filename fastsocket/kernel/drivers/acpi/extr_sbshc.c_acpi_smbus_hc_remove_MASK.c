
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_smb_hc {int query_bit; int ec; } ;
struct acpi_device {int * driver_data; } ;


 int VAR_0 ;
 struct acpi_smb_hc* FUNC_0 (struct acpi_device*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct acpi_smb_hc*) ;

__attribute__((used)) static int FUNC_3(struct acpi_device *VAR_1, int VAR_2)
{
 struct acpi_smb_hc *VAR_3;

 if (!VAR_1)
  return -VAR_0;

 VAR_3 = FUNC_0(VAR_1);
 FUNC_1(VAR_3->ec, VAR_3->query_bit);
 FUNC_2(VAR_3);
 VAR_1->driver_data = ((void*)0);
 return 0;
}
