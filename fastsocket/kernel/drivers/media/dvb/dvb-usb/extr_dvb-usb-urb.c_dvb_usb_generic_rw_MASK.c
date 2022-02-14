
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_2__ {scalar_t__ generic_bulk_ctrl_endpoint; scalar_t__ generic_bulk_ctrl_endpoint_response; } ;
struct dvb_usb_device {int usb_mutex; TYPE_1__ props; int udev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int,int (*) (char*)) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int ,int *,int,int*,int) ;
 int FUNC_7 (int ,scalar_t__) ;
 int FUNC_8 (int ,scalar_t__) ;

int FUNC_9(struct dvb_usb_device *VAR_2, u8 *VAR_3, u16 VAR_4, u8 *VAR_5,
 u16 VAR_6, int VAR_7)
{
 int VAR_8,VAR_9 = -VAR_1;

 if (!VAR_2 || VAR_3 == ((void*)0) || VAR_4 == 0)
  return -VAR_0;

 if (VAR_2->props.generic_bulk_ctrl_endpoint == 0) {
  FUNC_2("endpoint for generic control not specified.");
  return -VAR_0;
 }

 if ((VAR_9 = FUNC_4(&VAR_2->usb_mutex)))
  return VAR_9;

 FUNC_0(">>> ");
 FUNC_1(VAR_3,VAR_4,FUNC_0);

 VAR_9 = FUNC_6(VAR_2->udev,FUNC_8(VAR_2->udev,
   VAR_2->props.generic_bulk_ctrl_endpoint), VAR_3,VAR_4,&VAR_8,
   2000);

 if (VAR_9)
  FUNC_2("bulk message failed: %d (%d/%d)",VAR_9,VAR_4,VAR_8);
 else
  VAR_9 = VAR_8 != VAR_4 ? -1 : 0;


 if (!VAR_9 && VAR_5 && VAR_6) {
  if (VAR_7)
   FUNC_3(VAR_7);

  VAR_9 = FUNC_6(VAR_2->udev,FUNC_7(VAR_2->udev,
    VAR_2->props.generic_bulk_ctrl_endpoint_response ?
    VAR_2->props.generic_bulk_ctrl_endpoint_response :
    VAR_2->props.generic_bulk_ctrl_endpoint),VAR_5,VAR_6,&VAR_8,
    2000);

  if (VAR_9)
   FUNC_2("recv bulk message failed: %d",VAR_9);
  else {
   FUNC_0("<<< ");
   FUNC_1(VAR_5,VAR_8,FUNC_0);
  }
 }

 FUNC_5(&VAR_2->usb_mutex);
 return VAR_9;
}
