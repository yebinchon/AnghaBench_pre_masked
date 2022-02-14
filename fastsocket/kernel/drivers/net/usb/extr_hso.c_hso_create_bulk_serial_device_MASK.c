
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_interface {int dev; } ;
struct hso_tiocmget {void* endp; int waitq; int mutex; scalar_t__ urb; } ;
struct TYPE_2__ {struct hso_serial* dev_serial; } ;
struct hso_serial {int minor; int write_data; void* out_endp; void* in_endp; struct hso_tiocmget* tiocmget; TYPE_1__ port_data; struct hso_serial* parent; } ;
struct hso_device {int minor; int write_data; void* out_endp; void* in_endp; struct hso_tiocmget* tiocmget; TYPE_1__ port_data; struct hso_device* parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int *,char*) ;
 struct hso_serial* FUNC_1 (struct usb_interface*,int) ;
 int FUNC_2 (struct hso_serial*) ;
 void* FUNC_3 (struct usb_interface*,int ,int ) ;
 int FUNC_4 (struct hso_serial*) ;
 scalar_t__ FUNC_5 (struct hso_serial*,int,int ,int ) ;
 int FUNC_6 (struct hso_serial*) ;
 int VAR_9 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct hso_serial*) ;
 void* FUNC_9 (int,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,struct hso_serial*) ;
 scalar_t__ FUNC_12 (int ,int ) ;

__attribute__((used)) static struct hso_device *FUNC_13(
   struct usb_interface *VAR_10, int VAR_11)
{
 struct hso_device *VAR_12;
 struct hso_serial *VAR_13;
 int VAR_14;
 struct hso_tiocmget *VAR_15;

 VAR_12 = FUNC_1(VAR_10, VAR_11);
 if (!VAR_12)
  return ((void*)0);

 VAR_13 = FUNC_9(sizeof(*VAR_13), VAR_2);
 if (!VAR_13)
  goto exit;

 VAR_13->parent = VAR_12;
 VAR_12->port_data.dev_serial = VAR_13;

 if ((VAR_11 & VAR_3) == VAR_4) {
  VAR_14 = 2;
  VAR_13->tiocmget = FUNC_9(sizeof(struct hso_tiocmget),
        VAR_2);



  if (VAR_13->tiocmget) {
   VAR_15 = VAR_13->tiocmget;
   VAR_15->urb = FUNC_12(0, VAR_2);
   if (VAR_15->urb) {
    FUNC_10(&VAR_15->mutex);
    FUNC_7(&VAR_15->waitq);
    VAR_15->endp = FUNC_3(
     VAR_10,
     VAR_8,
     VAR_5);
   } else
    FUNC_2(VAR_13);
  }
 }
 else
  VAR_14 = 1;

 if (FUNC_5(VAR_13, VAR_14, VAR_0,
         VAR_1))
  goto exit;

 VAR_13->in_endp = FUNC_3(VAR_10, VAR_7,
         VAR_5);
 if (!VAR_13->in_endp) {
  FUNC_0(&VAR_10->dev, "Failed to find BULK IN ep\n");
  goto exit2;
 }

 if (!
     (VAR_13->out_endp =
      FUNC_3(VAR_10, VAR_7, VAR_6))) {
  FUNC_0(&VAR_10->dev, "Failed to find BULK IN ep\n");
  goto exit2;
 }

 VAR_13->write_data = VAR_9;


 FUNC_11(VAR_13->minor, VAR_13);


 FUNC_4(VAR_12);


 return VAR_12;

exit2:
 FUNC_6(VAR_13);
exit:
 FUNC_2(VAR_13);
 FUNC_8(VAR_13);
 FUNC_8(VAR_12);
 return ((void*)0);
}
