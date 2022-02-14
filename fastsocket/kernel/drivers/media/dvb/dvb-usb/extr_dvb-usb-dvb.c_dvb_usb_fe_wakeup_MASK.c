
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dvb_usb_adapter {int (* fe_init ) (struct dvb_frontend*) ;int dev; } ;
struct dvb_frontend {TYPE_1__* dvb; } ;
struct TYPE_2__ {struct dvb_usb_adapter* priv; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct dvb_frontend*) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_0)
{
 struct dvb_usb_adapter *VAR_1 = VAR_0->dvb->priv;

 FUNC_0(VAR_1->dev, 1);

 if (VAR_1->fe_init)
  VAR_1->fe_init(VAR_0);

 return 0;
}
