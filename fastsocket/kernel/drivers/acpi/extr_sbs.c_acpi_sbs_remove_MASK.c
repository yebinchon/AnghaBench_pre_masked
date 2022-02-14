
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_sbs {int lock; int hc; } ;
struct acpi_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct acpi_sbs*,int) ;
 int FUNC_1 (struct acpi_sbs*) ;
 struct acpi_sbs* FUNC_2 (struct acpi_device*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct acpi_sbs*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct acpi_device *VAR_2, int VAR_3)
{
 struct acpi_sbs *VAR_4;
 int VAR_5;

 if (!VAR_2)
  return -VAR_0;
 VAR_4 = FUNC_2(VAR_2);
 if (!VAR_4)
  return -VAR_0;
 FUNC_6(&VAR_4->lock);
 FUNC_3(VAR_4->hc);
 for (VAR_5 = 0; VAR_5 < VAR_1; ++VAR_5)
  FUNC_0(VAR_4, VAR_5);
 FUNC_1(VAR_4);
 FUNC_7(&VAR_4->lock);
 FUNC_5(&VAR_4->lock);
 FUNC_4(VAR_4);
 return 0;
}
