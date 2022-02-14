
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct hso_serial {int num_rx_urbs; TYPE_2__* parent; scalar_t__ tiocmget; TYPE_6__* shared_int; int * rx_urb; int rx_data_length; int * rx_data; TYPE_1__* in_endp; } ;
struct hso_device {int usb; } ;
typedef int gfp_t ;
struct TYPE_10__ {int shared_int_lock; int use_count; } ;
struct TYPE_9__ {int dev; } ;
struct TYPE_8__ {int port_spec; TYPE_3__* usb; } ;
struct TYPE_7__ {int bEndpointAddress; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct hso_serial* FUNC_0 (struct hso_device*) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (TYPE_6__*,int ,int ) ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct hso_serial*,scalar_t__,TYPE_3__*) ;
 int FUNC_6 (int ,TYPE_3__*,int ,int ,int ,int ,struct hso_serial*) ;
 int FUNC_7 (TYPE_3__*,int) ;
 int FUNC_8 (int ,int ) ;

__attribute__((used)) static int FUNC_9(struct hso_device *VAR_3, gfp_t VAR_4)
{
 int VAR_5, VAR_6 = 0;
 struct hso_serial *VAR_7 = FUNC_0(VAR_3);

 if (!VAR_7)
  return -VAR_0;



 if (!(VAR_7->parent->port_spec & VAR_1)) {
  for (VAR_5 = 0; VAR_5 < VAR_7->num_rx_urbs; VAR_5++) {
   FUNC_6(VAR_7->rx_urb[VAR_5],
       VAR_7->parent->usb,
       FUNC_7(VAR_7->parent->usb,
         VAR_7->in_endp->
         bEndpointAddress &
         0x7F),
       VAR_7->rx_data[VAR_5],
       VAR_7->rx_data_length,
       VAR_2,
       VAR_7);
   VAR_6 = FUNC_8(VAR_7->rx_urb[VAR_5], VAR_4);
   if (VAR_6) {
    FUNC_1(&VAR_7->parent->usb->dev,
      "Failed to submit urb - res %d\n",
      VAR_6);
    break;
   }
  }
 } else {
  FUNC_3(&VAR_7->shared_int->shared_int_lock);
  if (!VAR_7->shared_int->use_count) {
   VAR_6 =
       FUNC_2(VAR_7->shared_int,
          VAR_3->usb, VAR_4);
  }
  VAR_7->shared_int->use_count++;
  FUNC_4(&VAR_7->shared_int->shared_int_lock);
 }
 if (VAR_7->tiocmget)
  FUNC_5(VAR_7,
        VAR_7->tiocmget,
        VAR_7->parent->usb);
 return VAR_6;
}
