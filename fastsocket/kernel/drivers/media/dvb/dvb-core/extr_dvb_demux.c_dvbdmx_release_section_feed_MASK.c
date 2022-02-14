
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_demux_feed {scalar_t__ state; int pid; int * buffer; } ;
struct dvb_demux {int mutex; } ;
struct dmx_section_feed {int dummy; } ;
struct dmx_demux {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dvb_demux_feed*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct dmx_demux *VAR_2,
           struct dmx_section_feed *VAR_3)
{
 struct dvb_demux_feed *VAR_4 = (struct dvb_demux_feed *)VAR_3;
 struct dvb_demux *VAR_5 = (struct dvb_demux *)VAR_2;

 FUNC_1(&VAR_5->mutex);

 if (VAR_4->state == VAR_0) {
  FUNC_2(&VAR_5->mutex);
  return -VAR_1;
 }

 FUNC_3(VAR_4->buffer);
 VAR_4->buffer = ((void*)0);

 VAR_4->state = VAR_0;

 FUNC_0(VAR_4);

 VAR_4->pid = 0xffff;

 FUNC_2(&VAR_5->mutex);
 return 0;
}
