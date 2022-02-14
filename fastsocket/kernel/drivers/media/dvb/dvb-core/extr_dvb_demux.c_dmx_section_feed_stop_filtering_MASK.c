
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_demux_feed {int state; struct dvb_demux* demux; } ;
struct dvb_demux {int (* stop_feed ) (struct dvb_demux_feed*) ;int mutex; int lock; } ;
struct dmx_section_feed {scalar_t__ is_filtering; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct dvb_demux_feed*) ;

__attribute__((used)) static int FUNC_5(struct dmx_section_feed *VAR_2)
{
 struct dvb_demux_feed *VAR_3 = (struct dvb_demux_feed *)VAR_2;
 struct dvb_demux *VAR_4 = VAR_3->demux;
 int VAR_5;

 FUNC_0(&VAR_4->mutex);

 if (!VAR_4->stop_feed) {
  FUNC_1(&VAR_4->mutex);
  return -VAR_1;
 }

 VAR_5 = VAR_4->stop_feed(VAR_3);

 FUNC_2(&VAR_4->lock);
 VAR_3->state = VAR_0;
 VAR_2->is_filtering = 0;
 FUNC_3(&VAR_4->lock);

 FUNC_1(&VAR_4->mutex);
 return VAR_5;
}
