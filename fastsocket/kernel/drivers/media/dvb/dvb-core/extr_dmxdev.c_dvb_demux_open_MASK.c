
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {struct dvb_device* private_data; } ;
struct dvb_device {scalar_t__ state; int users; int timer; int type; int buffer; int mutex; struct dmxdev* priv; } ;
struct dmxdev_filter {scalar_t__ state; int users; int timer; int type; int buffer; int mutex; struct dmxdev* priv; } ;
struct dmxdev {int filternum; int mutex; struct dvb_device* filter; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct dvb_device*,int ) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct inode *VAR_6, struct file *VAR_7)
{
 struct dvb_device *VAR_8 = VAR_7->private_data;
 struct dmxdev *VAR_9 = VAR_8->priv;
 int VAR_10;
 struct dmxdev_filter *VAR_11;

 if (!VAR_9->filter)
  return -VAR_3;

 if (FUNC_4(&VAR_9->mutex))
  return -VAR_5;

 for (VAR_10 = 0; VAR_10 < VAR_9->filternum; VAR_10++)
  if (VAR_9->filter[VAR_10].state == VAR_1)
   break;

 if (VAR_10 == VAR_9->filternum) {
  FUNC_5(&VAR_9->mutex);
  return -VAR_4;
 }

 VAR_11 = &VAR_9->filter[VAR_10];
 FUNC_3(&VAR_11->mutex);
 VAR_7->private_data = VAR_11;

 FUNC_1(&VAR_11->buffer, ((void*)0), 8192);
 VAR_11->type = VAR_2;
 FUNC_0(VAR_11, VAR_0);
 FUNC_2(&VAR_11->timer);

 VAR_8->users++;

 FUNC_5(&VAR_9->mutex);
 return 0;
}
