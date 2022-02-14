
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_interface {int dev; struct usb_host_interface* cur_altsetting; } ;
struct TYPE_3__ {int bNumEndpoints; } ;
struct usb_host_interface {TYPE_2__* endpoint; TYPE_1__ desc; } ;
struct usb_endpoint_descriptor {int dummy; } ;
struct usb_device_id {int dummy; } ;
struct alauda {int kref; int port; int card_mutex; int dev; void* bulk_out; int bulk_in; void* write_out; struct usb_interface* interface; } ;
struct TYPE_4__ {struct usb_endpoint_descriptor desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct alauda*) ;
 int VAR_5 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct usb_interface*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 struct alauda* FUNC_5 (int,int ) ;
 int FUNC_6 (struct alauda*,struct alauda*,int) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (struct usb_endpoint_descriptor*) ;
 scalar_t__ FUNC_9 (struct usb_endpoint_descriptor*) ;
 int FUNC_10 (struct usb_endpoint_descriptor*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (struct usb_interface*,struct alauda*) ;
 void* FUNC_14 (int ,int ) ;

__attribute__((used)) static int FUNC_15(struct usb_interface *VAR_6,
  const struct usb_device_id *VAR_7)
{
 struct alauda *VAR_8;
 struct usb_host_interface *VAR_9;
 struct usb_endpoint_descriptor *VAR_10,
   *VAR_11=((void*)0), *VAR_12=((void*)0), *VAR_13=((void*)0);
 int VAR_14, VAR_15 = -VAR_3;

 VAR_8 = FUNC_5(2*sizeof(*VAR_8), VAR_4);
 if (!VAR_8)
  goto error;

 FUNC_3(&VAR_8->kref);
 FUNC_13(VAR_6, VAR_8);

 VAR_8->dev = FUNC_11(FUNC_2(VAR_6));
 VAR_8->interface = VAR_6;

 VAR_9 = VAR_6->cur_altsetting;
 for (VAR_14 = 0; VAR_14 < VAR_9->desc.bNumEndpoints; ++VAR_14) {
  VAR_10 = &VAR_9->endpoint[VAR_14].desc;

  if (FUNC_8(VAR_10)) {
   VAR_11 = VAR_10;
  } else if (FUNC_9(VAR_10)) {
   if (VAR_14==0)
    VAR_13 = VAR_10;
   else
    VAR_12 = VAR_10;
  }
 }
 VAR_15 = -VAR_2;
 if (!VAR_13 || !VAR_11 || !VAR_12)
  goto error;

 VAR_8->write_out = FUNC_14(VAR_8->dev,
   FUNC_10(VAR_13));
 VAR_8->bulk_in = FUNC_12(VAR_8->dev,
   FUNC_10(VAR_11));
 VAR_8->bulk_out = FUNC_14(VAR_8->dev,
   FUNC_10(VAR_12));


 FUNC_6(VAR_8+1, VAR_8, sizeof(*VAR_8));

 FUNC_7(&VAR_8[0].card_mutex);
 FUNC_7(&VAR_8[1].card_mutex);

 VAR_8[0].port = VAR_1;
 VAR_8[1].port = VAR_0;

 FUNC_1(&VAR_6->dev, "alauda probed\n");
 FUNC_0(VAR_8);
 FUNC_0(VAR_8+1);

 return 0;

error:
 if (VAR_8)
  FUNC_4(&VAR_8->kref, VAR_5);
 return VAR_15;
}
