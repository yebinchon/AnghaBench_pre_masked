
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* control; } ;
struct usb_line6_variax {TYPE_1__ model_data; int dumpreq; } ;
struct usb_interface {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (char*,char*,int) ;
 struct usb_interface* FUNC_2 (struct device*) ;
 struct usb_line6_variax* FUNC_3 (struct usb_interface*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0, char *VAR_1, int VAR_2)
{
 struct usb_interface *VAR_3 = FUNC_2(VAR_0);
 struct usb_line6_variax *VAR_4 = FUNC_3(VAR_3);
 int VAR_5 = FUNC_0(&VAR_4->dumpreq, 0);
 if (VAR_5 < 0)
  return VAR_5;
 return FUNC_1(VAR_1, "%d\n", VAR_4->model_data.control[VAR_2]);
}
