
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file {int f_flags; struct ep_data* private_data; } ;
struct ep_data {int lock; TYPE_1__* dev; int * ep; } ;
struct TYPE_2__ {int lock; } ;


 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (int ,struct ep_data*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static long FUNC_8(struct file *VAR_2, unsigned VAR_3, unsigned long VAR_4)
{
 struct ep_data *VAR_5 = VAR_2->private_data;
 int VAR_6;

 if ((VAR_6 = FUNC_0 (VAR_2->f_flags, VAR_5)) < 0)
  return VAR_6;

 FUNC_2 (&VAR_5->dev->lock);
 if (FUNC_1 (VAR_5->ep != ((void*)0))) {
  switch (VAR_3) {
  case 128:
   VAR_6 = FUNC_7 (VAR_5->ep);
   break;
  case 129:
   FUNC_6 (VAR_5->ep);
   break;
  case 130:
   VAR_6 = FUNC_5 (VAR_5->ep);
   break;
  default:
   VAR_6 = -VAR_1;
  }
 } else
  VAR_6 = -VAR_0;
 FUNC_3 (&VAR_5->dev->lock);
 FUNC_4 (&VAR_5->lock);
 return VAR_6;
}
