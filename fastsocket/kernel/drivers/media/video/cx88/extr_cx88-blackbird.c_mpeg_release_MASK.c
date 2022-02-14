
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file {struct cx8802_fh* private_data; } ;
struct cx8802_fh {int mpegq; struct cx8802_dev* dev; } ;
struct cx8802_driver {int (* request_release ) (struct cx8802_driver*) ;} ;
struct cx8802_dev {TYPE_1__* core; scalar_t__ mpeg_active; } ;
struct TYPE_2__ {int mpeg_users; int lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct cx8802_dev*) ;
 int FUNC_3 (struct cx8802_dev*) ;
 struct cx8802_driver* FUNC_4 (struct cx8802_dev*,int ) ;
 int FUNC_5 (struct cx8802_fh*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct cx8802_driver*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(struct file *VAR_1)
{
 struct cx8802_fh *VAR_2 = VAR_1->private_data;
 struct cx8802_dev *VAR_3 = VAR_2->dev;
 struct cx8802_driver *VAR_4 = ((void*)0);

 if (VAR_3->mpeg_active && FUNC_1(&VAR_3->core->mpeg_users) == 1)
  FUNC_2(VAR_3);

 FUNC_3(VAR_2->dev);

 FUNC_10(&VAR_2->mpegq);

 FUNC_9(&VAR_2->mpegq);

 FUNC_6(&VAR_3->core->lock);
 VAR_1->private_data = ((void*)0);
 FUNC_5(VAR_2);
 FUNC_7(&VAR_3->core->lock);


 VAR_4 = FUNC_4(VAR_3, VAR_0);
 if (VAR_4)
  VAR_4->request_release(VAR_4);

 FUNC_0(&VAR_3->core->mpeg_users);

 return 0;
}
