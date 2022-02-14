
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static int FUNC_2(struct acpi_device *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_0(&VAR_4->dev, &VAR_1);
 if (VAR_5)
  return -VAR_0;
 VAR_5 = FUNC_0(&VAR_4->dev, &VAR_2);
 if (VAR_5) {
  FUNC_1(&VAR_4->dev, &VAR_1);
  return -VAR_0;
 }
 VAR_5 = FUNC_0(&VAR_4->dev, &VAR_3);
 if (VAR_5) {
  FUNC_1(&VAR_4->dev, &VAR_1);
  FUNC_1(&VAR_4->dev, &VAR_2);
  return -VAR_0;
 }
 return 0;
}
