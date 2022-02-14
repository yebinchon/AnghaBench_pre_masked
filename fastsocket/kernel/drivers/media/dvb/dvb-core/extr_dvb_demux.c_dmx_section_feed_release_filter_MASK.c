
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_demux_filter {int state; struct dvb_demux_filter* next; struct dvb_demux_feed* feed; } ;
struct dvb_demux_feed {struct dvb_demux_filter* filter; struct dvb_demux* demux; } ;
struct dvb_demux {int mutex; int lock; } ;
struct dmx_section_filter {int dummy; } ;
struct dmx_section_feed {int (* stop_filtering ) (struct dmx_section_feed*) ;scalar_t__ is_filtering; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct dmx_section_feed*) ;

__attribute__((used)) static int FUNC_5(struct dmx_section_feed *VAR_2,
        struct dmx_section_filter *VAR_3)
{
 struct dvb_demux_filter *VAR_4 = (struct dvb_demux_filter *)VAR_3, *VAR_5;
 struct dvb_demux_feed *VAR_6 = (struct dvb_demux_feed *)VAR_2;
 struct dvb_demux *VAR_7 = VAR_6->demux;

 FUNC_0(&VAR_7->mutex);

 if (VAR_4->feed != VAR_6) {
  FUNC_1(&VAR_7->mutex);
  return -VAR_1;
 }

 if (VAR_2->is_filtering)
  VAR_2->stop_filtering(VAR_2);

 FUNC_2(&VAR_7->lock);
 VAR_5 = VAR_6->filter;

 if (VAR_5 == VAR_4) {
  VAR_6->filter = VAR_4->next;
 } else {
  while (VAR_5->next != VAR_4)
   VAR_5 = VAR_5->next;
  VAR_5->next = VAR_5->next->next;
 }

 VAR_4->state = VAR_0;
 FUNC_3(&VAR_7->lock);
 FUNC_1(&VAR_7->mutex);
 return 0;
}
