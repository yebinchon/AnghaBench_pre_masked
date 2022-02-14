
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct usb_request {scalar_t__ actual; int buf; struct f_audio* context; } ;
struct usb_ep {int name; } ;
struct usb_composite_dev {int dummy; } ;
struct f_audio_buf {scalar_t__ actual; scalar_t__ buf; int list; } ;
struct TYPE_5__ {TYPE_1__* config; } ;
struct TYPE_6__ {TYPE_2__ func; } ;
struct f_audio {struct f_audio_buf* copy_buf; int playback_work; int play_queue; TYPE_3__ card; } ;
struct TYPE_4__ {struct usb_composite_dev* cdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct usb_composite_dev*,char*,int ,int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct f_audio_buf* FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (scalar_t__,int ,scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct usb_ep*,struct usb_request*,int ) ;

__attribute__((used)) static int FUNC_6(struct usb_ep *VAR_4, struct usb_request *VAR_5)
{
 struct f_audio *VAR_6 = VAR_5->context;
 struct usb_composite_dev *VAR_7 = VAR_6->card.func.config->cdev;
 struct f_audio_buf *VAR_8 = VAR_6->copy_buf;
 int VAR_9;

 if (!VAR_8)
  return -VAR_0;


 if (VAR_3 - VAR_8->actual < VAR_5->actual) {
  FUNC_2(&VAR_8->list, &VAR_6->play_queue);
  FUNC_4(&VAR_6->playback_work);
  VAR_8 = FUNC_1(VAR_3);
  if (VAR_8 < 0)
   return -VAR_1;
 }

 FUNC_3(VAR_8->buf + VAR_8->actual, VAR_5->buf, VAR_5->actual);
 VAR_8->actual += VAR_5->actual;
 VAR_6->copy_buf = VAR_8;

 VAR_9 = FUNC_5(VAR_4, VAR_5, VAR_2);
 if (VAR_9)
  FUNC_0(VAR_7, "%s queue req: %d\n", VAR_4->name, VAR_9);

 return 0;

}
