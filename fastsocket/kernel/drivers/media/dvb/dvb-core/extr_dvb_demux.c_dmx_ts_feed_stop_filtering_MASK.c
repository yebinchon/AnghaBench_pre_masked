
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_demux_feed {scalar_t__ state; struct dvb_demux* demux; } ;
struct dvb_demux {int (* stop_feed ) (struct dvb_demux_feed*) ;int mutex; int lock; } ;
struct dmx_ts_feed {scalar_t__ is_filtering; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct dvb_demux_feed*) ;

__attribute__((used)) static int FUNC_5(struct dmx_ts_feed *VAR_4)
{
 struct dvb_demux_feed *VAR_5 = (struct dvb_demux_feed *)VAR_4;
 struct dvb_demux *VAR_6 = VAR_5->demux;
 int VAR_7;

 FUNC_0(&VAR_6->mutex);

 if (VAR_5->state < VAR_1) {
  FUNC_1(&VAR_6->mutex);
  return -VAR_2;
 }

 if (!VAR_6->stop_feed) {
  FUNC_1(&VAR_6->mutex);
  return -VAR_3;
 }

 VAR_7 = VAR_6->stop_feed(VAR_5);

 FUNC_2(&VAR_6->lock);
 VAR_4->is_filtering = 0;
 VAR_5->state = VAR_0;
 FUNC_3(&VAR_6->lock);
 FUNC_1(&VAR_6->mutex);

 return VAR_7;
}
