
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dvb_demux_feed {scalar_t__ pusi_seen; struct dvb_demux* demux; } ;
struct TYPE_2__ {int frontend; } ;
struct dvb_demux {TYPE_1__ dmx; scalar_t__ priv; } ;
struct budget {int feedlock; int feeding; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,struct budget*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct budget*) ;

__attribute__((used)) static int FUNC_4(struct dvb_demux_feed *VAR_1)
{
 struct dvb_demux *VAR_2 = VAR_1->demux;
 struct budget *VAR_3 = (struct budget *) VAR_2->priv;
 int VAR_4 = 0;

 FUNC_0(2, "budget: %p\n", VAR_3);

 if (!VAR_2->dmx.frontend)
  return -VAR_0;

 FUNC_1(&VAR_3->feedlock);
 VAR_1->pusi_seen = 0;
 if (VAR_3->feeding++ == 0)
  VAR_4 = FUNC_3(VAR_3);
 FUNC_2(&VAR_3->feedlock);
 return VAR_4;
}
