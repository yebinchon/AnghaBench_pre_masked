
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct urb {scalar_t__ status; scalar_t__ actual_length; scalar_t__ context; } ;
struct smsusb_urb_t {TYPE_1__* cb; struct smsusb_device_t* dev; } ;
struct smsusb_device_t {scalar_t__ response_alignment; int coredev; } ;
struct SmsMsgHdr_ST {scalar_t__ msgLength; int msgFlags; } ;
struct TYPE_2__ {scalar_t__ size; scalar_t__ offset; scalar_t__ p; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,struct SmsMsgHdr_ST*,int) ;
 int FUNC_1 (char*,scalar_t__,scalar_t__,...) ;
 int FUNC_2 (int ,TYPE_1__*) ;
 int FUNC_3 (struct SmsMsgHdr_ST*) ;
 int FUNC_4 (struct smsusb_device_t*,struct smsusb_urb_t*) ;

__attribute__((used)) static void FUNC_5(struct urb *VAR_2)
{
 struct smsusb_urb_t *VAR_3 = (struct smsusb_urb_t *) VAR_2->context;
 struct smsusb_device_t *VAR_4 = VAR_3->dev;

 if (VAR_2->status == -VAR_0) {
  FUNC_1("error, urb status %d (-ESHUTDOWN), %d bytes",
   VAR_2->status, VAR_2->actual_length);
  return;
 }

 if ((VAR_2->actual_length > 0) && (VAR_2->status == 0)) {
  struct SmsMsgHdr_ST *VAR_5 = (struct SmsMsgHdr_ST *)VAR_3->cb->p;

  FUNC_3(VAR_5);
  if (VAR_2->actual_length >= VAR_5->msgLength) {
   VAR_3->cb->size = VAR_5->msgLength;

   if (VAR_4->response_alignment &&
       (VAR_5->msgFlags & VAR_1)) {

    VAR_3->cb->offset =
     VAR_4->response_alignment +
     ((VAR_5->msgFlags >> 8) & 3);


    if (((int) VAR_5->msgLength +
         VAR_3->cb->offset) > VAR_2->actual_length) {
     FUNC_1("invalid response "
      "msglen %d offset %d "
      "size %d",
      VAR_5->msgLength,
      VAR_3->cb->offset,
      VAR_2->actual_length);
     goto exit_and_resubmit;
    }



    FUNC_0((char *) VAR_5 + VAR_3->cb->offset,
           VAR_5, sizeof(struct SmsMsgHdr_ST));
   } else
    VAR_3->cb->offset = 0;

   FUNC_2(VAR_4->coredev, VAR_3->cb);
   VAR_3->cb = ((void*)0);
  } else {
   FUNC_1("invalid response "
    "msglen %d actual %d",
    VAR_5->msgLength, VAR_2->actual_length);
  }
 } else
  FUNC_1("error, urb status %d, %d bytes",
   VAR_2->status, VAR_2->actual_length);


exit_and_resubmit:
 FUNC_4(VAR_4, VAR_3);
}
