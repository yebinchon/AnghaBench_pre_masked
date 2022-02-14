
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file {struct ep_data* private_data; } ;
struct TYPE_4__ {scalar_t__ bDescriptorType; } ;
struct TYPE_3__ {scalar_t__ bDescriptorType; } ;
struct ep_data {scalar_t__ state; int lock; int ep; TYPE_2__ hs_desc; TYPE_1__ desc; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct ep_data*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4 (struct inode *VAR_2, struct file *VAR_3)
{
 struct ep_data *VAR_4 = VAR_3->private_data;
 int VAR_5;

 if ((VAR_5 = FUNC_0(&VAR_4->lock)) < 0)
  return VAR_5;


 if (VAR_4->state != VAR_1) {
  VAR_4->state = VAR_0;
  VAR_4->desc.bDescriptorType = 0;
  VAR_4->hs_desc.bDescriptorType = 0;
  FUNC_3(VAR_4->ep);
 }
 FUNC_2 (&VAR_4->lock);
 FUNC_1 (VAR_4);
 return 0;
}
