
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_request {int complete; struct f_audio* context; int length; scalar_t__ buf; } ;
struct usb_function {TYPE_1__* config; } ;
struct usb_ep {int name; struct f_audio* driver_data; } ;
struct usb_composite_dev {int dummy; } ;
struct f_audio_buf {int list; } ;
struct f_audio {int playback_work; int play_queue; struct f_audio_buf* copy_buf; int out_desc; struct usb_ep* out_ep; } ;
struct TYPE_2__ {struct usb_composite_dev* cdev; } ;


 int FUNC_0 (struct usb_composite_dev*,char*,unsigned int,unsigned int) ;
 int VAR_0 ;
 int FUNC_1 (struct usb_composite_dev*,char*,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 struct f_audio_buf* FUNC_2 (int ) ;
 int VAR_3 ;
 struct f_audio* FUNC_3 (struct usb_function*) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (int *,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (int *) ;
 struct usb_request* FUNC_7 (struct usb_ep*,int ) ;
 int FUNC_8 (struct usb_ep*,int ) ;
 int FUNC_9 (struct usb_ep*,struct usb_request*,int ) ;

__attribute__((used)) static int FUNC_10(struct usb_function *VAR_6, unsigned VAR_7, unsigned VAR_8)
{
 struct f_audio *VAR_9 = FUNC_3(VAR_6);
 struct usb_composite_dev *VAR_10 = VAR_6->config->cdev;
 struct usb_ep *VAR_11 = VAR_9->out_ep;
 struct usb_request *VAR_12;
 int VAR_13 = 0, VAR_14 = 0;

 FUNC_0(VAR_10, "intf %d, alt %d\n", VAR_7, VAR_8);

 if (VAR_7 == 1) {
  if (VAR_8 == 1) {
   FUNC_8(VAR_11, VAR_9->out_desc);
   VAR_11->driver_data = VAR_9;
   VAR_9->copy_buf = FUNC_2(VAR_2);





   for (VAR_13 = 0; VAR_13 < VAR_5 && VAR_14 == 0; VAR_13++) {
    VAR_12 = FUNC_7(VAR_11, VAR_1);
    if (VAR_12) {
     VAR_12->buf = FUNC_4(VAR_4,
       VAR_1);
     if (VAR_12->buf) {
      VAR_12->length = VAR_4;
      VAR_12->context = VAR_9;
      VAR_12->complete =
       VAR_3;
      VAR_14 = FUNC_9(VAR_11,
       VAR_12, VAR_1);
      if (VAR_14)
       FUNC_1(VAR_10,
       "%s queue req: %d\n",
       VAR_11->name, VAR_14);
     } else
      VAR_14 = -VAR_0;
    } else
     VAR_14 = -VAR_0;
   }

  } else {
   struct f_audio_buf *VAR_15 = VAR_9->copy_buf;
   if (VAR_15) {
    FUNC_5(&VAR_15->list,
      &VAR_9->play_queue);
    FUNC_6(&VAR_9->playback_work);
   }
  }
 }

 return VAR_14;
}
