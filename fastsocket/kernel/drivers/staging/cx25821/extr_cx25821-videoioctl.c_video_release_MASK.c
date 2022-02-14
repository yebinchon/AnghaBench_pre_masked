
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct file {struct cx25821_fh* private_data; } ;
struct TYPE_4__ {struct cx25821_fh* read_buf; } ;
struct cx25821_fh {int prio; TYPE_1__ vidq; struct cx25821_dev* dev; } ;
struct cx25821_dev {int prio; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,struct cx25821_fh*) ;
 int FUNC_1 (struct cx25821_fh*) ;
 scalar_t__ FUNC_2 (struct cx25821_fh*,int ) ;
 int FUNC_3 (struct cx25821_dev*,struct cx25821_fh*,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_7(struct file *VAR_1)
{
 struct cx25821_fh *VAR_2 = VAR_1->private_data;
 struct cx25821_dev *VAR_3 = VAR_2->dev;


 if (FUNC_2(VAR_2, VAR_0)) {
  FUNC_6(&VAR_2->vidq);
  FUNC_3(VAR_3, VAR_2, VAR_0);
 }

 if (VAR_2->vidq.read_buf) {
  FUNC_0(&VAR_2->vidq, VAR_2->vidq.read_buf);
  FUNC_1(VAR_2->vidq.read_buf);
 }

 FUNC_5(&VAR_2->vidq);

 FUNC_4(&VAR_3->prio, &VAR_2->prio);

 VAR_1->private_data = ((void*)0);
 FUNC_1(VAR_2);

 return 0;
}
