
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int variax_activate ;
struct usb_line6_variax {int* buffer_activate; int line6; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int FUNC_0 (int *,int*,int) ;
 scalar_t__ FUNC_1 (char const*,int *,int) ;
 int FUNC_2 (struct device*) ;
 struct usb_line6_variax* FUNC_3 (int ) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1,
     struct device_attribute *VAR_2,
     const char *VAR_3, size_t VAR_4)
{
 struct usb_line6_variax *VAR_5 = FUNC_3(FUNC_2(VAR_1));
 int VAR_6 = FUNC_1(VAR_3, ((void*)0), 10) ? 1 : 0;
 VAR_5->buffer_activate[VAR_0] = VAR_6;
 FUNC_0(&VAR_5->line6, VAR_5->buffer_activate,
         sizeof(variax_activate));
 return VAR_4;
}
