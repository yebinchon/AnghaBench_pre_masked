
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dvb_demux_feed {int index; int pid; struct dvb_demux* demux; } ;
struct dvb_demux {scalar_t__ priv; } ;
struct cx18_stream {TYPE_1__* dvb; struct cx18* cx; } ;
struct cx18 {int serialize_lock; } ;
struct TYPE_2__ {scalar_t__ feeding; int feedlock; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int FUNC_1 (struct cx18_stream*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct dvb_demux_feed *VAR_1)
{
 struct dvb_demux *VAR_2 = VAR_1->demux;
 struct cx18_stream *VAR_3 = (struct cx18_stream *)VAR_2->priv;
 struct cx18 *VAR_4;
 int VAR_5 = -VAR_0;

 if (VAR_3) {
  VAR_4 = VAR_3->cx;
  FUNC_0("Stop feed: pid = 0x%x index = %d\n",
    VAR_1->pid, VAR_1->index);

  FUNC_2(&VAR_3->dvb->feedlock);
  if (--VAR_3->dvb->feeding == 0) {
   FUNC_0("Stopping Transport DMA\n");
   FUNC_2(&VAR_4->serialize_lock);
   VAR_5 = FUNC_1(VAR_3, 0);
   FUNC_3(&VAR_4->serialize_lock);
  } else
   VAR_5 = 0;
  FUNC_3(&VAR_3->dvb->feedlock);
 }

 return VAR_5;
}
