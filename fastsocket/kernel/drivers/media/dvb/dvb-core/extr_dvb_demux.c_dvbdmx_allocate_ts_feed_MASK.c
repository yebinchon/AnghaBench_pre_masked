
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct dmx_ts_feed {int set; int stop_filtering; int start_filtering; scalar_t__ is_filtering; int * priv; struct dmx_demux* parent; } ;
struct TYPE_5__ {struct dmx_ts_feed ts; } ;
struct TYPE_4__ {int ts; } ;
struct dvb_demux_feed {int pid; int peslen; TYPE_3__* filter; int state; TYPE_2__ feed; int * buffer; struct dvb_demux* demux; TYPE_1__ cb; void* type; } ;
struct dvb_demux {int mutex; } ;
struct dmx_demux {int dummy; } ;
typedef int dmx_ts_cb ;
struct TYPE_6__ {int state; struct dvb_demux_feed* feed; void* type; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct dvb_demux_feed* FUNC_0 (struct dvb_demux*) ;
 TYPE_3__* FUNC_1 (struct dvb_demux*) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct dmx_demux *VAR_8,
       struct dmx_ts_feed **VAR_9,
       dmx_ts_cb VAR_10)
{
 struct dvb_demux *VAR_11 = (struct dvb_demux *)VAR_8;
 struct dvb_demux_feed *VAR_12;

 if (FUNC_2(&VAR_11->mutex))
  return -VAR_4;

 if (!(VAR_12 = FUNC_0(VAR_11))) {
  FUNC_3(&VAR_11->mutex);
  return -VAR_3;
 }

 VAR_12->type = VAR_2;
 VAR_12->cb.ts = VAR_10;
 VAR_12->demux = VAR_11;
 VAR_12->pid = 0xffff;
 VAR_12->peslen = 0xfffa;
 VAR_12->buffer = ((void*)0);

 (*VAR_9) = &VAR_12->feed.ts;
 (*VAR_9)->parent = VAR_8;
 (*VAR_9)->priv = ((void*)0);
 (*VAR_9)->is_filtering = 0;
 (*VAR_9)->start_filtering = VAR_6;
 (*VAR_9)->stop_filtering = VAR_7;
 (*VAR_9)->set = VAR_5;

 if (!(VAR_12->filter = FUNC_1(VAR_11))) {
  VAR_12->state = VAR_0;
  FUNC_3(&VAR_11->mutex);
  return -VAR_3;
 }

 VAR_12->filter->type = VAR_2;
 VAR_12->filter->feed = VAR_12;
 VAR_12->filter->state = VAR_1;

 FUNC_3(&VAR_11->mutex);

 return 0;
}
