
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ (* frontend_attach ) (struct dvb_usb_adapter*) ;int (* tuner_attach ) (struct dvb_usb_adapter*) ;} ;
struct dvb_usb_adapter {TYPE_4__* dev; TYPE_2__ props; TYPE_5__* fe; int dvb_adap; int fe_sleep; int fe_init; int id; } ;
struct TYPE_7__ {int sleep; int init; } ;
struct TYPE_11__ {TYPE_1__ ops; } ;
struct TYPE_10__ {TYPE_3__* desc; } ;
struct TYPE_9__ {int name; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_5__*) ;
 scalar_t__ FUNC_1 (int *,TYPE_5__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (char*,...) ;
 scalar_t__ FUNC_3 (struct dvb_usb_adapter*) ;
 int FUNC_4 (struct dvb_usb_adapter*) ;

int FUNC_5(struct dvb_usb_adapter *VAR_3)
{
 if (VAR_3->props.frontend_attach == ((void*)0)) {
  FUNC_2("strange: '%s' #%d doesn't want to attach a frontend.",VAR_3->dev->desc->name, VAR_3->id);
  return 0;
 }


 if (VAR_3->props.frontend_attach(VAR_3) == 0 && VAR_3->fe != ((void*)0)) {
  VAR_3->fe_init = VAR_3->fe->ops.init; VAR_3->fe->ops.init = VAR_2;
  VAR_3->fe_sleep = VAR_3->fe->ops.sleep; VAR_3->fe->ops.sleep = VAR_1;

  if (FUNC_1(&VAR_3->dvb_adap, VAR_3->fe)) {
   FUNC_2("Frontend registration failed.");
   FUNC_0(VAR_3->fe);
   VAR_3->fe = ((void*)0);
   return -VAR_0;
  }


  if (VAR_3->props.tuner_attach != ((void*)0))
   VAR_3->props.tuner_attach(VAR_3);
 } else
  FUNC_2("no frontend was attached by '%s'",VAR_3->dev->desc->name);

 return 0;
}
