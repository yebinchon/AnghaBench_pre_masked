
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file {struct dmxdev_filter* private_data; } ;
struct TYPE_2__ {scalar_t__ error; int queue; } ;
struct dmxdev_filter {scalar_t__ state; TYPE_1__ buffer; } ;
typedef int poll_table ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct file*,int *,int *) ;

__attribute__((used)) static unsigned int FUNC_2(struct file *VAR_8, poll_table *VAR_9)
{
 struct dmxdev_filter *VAR_10 = VAR_8->private_data;
 unsigned int VAR_11 = 0;

 if (!VAR_10)
  return -VAR_3;

 FUNC_1(VAR_8, &VAR_10->buffer.queue, VAR_9);

 if (VAR_10->state != VAR_1 &&
     VAR_10->state != VAR_0 &&
     VAR_10->state != VAR_2)
  return 0;

 if (VAR_10->buffer.error)
  VAR_11 |= (VAR_5 | VAR_7 | VAR_6 | VAR_4);

 if (!FUNC_0(&VAR_10->buffer))
  VAR_11 |= (VAR_5 | VAR_7 | VAR_6);

 return VAR_11;
}
