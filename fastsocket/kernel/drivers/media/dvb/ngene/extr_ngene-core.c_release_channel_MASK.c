
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct ngene_info {int* io_type; } ;
struct TYPE_4__ {int (* remove_frontend ) (TYPE_1__*,int *) ;int (* close ) (TYPE_1__*) ;} ;
struct dvb_demux {TYPE_1__ dmx; } ;
struct ngene_channel {size_t number; struct dvb_demux demux; int dmxdev; int mem_frontend; int hw_frontend; int * fe; int demux_tasklet; scalar_t__ running; struct ngene* dev; } ;
struct ngene {int * adapter; scalar_t__ cmd_timeout_workaround; struct ngene_info* card_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dvb_demux*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_2 ;
 int FUNC_5 (struct ngene_channel*,int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,int *) ;
 int FUNC_8 (TYPE_1__*,int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(struct ngene_channel *VAR_3)
{
 struct dvb_demux *VAR_4 = &VAR_3->demux;
 struct ngene *VAR_5 = VAR_3->dev;
 struct ngene_info *VAR_6 = VAR_5->card_info;
 int VAR_7 = VAR_6->io_type[VAR_3->number];

 if (VAR_3->dev->cmd_timeout_workaround && VAR_3->running)
  FUNC_5(VAR_3, 0);

 FUNC_9(&VAR_3->demux_tasklet);

 if (VAR_7 & (VAR_0 | VAR_1)) {
  if (VAR_3->fe) {
   FUNC_4(VAR_3->fe);
   FUNC_2(VAR_3->fe);
   VAR_3->fe = ((void*)0);
  }
  VAR_4->dmx.close(&VAR_4->dmx);
  VAR_4->dmx.remove_frontend(&VAR_4->dmx,
           &VAR_3->hw_frontend);
  VAR_4->dmx.remove_frontend(&VAR_4->dmx,
           &VAR_3->mem_frontend);
  FUNC_1(&VAR_3->dmxdev);
  FUNC_0(&VAR_3->demux);

  if (VAR_3->number == 0 || !VAR_2)
   FUNC_3(&VAR_5->adapter[VAR_3->number]);
 }
}
