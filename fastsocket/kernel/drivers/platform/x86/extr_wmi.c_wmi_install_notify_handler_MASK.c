
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ wmi_notify_handler ;
struct wmi_block {void* handler_data; scalar_t__ handler; } ;
typedef int acpi_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*,struct wmi_block**) ;
 int FUNC_1 (struct wmi_block*,int) ;

acpi_status FUNC_2(const char *VAR_3,
wmi_notify_handler VAR_4, void *VAR_5)
{
 struct wmi_block *VAR_6;
 acpi_status VAR_7;

 if (!VAR_3 || !VAR_4)
  return VAR_1;

 FUNC_0(VAR_3, &VAR_6);
 if (!VAR_6)
  return VAR_2;

 if (VAR_6->handler)
  return VAR_0;

 VAR_6->handler = VAR_4;
 VAR_6->handler_data = VAR_5;

 VAR_7 = FUNC_1(VAR_6, 1);

 return VAR_7;
}
