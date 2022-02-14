
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct dvb_usb_device {TYPE_2__* udev; } ;
struct TYPE_3__ {int idProduct; } ;
struct TYPE_4__ {TYPE_1__ descriptor; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct dvb_usb_device*) ;
 scalar_t__ FUNC_1 (struct dvb_usb_device*) ;
 scalar_t__ FUNC_2 (struct dvb_usb_device*,int ,int,int ,int*,int) ;
 scalar_t__ FUNC_3 (struct dvb_usb_device*,int ,int,int ,int *,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct dvb_usb_device *VAR_12, int VAR_13)
{
 u8 VAR_14, VAR_15;
 int VAR_16 = FUNC_4(VAR_12->udev->descriptor.idProduct);

 if (VAR_13) {
  FUNC_2(VAR_12, VAR_4,0,0,&VAR_14,1);
  if (! (VAR_14 & VAR_10)) {
   if(VAR_16 == VAR_8)
    FUNC_3(VAR_12, VAR_2, 1, 0, ((void*)0), 0);
   if (FUNC_2(VAR_12, VAR_1, 1, 0, &VAR_15, 1))
    return -VAR_3;
   FUNC_0(VAR_12);
  }

  if (VAR_16 == VAR_7)
   if (! (VAR_14 & VAR_9))
    if(FUNC_1(VAR_12))
     return -VAR_3;

  if (! (VAR_14 & VAR_11))
   if (FUNC_2(VAR_12, VAR_6, 1, 0,
     &VAR_15, 1))
    return -VAR_3;


  if (VAR_16 == VAR_7)
   if (FUNC_3(VAR_12, VAR_5, 1, 0, ((void*)0), 0))
    return -VAR_3;

  if (FUNC_3(VAR_12, VAR_0, 0, 0, ((void*)0), 0))
   return -VAR_3;
 } else {

  if (FUNC_2(VAR_12, VAR_6, 0, 0, &VAR_15, 1))
   return -VAR_3;

  if (FUNC_2(VAR_12, VAR_1, 0, 0, &VAR_15, 1))
   return -VAR_3;
  if(VAR_16 == VAR_8)
   FUNC_3(VAR_12, VAR_2, 0, 0, ((void*)0), 0);
 }
 return 0;
}
