
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_demux_feed {struct dvb_demux* demux; } ;
struct dvb_demux {scalar_t__ priv; } ;
struct budget {scalar_t__ feeding; int feedlock; } ;


 int FUNC_0 (int,char*,struct budget*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct budget*) ;

__attribute__((used)) static int FUNC_4(struct dvb_demux_feed *VAR_0)
{
 struct dvb_demux *VAR_1 = VAR_0->demux;
 struct budget *VAR_2 = (struct budget *) VAR_1->priv;
 int VAR_3 = 0;

 FUNC_0(2, "budget: %p\n", VAR_2);

 FUNC_1(&VAR_2->feedlock);
 if (--VAR_2->feeding == 0)
  VAR_3 = FUNC_3(VAR_2);
 FUNC_2(&VAR_2->feedlock);
 return VAR_3;
}
