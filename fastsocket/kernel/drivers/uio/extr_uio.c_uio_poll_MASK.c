
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uio_listener {scalar_t__ event_count; struct uio_device* dev; } ;
struct uio_device {int event; int wait; TYPE_1__* info; } ;
struct file {struct uio_listener* private_data; } ;
typedef int poll_table ;
struct TYPE_2__ {scalar_t__ irq; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct file*,int *,int *) ;

__attribute__((used)) static unsigned int FUNC_2(struct file *VAR_4, poll_table *VAR_5)
{
 struct uio_listener *VAR_6 = VAR_4->private_data;
 struct uio_device *VAR_7 = VAR_6->dev;

 if (VAR_7->info->irq == VAR_3)
  return -VAR_0;

 FUNC_1(VAR_4, &VAR_7->wait, VAR_5);
 if (VAR_6->event_count != FUNC_0(&VAR_7->event))
  return VAR_1 | VAR_2;
 return 0;
}
