
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct inode {struct ep_data* i_private; } ;
struct file {struct ep_data* private_data; } ;
struct ep_data {scalar_t__ state; int lock; TYPE_1__* dev; int name; } ;
struct TYPE_3__ {scalar_t__ state; int lock; } ;


 int FUNC_0 (TYPE_1__*,char*,int ,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (TYPE_1__*,char*,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct ep_data*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int
FUNC_7 (struct inode *VAR_6, struct file *VAR_7)
{
 struct ep_data *VAR_8 = VAR_6->i_private;
 int VAR_9 = -VAR_0;

 if (FUNC_2 (&VAR_8->lock) != 0)
  return -VAR_1;
 FUNC_4 (&VAR_8->dev->lock);
 if (VAR_8->dev->state == VAR_3)
  VAR_9 = -VAR_2;
 else if (VAR_8->state == VAR_4) {
  VAR_9 = 0;
  VAR_8->state = VAR_5;
  FUNC_3 (VAR_8);
  VAR_7->private_data = VAR_8;
  FUNC_1 (VAR_8->dev, "%s ready\n", VAR_8->name);
 } else
  FUNC_0 (VAR_8->dev, "%s state %d\n",
   VAR_8->name, VAR_8->state);
 FUNC_5 (&VAR_8->dev->lock);
 FUNC_6 (&VAR_8->lock);
 return VAR_9;
}
