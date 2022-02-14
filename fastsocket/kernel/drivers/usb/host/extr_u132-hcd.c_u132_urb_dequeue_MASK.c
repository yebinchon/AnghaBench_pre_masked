
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct usb_hcd {int dummy; } ;
struct urb {int pipe; } ;
struct u132_udev {size_t* endp_number_in; size_t* endp_number_out; } ;
struct u132_endp {int dummy; } ;
struct u132 {int going; struct u132_endp** endp; struct u132_udev* udev; TYPE_2__* addr; TYPE_1__* platform_dev; } ;
struct TYPE_4__ {size_t address; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 struct u132* FUNC_1 (struct usb_hcd*) ;
 int FUNC_2 (struct u132*,struct u132_endp*,struct urb*,int) ;
 size_t FUNC_3 (int ) ;
 size_t FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct usb_hcd *VAR_1, struct urb *VAR_2, int VAR_3)
{
 struct u132 *VAR_4 = FUNC_1(VAR_1);
 if (VAR_4->going > 2) {
  FUNC_0(&VAR_4->platform_dev->dev, "device has been removed %d\n"
   , VAR_4->going);
  return -VAR_0;
 } else {
  u8 VAR_5 = FUNC_3(VAR_2->pipe);
  u8 VAR_6 = FUNC_4(VAR_2->pipe);
  u8 VAR_7 = VAR_4->addr[VAR_5].address;
  struct u132_udev *VAR_8 = &VAR_4->udev[VAR_7];
  if (FUNC_5(VAR_2->pipe)) {
   u8 VAR_9 = VAR_8->endp_number_in[VAR_6];
   struct u132_endp *VAR_10 = VAR_4->endp[VAR_9 - 1];
   return FUNC_2(VAR_4, VAR_10, VAR_2, VAR_3);
  } else {
   u8 VAR_11 = VAR_8->endp_number_out[VAR_6];
   struct u132_endp *VAR_12 = VAR_4->endp[VAR_11 - 1];
   return FUNC_2(VAR_4, VAR_12, VAR_2, VAR_3);
  }
 }
}
