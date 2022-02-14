
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_demux_feed {scalar_t__ pusi_seen; struct dvb_demux* demux; } ;
struct dvb_demux {struct av7110* priv; } ;
struct av7110 {int feedlock1; } ;


 int FUNC_0 (int,char*,struct av7110*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct av7110*) ;

__attribute__((used)) static int FUNC_4(struct dvb_demux_feed *VAR_0)
{
 struct dvb_demux *VAR_1 = VAR_0->demux;
 struct av7110 *VAR_2 = VAR_1->priv;
 int VAR_3;

 FUNC_0(2, "av7110: %p\n", VAR_2);

 FUNC_1(&VAR_2->feedlock1);
 VAR_0->pusi_seen = 0;
 VAR_3 = FUNC_3(VAR_2);
 FUNC_2(&VAR_2->feedlock1);
 return VAR_3;
}
