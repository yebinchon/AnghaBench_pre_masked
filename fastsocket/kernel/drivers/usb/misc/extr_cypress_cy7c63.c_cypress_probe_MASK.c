
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dev; } ;
struct usb_device_id {int dummy; } ;
struct cypress {int udev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (struct usb_interface*) ;
 int FUNC_5 (struct cypress*) ;
 struct cypress* FUNC_6 (int,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct usb_interface*,struct cypress*) ;

__attribute__((used)) static int FUNC_10(struct usb_interface *VAR_4,
    const struct usb_device_id *VAR_5)
{
 struct cypress *VAR_6 = ((void*)0);
 int VAR_7 = -VAR_0;


 VAR_6 = FUNC_6(sizeof(*VAR_6), VAR_1);
 if (VAR_6 == ((void*)0)) {
  FUNC_0(&VAR_4->dev, "Out of memory!\n");
  goto error_mem;
 }

 VAR_6->udev = FUNC_7(FUNC_4(VAR_4));


 FUNC_9(VAR_4, VAR_6);


 VAR_7 = FUNC_2(&VAR_4->dev, &VAR_2);
 if (VAR_7)
  goto error;
 VAR_7 = FUNC_2(&VAR_4->dev, &VAR_3);
 if (VAR_7)
  goto error;


 FUNC_1(&VAR_4->dev,
   "Cypress CY7C63xxx device now attached\n");
 return 0;

error:
 FUNC_3(&VAR_4->dev, &VAR_2);
 FUNC_3(&VAR_4->dev, &VAR_3);
 FUNC_9(VAR_4, ((void*)0));
 FUNC_8(VAR_6->udev);
 FUNC_5(VAR_6);

error_mem:
 return VAR_7;
}
