
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct file {int f_flags; struct dvb_device* private_data; } ;
struct dvb_device {struct av7110* priv; } ;
struct TYPE_4__ {scalar_t__ eventw; scalar_t__ eventr; int wait_queue; } ;
struct TYPE_3__ {int queue; } ;
struct av7110 {scalar_t__ playing; TYPE_2__ video_events; TYPE_1__ avout; } ;
typedef int poll_table ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (int,char*,struct av7110*) ;
 int FUNC_1 (struct file*,int *,int *) ;

__attribute__((used)) static unsigned int FUNC_2(struct file *VAR_6, poll_table *VAR_7)
{
 struct dvb_device *VAR_8 = VAR_6->private_data;
 struct av7110 *VAR_9 = VAR_8->priv;
 unsigned int VAR_10 = 0;

 FUNC_0(2, "av7110:%p, \n", VAR_9);

 if ((VAR_6->f_flags & VAR_1) != VAR_2)
  FUNC_1(VAR_6, &VAR_9->avout.queue, VAR_7);

 FUNC_1(VAR_6, &VAR_9->video_events.wait_queue, VAR_7);

 if (VAR_9->video_events.eventw != VAR_9->video_events.eventr)
  VAR_10 = VAR_4;

 if ((VAR_6->f_flags & VAR_1) != VAR_2) {
  if (VAR_9->playing) {
   if (VAR_0)
    VAR_10 |= (VAR_3 | VAR_5);
   } else
    VAR_10 |= (VAR_3 | VAR_5);
 }

 return VAR_10;
}
