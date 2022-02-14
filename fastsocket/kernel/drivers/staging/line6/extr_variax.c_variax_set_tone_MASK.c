
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_line6_variax {int tone; int line6; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int ,int) ;
 int FUNC_1 (char const*,int *,int) ;
 int FUNC_2 (struct device*) ;
 struct usb_line6_variax* FUNC_3 (int ) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1,
          struct device_attribute *VAR_2,
          const char *VAR_3, size_t VAR_4)
{
 struct usb_line6_variax *VAR_5 = FUNC_3(FUNC_2(VAR_1));
 int VAR_6 = FUNC_1(VAR_3, ((void*)0), 10);

 if (FUNC_0(&VAR_5->line6, VAR_0,
         VAR_6) == 0)
  VAR_5->tone = VAR_6;

 return VAR_4;
}
