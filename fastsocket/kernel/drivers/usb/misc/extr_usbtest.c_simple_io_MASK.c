
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbtest_dev {int dummy; } ;
struct usb_device {int dev; } ;
struct urb {int transfer_buffer_length; int status; int pipe; struct usb_device* dev; struct completion* context; } ;
struct completion {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,char const*,int,int,int) ;
 int FUNC_1 (struct completion*) ;
 int FUNC_2 (struct usbtest_dev*,struct urb*) ;
 int FUNC_3 (struct urb*) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct urb*,int ) ;
 int FUNC_7 (struct completion*) ;

__attribute__((used)) static int FUNC_8 (
 struct usbtest_dev *VAR_1,
 struct urb *VAR_2,
 int VAR_3,
 int VAR_4,
 int VAR_5,
 const char *VAR_6
)
{
 struct usb_device *VAR_7 = VAR_2->dev;
 int VAR_8 = VAR_2->transfer_buffer_length;
 struct completion VAR_9;
 int VAR_10 = 0;

 VAR_2->context = &VAR_9;
 while (VAR_10 == 0 && VAR_3-- > 0) {
  FUNC_1 (&VAR_9);
  if (FUNC_5 (VAR_2->pipe))
   FUNC_3 (VAR_2);
  if ((VAR_10 = FUNC_6 (VAR_2, VAR_0)) != 0)
   break;


  FUNC_7 (&VAR_9);
  VAR_10 = VAR_2->status;
  VAR_2->dev = VAR_7;
  if (VAR_10 == 0 && FUNC_4 (VAR_2->pipe))
   VAR_10 = FUNC_2(VAR_1, VAR_2);

  if (VAR_4) {
   int VAR_11 = VAR_2->transfer_buffer_length;

   VAR_11 += VAR_4;
   VAR_11 %= VAR_8;
   if (VAR_11 == 0)
    VAR_11 = (VAR_4 < VAR_8) ? VAR_4 : VAR_8;
   VAR_2->transfer_buffer_length = VAR_11;
  }


 }
 VAR_2->transfer_buffer_length = VAR_8;

 if (VAR_5 != VAR_10)
  FUNC_0(&VAR_7->dev,
   "%s failed, iterations left %d, status %d (not %d)\n",
    VAR_6, VAR_3, VAR_10, VAR_5);
 return VAR_10;
}
