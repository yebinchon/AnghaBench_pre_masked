
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_bus {unsigned int busnum; int * controller; } ;
struct mon_bus {struct device* classdev; } ;
struct device {int dummy; } ;


 scalar_t__ FUNC_0 (struct device*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,unsigned int) ;
 unsigned int VAR_0 ;
 struct device* FUNC_3 (int ,int *,int ,int *,char*,unsigned int) ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_4(struct mon_bus *VAR_3, const struct usb_bus *VAR_4)
{
 struct device *VAR_5;
 unsigned VAR_6 = VAR_4? VAR_4->busnum: 0;

 if (VAR_6 >= VAR_0)
  return 0;

 VAR_5 = FUNC_3(VAR_1, VAR_4 ? VAR_4->controller : ((void*)0),
       FUNC_2(FUNC_1(VAR_2), VAR_6), ((void*)0),
       "usbmon%d", VAR_6);
 if (FUNC_0(VAR_5))
  return 0;

 VAR_3->classdev = VAR_5;
 return 1;
}
