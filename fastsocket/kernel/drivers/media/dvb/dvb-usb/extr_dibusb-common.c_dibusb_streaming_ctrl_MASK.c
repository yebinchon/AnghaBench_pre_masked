
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dvb_usb_adapter {int fe; struct dibusb_state* priv; } ;
struct TYPE_2__ {scalar_t__ (* fifo_ctrl ) (int ,int) ;} ;
struct dibusb_state {TYPE_1__ ops; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,int) ;

int FUNC_2(struct dvb_usb_adapter *VAR_1, int VAR_2)
{
 if (VAR_1->priv != ((void*)0)) {
  struct dibusb_state *VAR_3 = VAR_1->priv;
  if (VAR_3->ops.fifo_ctrl != ((void*)0))
   if (VAR_3->ops.fifo_ctrl(VAR_1->fe,VAR_2)) {
    FUNC_0("error while controlling the fifo of the demod.");
    return -VAR_0;
   }
 }
 return 0;
}
