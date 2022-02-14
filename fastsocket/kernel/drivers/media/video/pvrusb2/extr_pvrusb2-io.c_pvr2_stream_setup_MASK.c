
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {int dummy; } ;
struct pvr2_stream {int endpoint; unsigned int fail_tolerance; int mutex; struct usb_device* dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct pvr2_stream*) ;

void FUNC_3(struct pvr2_stream *VAR_0,
         struct usb_device *VAR_1,
         int VAR_2,
         unsigned int VAR_3)
{
 FUNC_0(&VAR_0->mutex); do {
  FUNC_2(VAR_0);
  VAR_0->dev = VAR_1;
  VAR_0->endpoint = VAR_2;
  VAR_0->fail_tolerance = VAR_3;
 } while(0); FUNC_1(&VAR_0->mutex);
}
