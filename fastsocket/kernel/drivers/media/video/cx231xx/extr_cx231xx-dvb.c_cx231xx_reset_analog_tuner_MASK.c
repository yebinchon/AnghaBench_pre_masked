
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct dvb_tuner_ops {int (* init ) (TYPE_3__*) ;} ;
struct cx231xx {int xc_fw_load_done; TYPE_2__* dvb; } ;
struct TYPE_4__ {struct dvb_tuner_ops tuner_ops; } ;
struct TYPE_6__ {TYPE_1__ ops; } ;
struct TYPE_5__ {TYPE_3__* frontend; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_3__*) ;

int FUNC_2(struct cx231xx *VAR_0)
{
 int VAR_1 = 0;

 if ((VAR_0->dvb != ((void*)0)) && (VAR_0->dvb->frontend != ((void*)0))) {

  struct dvb_tuner_ops *VAR_2 = &VAR_0->dvb->frontend->ops.tuner_ops;

  if (VAR_2->init != ((void*)0) && !VAR_0->xc_fw_load_done) {

   FUNC_0("Reloading firmware for XC5000\n");
   VAR_1 = VAR_2->init(VAR_0->dvb->frontend);
   if (VAR_1 == 0) {
    VAR_0->xc_fw_load_done = 1;
    FUNC_0
        ("XC5000 firmware download completed\n");
   } else {
    VAR_0->xc_fw_load_done = 0;
    FUNC_0
        ("XC5000 firmware download failed !!!\n");
   }
  }

 }

 return VAR_1;
}
