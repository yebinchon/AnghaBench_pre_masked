
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dvb_demux_feed {struct dvb_demux* demux; } ;
struct TYPE_2__ {int frontend; } ;
struct dvb_demux {TYPE_1__ dmx; struct dvb_bt8xx_card* priv; } ;
struct dvb_bt8xx_card {scalar_t__ nfeeds; int lock; int bt; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct dvb_demux_feed *VAR_1)
{
 struct dvb_demux *VAR_2 = VAR_1->demux;
 struct dvb_bt8xx_card *VAR_3 = VAR_2->priv;

 FUNC_1("dvb_bt8xx: stop_feed\n");

 if (!VAR_2->dmx.frontend)
  return -VAR_0;

 FUNC_2(&VAR_3->lock);
 VAR_3->nfeeds--;
 if (VAR_3->nfeeds == 0)
  FUNC_0(VAR_3->bt);
 FUNC_3(&VAR_3->lock);

 return 0;
}
