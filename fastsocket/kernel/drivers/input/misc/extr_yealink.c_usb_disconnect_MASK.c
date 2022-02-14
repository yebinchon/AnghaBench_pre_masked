
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct yealink_dev {int dummy; } ;
struct TYPE_2__ {int kobj; } ;
struct usb_interface {TYPE_1__ dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct yealink_dev*,int ) ;
 struct yealink_dev* FUNC_4 (struct usb_interface*) ;
 int FUNC_5 (struct usb_interface*,int *) ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_6(struct usb_interface *VAR_2)
{
 struct yealink_dev *VAR_3;

 FUNC_0(&VAR_0);
 VAR_3 = FUNC_4(VAR_2);
 FUNC_1(&VAR_2->dev.kobj, &VAR_1);
 FUNC_5(VAR_2, ((void*)0));
 FUNC_2(&VAR_0);

 FUNC_3(VAR_3, 0);
}
