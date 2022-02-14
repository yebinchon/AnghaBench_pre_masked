
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file {int f_flags; int * f_op; struct dvb_device* private_data; } ;
struct dvb_device {int users; int wait_queue; int readers; struct dmxdev* priv; } ;
struct TYPE_4__ {int * data; } ;
struct dmxdev {int exit; int mutex; int lock; TYPE_1__ dvr_buffer; int dvr_orig_fe; TYPE_2__* demux; } ;
struct TYPE_5__ {int (* connect_frontend ) (TYPE_2__*,int ) ;int (* disconnect_frontend ) (TYPE_2__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,int ) ;
 int FUNC_8 (void*) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct inode *VAR_3, struct file *VAR_4)
{
 struct dvb_device *VAR_5 = VAR_4->private_data;
 struct dmxdev *VAR_6 = VAR_5->priv;

 FUNC_2(&VAR_6->mutex);

 if ((VAR_4->f_flags & VAR_0) == VAR_2) {
  VAR_6->demux->disconnect_frontend(VAR_6->demux);
  VAR_6->demux->connect_frontend(VAR_6->demux,
      VAR_6->dvr_orig_fe);
 }
 if ((VAR_4->f_flags & VAR_0) == VAR_1) {
  VAR_5->readers++;
  if (VAR_6->dvr_buffer.data) {
   void *VAR_7 = VAR_6->dvr_buffer.data;
   FUNC_1();
   FUNC_4(&VAR_6->lock);
   VAR_6->dvr_buffer.data = ((void*)0);
   FUNC_5(&VAR_6->lock);
   FUNC_8(VAR_7);
  }
 }

 VAR_5->users--;
 if (VAR_5->users == 1 && VAR_6->exit == 1) {
  FUNC_0(VAR_4->f_op);
  VAR_4->f_op = ((void*)0);
  FUNC_3(&VAR_6->mutex);
  FUNC_9(&VAR_5->wait_queue);
 } else
  FUNC_3(&VAR_6->mutex);

 return 0;
}
