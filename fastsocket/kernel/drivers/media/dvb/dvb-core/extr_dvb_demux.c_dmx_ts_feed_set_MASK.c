
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct timespec {int dummy; } ;
struct dvb_demux_feed {size_t buffer_size; int ts_type; int pes_type; int state; int * buffer; struct timespec timeout; scalar_t__ pid; struct dvb_demux* demux; } ;
struct dvb_demux {int mutex; scalar_t__* pids; struct dvb_demux_feed** pesfilter; } ;
struct dmx_ts_feed {int dummy; } ;
typedef enum dmx_ts_pes { ____Placeholder_dmx_ts_pes } dmx_ts_pes ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct dvb_demux_feed*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (size_t) ;

__attribute__((used)) static int FUNC_4(struct dmx_ts_feed *VAR_7, u16 VAR_8, int VAR_9,
      enum dmx_ts_pes VAR_10,
      size_t VAR_11, struct timespec VAR_12)
{
 struct dvb_demux_feed *VAR_13 = (struct dvb_demux_feed *)VAR_7;
 struct dvb_demux *VAR_14 = VAR_13->demux;

 if (VAR_8 > VAR_0)
  return -VAR_3;

 if (FUNC_1(&VAR_14->mutex))
  return -VAR_5;

 if (VAR_9 & VAR_6) {
  if (VAR_10 >= VAR_2) {
   FUNC_2(&VAR_14->mutex);
   return -VAR_3;
  }

  if (VAR_14->pesfilter[VAR_10] &&
      VAR_14->pesfilter[VAR_10] != VAR_13) {
   FUNC_2(&VAR_14->mutex);
   return -VAR_3;
  }

  VAR_14->pesfilter[VAR_10] = VAR_13;
  VAR_14->pids[VAR_10] = VAR_8;
 }

 FUNC_0(VAR_13);

 VAR_13->pid = VAR_8;
 VAR_13->buffer_size = VAR_11;
 VAR_13->timeout = VAR_12;
 VAR_13->ts_type = VAR_9;
 VAR_13->pes_type = VAR_10;

 if (VAR_13->buffer_size) {



  VAR_13->buffer = FUNC_3(VAR_13->buffer_size);
  if (!VAR_13->buffer) {
   FUNC_2(&VAR_14->mutex);
   return -VAR_4;
  }

 }

 VAR_13->state = VAR_1;
 FUNC_2(&VAR_14->mutex);

 return 0;
}
