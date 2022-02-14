
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct dvb_usb_adapter {int fe; struct dibusb_state* priv; } ;
struct TYPE_2__ {int (* pid_ctrl ) (int ,int,int ,int) ;} ;
struct dibusb_state {TYPE_1__ ops; } ;


 int FUNC_0 (int ,int,int ,int) ;

int FUNC_1(struct dvb_usb_adapter *VAR_0, int VAR_1, u16 VAR_2, int VAR_3)
{
 if (VAR_0->priv != ((void*)0)) {
  struct dibusb_state *VAR_4 = VAR_0->priv;
  if (VAR_4->ops.pid_ctrl != ((void*)0))
   VAR_4->ops.pid_ctrl(VAR_0->fe,VAR_1,VAR_2,VAR_3);
 }
 return 0;
}
