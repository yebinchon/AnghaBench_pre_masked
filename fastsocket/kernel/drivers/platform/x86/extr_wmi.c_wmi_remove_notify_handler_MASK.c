
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wmi_block {int * handler_data; int * handler; } ;
typedef int acpi_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*,struct wmi_block**) ;
 int FUNC_1 (struct wmi_block*,int ) ;

acpi_status FUNC_2(const char *VAR_3)
{
 struct wmi_block *VAR_4;
 acpi_status VAR_5;

 if (!VAR_3)
  return VAR_0;

 FUNC_0(VAR_3, &VAR_4);
 if (!VAR_4)
  return VAR_1;

 if (!VAR_4->handler)
  return VAR_2;

 VAR_5 = FUNC_1(VAR_4, 0);

 VAR_4->handler = ((void*)0);
 VAR_4->handler_data = ((void*)0);

 return VAR_5;
}
