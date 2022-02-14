
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct usb_interface {struct usb_host_interface* cur_altsetting; } ;
struct TYPE_11__ {int bNumEndpoints; } ;
struct usb_host_interface {TYPE_4__* endpoint; TYPE_2__ desc; } ;
struct usb_device_id {int dummy; } ;
struct TYPE_10__ {int idVendor; int idProduct; } ;
struct usb_device {int dev; TYPE_1__ descriptor; } ;
struct TYPE_14__ {struct mts_desc* scsi_status; } ;
struct mts_desc {int ep_out; int ep_response; int ep_image; int urb; TYPE_5__ context; TYPE_6__* host; struct usb_interface* usb_intf; struct usb_device* usb_dev; } ;
typedef int new_desc ;
struct TYPE_15__ {unsigned long* hostdata; } ;
struct TYPE_12__ {int bmAttributes; int bEndpointAddress; } ;
struct TYPE_13__ {TYPE_3__ desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int,...) ;
 int FUNC_1 () ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (char*,...) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 struct usb_device* FUNC_3 (struct usb_interface*) ;
 int FUNC_4 (struct mts_desc*) ;
 struct mts_desc* FUNC_5 (int,int ) ;
 struct mts_desc* FUNC_6 (int,int ) ;
 int FUNC_7 (int ) ;
 int VAR_12 ;
 scalar_t__ FUNC_8 (TYPE_6__*,int *) ;
 TYPE_6__* FUNC_9 (int *,int) ;
 int FUNC_10 (TYPE_6__*) ;
 int FUNC_11 (TYPE_6__*) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (struct usb_interface*,struct mts_desc*) ;

__attribute__((used)) static int FUNC_15(struct usb_interface *VAR_13,
    const struct usb_device_id *VAR_14)
{
 int VAR_15;
 int VAR_16 = -1;
 int VAR_17[3];

 int *VAR_18 = VAR_17;
 int VAR_19 = -VAR_2;

 struct mts_desc * VAR_20;
 struct usb_device *VAR_21 = FUNC_3 (VAR_13);


 struct usb_host_interface *VAR_22;

 FUNC_1();
 FUNC_0( "usb-device descriptor at %x\n", (int)VAR_21 );

 FUNC_0( "product id = 0x%x, vendor id = 0x%x\n",
     FUNC_7(VAR_21->descriptor.idProduct),
     FUNC_7(VAR_21->descriptor.idVendor) );

 FUNC_1();


 VAR_22 = VAR_13->cur_altsetting;




 if ( VAR_22->desc.bNumEndpoints != VAR_7 ) {
  FUNC_2( "expecting %d got %d endpoints! Bailing out.\n",
        (int)VAR_7, (int)VAR_22->desc.bNumEndpoints );
  return -VAR_1;
 }

 for( VAR_15 = 0; VAR_15 < VAR_22->desc.bNumEndpoints; VAR_15++ ) {
  if ((VAR_22->endpoint[VAR_15].desc.bmAttributes &
       VAR_10) != VAR_11) {

   FUNC_2( "can only deal with bulk endpoints; endpoint %d is not bulk.\n",
        (int)VAR_22->endpoint[VAR_15].desc.bEndpointAddress );
  } else {
   if (VAR_22->endpoint[VAR_15].desc.bEndpointAddress &
       VAR_8)
    *VAR_18++
     = VAR_22->endpoint[VAR_15].desc.bEndpointAddress &
     VAR_9;
   else {
    if ( VAR_16 != -1 ) {
     FUNC_2( "can only deal with one output endpoints. Bailing out." );
     return -VAR_1;
    }

    VAR_16 = VAR_22->endpoint[VAR_15].desc.bEndpointAddress &
     VAR_9;
   }
  }

 }


 if ( VAR_16 == -1 ) {
  FUNC_2( "couldn't find an output bulk endpoint. Bailing out.\n" );
  return -VAR_1;
 }


 VAR_20 = FUNC_6(sizeof(struct mts_desc), VAR_3);
 if (!VAR_20)
  goto out;

 VAR_20->urb = FUNC_12(0, VAR_3);
 if (!VAR_20->urb)
  goto out_kfree;

 VAR_20->context.scsi_status = FUNC_5(1, VAR_3);
 if (!VAR_20->context.scsi_status)
  goto out_free_urb;

 VAR_20->usb_dev = VAR_21;
 VAR_20->usb_intf = VAR_13;


 VAR_20->ep_out = VAR_16;
 VAR_20->ep_response = VAR_17[0];
 VAR_20->ep_image = VAR_17[1];

 if ( VAR_20->ep_out != VAR_5 )
  FUNC_2( "will this work? Command EP is not usually %d\n",
        (int)VAR_20->ep_out );

 if ( VAR_20->ep_response != VAR_6 )
  FUNC_2( "will this work? Response EP is not usually %d\n",
        (int)VAR_20->ep_response );

 if ( VAR_20->ep_image != VAR_4 )
  FUNC_2( "will this work? Image data EP is not usually %d\n",
        (int)VAR_20->ep_image );

 VAR_20->host = FUNC_9(&VAR_12,
   sizeof(VAR_20));
 if (!VAR_20->host)
  goto out_kfree2;

 VAR_20->host->hostdata[0] = (unsigned long)VAR_20;
 if (FUNC_8(VAR_20->host, &VAR_21->dev)) {
  VAR_19 = -VAR_0;
  goto out_host_put;
 }
 FUNC_11(VAR_20->host);

 FUNC_14(VAR_13, VAR_20);
 return 0;

 out_host_put:
 FUNC_10(VAR_20->host);
 out_kfree2:
 FUNC_4(VAR_20->context.scsi_status);
 out_free_urb:
 FUNC_13(VAR_20->urb);
 out_kfree:
 FUNC_4(VAR_20);
 out:
 return VAR_19;
}
