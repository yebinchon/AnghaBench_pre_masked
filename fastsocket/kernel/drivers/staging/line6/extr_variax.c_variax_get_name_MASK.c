
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int name; } ;
struct usb_line6_variax {TYPE_1__ model_data; int dumpreq; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct device*) ;
 struct usb_line6_variax* FUNC_3 (int ) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0,
          struct device_attribute *VAR_1, char *VAR_2)
{
 struct usb_line6_variax *VAR_3 = FUNC_3(FUNC_2(VAR_0));
 FUNC_1(&VAR_3->dumpreq, 0);
 return FUNC_0(VAR_2, VAR_3->model_data.name,
     sizeof(VAR_3->model_data.name));
}
