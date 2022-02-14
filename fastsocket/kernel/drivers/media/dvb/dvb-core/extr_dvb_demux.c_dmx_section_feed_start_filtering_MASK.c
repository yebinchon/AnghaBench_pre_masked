
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ seclen; scalar_t__ secbufp; int secbuf_base; int secbuf; scalar_t__ tsfeedp; } ;
struct TYPE_4__ {TYPE_1__ sec; } ;
struct dvb_demux_feed {int state; TYPE_2__ feed; int filter; struct dvb_demux* demux; } ;
struct dvb_demux {int (* start_feed ) (struct dvb_demux_feed*) ;int mutex; int lock; } ;
struct dmx_section_feed {int is_filtering; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct dvb_demux_feed*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct dvb_demux_feed*) ;

__attribute__((used)) static int FUNC_6(struct dmx_section_feed *VAR_5)
{
 struct dvb_demux_feed *VAR_6 = (struct dvb_demux_feed *)VAR_5;
 struct dvb_demux *VAR_7 = VAR_6->demux;
 int VAR_8;

 if (FUNC_0(&VAR_7->mutex))
  return -VAR_4;

 if (VAR_5->is_filtering) {
  FUNC_1(&VAR_7->mutex);
  return -VAR_1;
 }

 if (!VAR_6->filter) {
  FUNC_1(&VAR_7->mutex);
  return -VAR_2;
 }

 VAR_6->feed.sec.tsfeedp = 0;
 VAR_6->feed.sec.secbuf = VAR_6->feed.sec.secbuf_base;
 VAR_6->feed.sec.secbufp = 0;
 VAR_6->feed.sec.seclen = 0;

 if (!VAR_7->start_feed) {
  FUNC_1(&VAR_7->mutex);
  return -VAR_3;
 }

 FUNC_2(VAR_6);

 if ((VAR_8 = VAR_7->start_feed(VAR_6)) < 0) {
  FUNC_1(&VAR_7->mutex);
  return VAR_8;
 }

 FUNC_3(&VAR_7->lock);
 VAR_5->is_filtering = 1;
 VAR_6->state = VAR_0;
 FUNC_4(&VAR_7->lock);

 FUNC_1(&VAR_7->mutex);
 return 0;
}
