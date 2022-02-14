
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int transfer_flags; int transfer_dma; } ;
struct smsusb_urb_t {TYPE_1__ urb; TYPE_3__* cb; } ;
struct smsusb_device_t {int buffer_size; int udev; int coredev; } ;
struct TYPE_5__ {int phys; int p; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 TYPE_3__* FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (TYPE_1__*,int ,int ,int ,int ,int ,struct smsusb_urb_t*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (TYPE_1__*,int ) ;

__attribute__((used)) static int FUNC_5(struct smsusb_device_t *VAR_4,
        struct smsusb_urb_t *VAR_5)
{
 if (!VAR_5->cb) {
  VAR_5->cb = FUNC_1(VAR_4->coredev);
  if (!VAR_5->cb) {
   FUNC_0("smscore_getbuffer(...) returned NULL");
   return -VAR_0;
  }
 }

 FUNC_2(
  &VAR_5->urb,
  VAR_4->udev,
  FUNC_3(VAR_4->udev, 0x81),
  VAR_5->cb->p,
  VAR_4->buffer_size,
  VAR_3,
  VAR_5
 );
 VAR_5->urb.transfer_dma = VAR_5->cb->phys;
 VAR_5->urb.transfer_flags |= VAR_2;

 return FUNC_4(&VAR_5->urb, VAR_1);
}
