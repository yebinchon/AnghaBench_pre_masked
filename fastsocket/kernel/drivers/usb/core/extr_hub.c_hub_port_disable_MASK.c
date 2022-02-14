
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_hub {int intfdev; struct usb_device* hdev; int error; } ;
struct usb_device {scalar_t__* children; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct usb_device*,int,int ) ;
 int FUNC_1 (int ,char*,int,int) ;
 scalar_t__ FUNC_2 (struct usb_device*) ;
 int FUNC_3 (struct usb_hub*,int) ;
 int FUNC_4 (scalar_t__,int ) ;

__attribute__((used)) static int FUNC_5(struct usb_hub *VAR_2, int VAR_3, int VAR_4)
{
 struct usb_device *VAR_5 = VAR_2->hdev;
 int VAR_6 = 0;

 if (VAR_5->children[VAR_3-1] && VAR_4)
  FUNC_4(VAR_5->children[VAR_3-1],
    VAR_1);
 if (!VAR_2->error) {
  if (FUNC_2(VAR_2->hdev))
   VAR_6 = FUNC_3(VAR_2, VAR_3);
  else
   VAR_6 = FUNC_0(VAR_5, VAR_3,
     VAR_0);
 }
 if (VAR_6)
  FUNC_1(VAR_2->intfdev, "cannot disable port %d (err = %d)\n",
    VAR_3, VAR_6);
 return VAR_6;
}
