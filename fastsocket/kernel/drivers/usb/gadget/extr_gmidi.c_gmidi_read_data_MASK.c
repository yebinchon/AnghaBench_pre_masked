
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct usb_ep {struct gmidi_device* driver_data; } ;
struct gmidi_device {TYPE_1__* out_substream; int out_triggered; } ;
struct TYPE_2__ {int number; } ;


 int FUNC_0 (TYPE_1__*,int *,int) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(struct usb_ep *VAR_0, int VAR_1,
       uint8_t *VAR_2, int VAR_3)
{
 struct gmidi_device *VAR_4 = VAR_0->driver_data;


 if (!VAR_4->out_substream) {

  return;
 }
 if (!FUNC_1(VAR_4->out_substream->number, &VAR_4->out_triggered)) {
  return;
 }
 FUNC_0(VAR_4->out_substream, VAR_2, VAR_3);
}
