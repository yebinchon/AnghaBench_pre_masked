
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbtest_dev {int dummy; } ;
struct usb_sg_request {int status; } ;
struct usb_device {scalar_t__ speed; } ;
struct scatterlist {int dummy; } ;


 int FUNC_0 (struct usbtest_dev*,char*,unsigned int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 struct usb_device* FUNC_1 (struct usbtest_dev*) ;
 int FUNC_2 (struct usb_sg_request*,struct usb_device*,int,int,struct scatterlist*,int,int ,int ) ;
 int FUNC_3 (struct usb_sg_request*) ;

__attribute__((used)) static int FUNC_4 (
 struct usbtest_dev *VAR_3,
 unsigned VAR_4,
 int VAR_5,
 struct usb_sg_request *VAR_6,
 struct scatterlist *VAR_7,
 int VAR_8
)
{
 struct usb_device *VAR_9 = FUNC_1(VAR_3);
 int VAR_10 = 0;

 while (VAR_10 == 0 && VAR_4-- > 0) {
  VAR_10 = FUNC_2 (VAR_6, VAR_9, VAR_5,
    (VAR_9->speed == VAR_2)
     ? (VAR_1 << 3)
     : VAR_1,
    VAR_7, VAR_8, 0, VAR_0);

  if (VAR_10)
   break;
  FUNC_3 (VAR_6);
  VAR_10 = VAR_6->status;




 }




 if (VAR_10)
  FUNC_0(VAR_3, "perform_sglist failed, "
    "iterations left %d, status %d\n",
    VAR_4, VAR_10);
 return VAR_10;
}
