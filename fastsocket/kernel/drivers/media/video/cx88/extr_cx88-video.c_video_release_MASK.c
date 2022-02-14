
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct file {struct cx8800_fh* private_data; } ;
struct TYPE_6__ {struct cx8800_fh* read_buf; } ;
struct cx8800_fh {TYPE_1__ vbiq; TYPE_1__ vidq; struct cx8800_dev* dev; } ;
struct cx8800_dev {TYPE_4__* core; } ;
struct TYPE_7__ {int lock; int users; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,struct cx8800_fh*) ;
 int FUNC_2 (TYPE_4__*,int ,int ,int ) ;
 int VAR_3 ;
 int FUNC_3 (struct cx8800_fh*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (struct cx8800_fh*,int ) ;
 int FUNC_7 (struct cx8800_dev*,struct cx8800_fh*,int ) ;
 int VAR_4 ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_11(struct file *VAR_5)
{
 struct cx8800_fh *VAR_6 = VAR_5->private_data;
 struct cx8800_dev *VAR_7 = VAR_6->dev;


 if (FUNC_6(VAR_6, VAR_0)) {

  FUNC_7(VAR_7,VAR_6,VAR_0);
 }


 if (FUNC_6(VAR_6, VAR_2)) {
  FUNC_9(&VAR_6->vidq);
  FUNC_7(VAR_7,VAR_6,VAR_2);
 }
 if (VAR_6->vidq.read_buf) {
  FUNC_1(&VAR_6->vidq,VAR_6->vidq.read_buf);
  FUNC_3(VAR_6->vidq.read_buf);
 }


 if (FUNC_6(VAR_6, VAR_1)) {
  FUNC_10(&VAR_6->vbiq);
  FUNC_7(VAR_7,VAR_6,VAR_1);
 }

 FUNC_8(&VAR_6->vidq);
 FUNC_8(&VAR_6->vbiq);

 FUNC_4(&VAR_7->core->lock);
 VAR_5->private_data = ((void*)0);
 FUNC_3(VAR_6);

 if(FUNC_0(&VAR_7->core->users))
  FUNC_2(VAR_7->core, VAR_3, VAR_4, 0);
 FUNC_5(&VAR_7->core->lock);

 return 0;
}
