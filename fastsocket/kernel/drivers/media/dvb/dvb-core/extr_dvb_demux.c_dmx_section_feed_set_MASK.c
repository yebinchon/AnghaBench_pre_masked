
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_3__ {int check_crc; } ;
struct TYPE_4__ {TYPE_1__ sec; } ;
struct dvb_demux_feed {int pid; size_t buffer_size; int state; int * buffer; TYPE_2__ feed; struct dvb_demux* demux; } ;
struct dvb_demux {int mutex; } ;
struct dmx_section_feed {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct dvb_demux_feed*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (size_t) ;

__attribute__((used)) static int FUNC_4(struct dmx_section_feed *VAR_4,
    u16 VAR_5, size_t VAR_6,
    int VAR_7)
{
 struct dvb_demux_feed *VAR_8 = (struct dvb_demux_feed *)VAR_4;
 struct dvb_demux *VAR_9 = VAR_8->demux;

 if (VAR_5 > 0x1fff)
  return -VAR_1;

 if (FUNC_1(&VAR_9->mutex))
  return -VAR_3;

 FUNC_0(VAR_8);

 VAR_8->pid = VAR_5;
 VAR_8->buffer_size = VAR_6;
 VAR_8->feed.sec.check_crc = VAR_7;




 VAR_8->buffer = FUNC_3(VAR_8->buffer_size);
 if (!VAR_8->buffer) {
  FUNC_2(&VAR_9->mutex);
  return -VAR_2;
 }


 VAR_8->state = VAR_0;
 FUNC_2(&VAR_9->mutex);
 return 0;
}
