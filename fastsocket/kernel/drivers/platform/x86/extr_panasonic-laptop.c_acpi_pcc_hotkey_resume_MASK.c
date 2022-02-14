
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcc_acpi {int sticky_mode; } ;
struct acpi_device {int dummy; } ;
typedef scalar_t__ acpi_status ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct pcc_acpi* FUNC_1 (struct acpi_device*) ;
 scalar_t__ FUNC_2 (struct pcc_acpi*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct acpi_device *VAR_4)
{
 struct pcc_acpi *VAR_5 = FUNC_1(VAR_4);
 acpi_status VAR_6 = VAR_1;

 if (VAR_4 == ((void*)0) || VAR_5 == ((void*)0))
  return -VAR_2;

 FUNC_0((VAR_0, "Sticky mode restore: %d\n",
     VAR_5->sticky_mode));

 VAR_6 = FUNC_2(VAR_5, VAR_3, VAR_5->sticky_mode);

 return VAR_6 == VAR_1 ? 0 : -VAR_2;
}
