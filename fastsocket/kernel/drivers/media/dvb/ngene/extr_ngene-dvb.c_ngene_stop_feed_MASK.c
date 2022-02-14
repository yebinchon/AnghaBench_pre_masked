
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ngene_channel {int users; TYPE_1__* dev; } ;
struct dvb_demux_feed {struct dvb_demux* demux; } ;
struct dvb_demux {struct ngene_channel* priv; } ;
struct TYPE_2__ {int cmd_timeout_workaround; } ;


 int FUNC_0 (struct ngene_channel*,int ) ;

int FUNC_1(struct dvb_demux_feed *VAR_0)
{
 struct dvb_demux *VAR_1 = VAR_0->demux;
 struct ngene_channel *VAR_2 = VAR_1->priv;

 if (--VAR_2->users)
  return VAR_2->users;

 if (!VAR_2->dev->cmd_timeout_workaround)
  FUNC_0(VAR_2, 0);

 return 0;
}
