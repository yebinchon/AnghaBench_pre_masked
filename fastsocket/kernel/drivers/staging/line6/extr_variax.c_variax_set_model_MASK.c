
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_line6_variax {int model; int line6; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 scalar_t__ FUNC_0 (int *,int) ;
 int FUNC_1 (char const*,int *,int) ;
 int FUNC_2 (struct device*) ;
 struct usb_line6_variax* FUNC_3 (int ) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0,
    struct device_attribute *VAR_1,
    const char *VAR_2, size_t VAR_3)
{
 struct usb_line6_variax *VAR_4 = FUNC_3(FUNC_2(VAR_0));
 int VAR_5 = FUNC_1(VAR_2, ((void*)0), 10);

 if (FUNC_0(&VAR_4->line6, VAR_5) == 0)
  VAR_4->model = VAR_5;

 return VAR_3;
}
