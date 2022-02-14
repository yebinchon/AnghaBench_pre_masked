
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dvb_demux_feed {scalar_t__ state; int pid; int ts_type; size_t pes_type; TYPE_1__* filter; int * buffer; } ;
struct dvb_demux {int mutex; int ** pesfilter; } ;
struct dmx_ts_feed {int dummy; } ;
struct dmx_demux {int dummy; } ;
struct TYPE_2__ {scalar_t__ state; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct dvb_demux_feed*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct dmx_demux *VAR_4,
      struct dmx_ts_feed *VAR_5)
{
 struct dvb_demux *VAR_6 = (struct dvb_demux *)VAR_4;
 struct dvb_demux_feed *VAR_7 = (struct dvb_demux_feed *)VAR_5;

 FUNC_1(&VAR_6->mutex);

 if (VAR_7->state == VAR_0) {
  FUNC_2(&VAR_6->mutex);
  return -VAR_2;
 }

 FUNC_3(VAR_7->buffer);
 VAR_7->buffer = ((void*)0);


 VAR_7->state = VAR_0;
 VAR_7->filter->state = VAR_0;

 FUNC_0(VAR_7);

 VAR_7->pid = 0xffff;

 if (VAR_7->ts_type & VAR_3 && VAR_7->pes_type < VAR_1)
  VAR_6->pesfilter[VAR_7->pes_type] = ((void*)0);

 FUNC_2(&VAR_6->mutex);
 return 0;
}
