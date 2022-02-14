
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct file {struct cx25821_fh* private_data; } ;
struct TYPE_5__ {struct cx25821_fh* read_buf; } ;
struct cx25821_fh {int prio; TYPE_1__ vidq; struct cx25821_dev* dev; } ;
struct cx25821_dev {int prio; } ;
struct TYPE_6__ {int dma_ctl; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,struct cx25821_fh*) ;
 TYPE_3__* VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct cx25821_fh*) ;
 scalar_t__ FUNC_3 (struct cx25821_fh*,int ) ;
 int FUNC_4 (struct cx25821_dev*,struct cx25821_fh*,int ) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_8(struct file *VAR_2)
{
 struct cx25821_fh *VAR_3 = VAR_2->private_data;
 struct cx25821_dev *VAR_4 = VAR_3->dev;


 FUNC_1(VAR_1->dma_ctl, 0);


 if (FUNC_3(VAR_3, VAR_0)) {
  FUNC_7(&VAR_3->vidq);
  FUNC_4(VAR_4, VAR_3, VAR_0);
 }
 if (VAR_3->vidq.read_buf) {
  FUNC_0(&VAR_3->vidq, VAR_3->vidq.read_buf);
  FUNC_2(VAR_3->vidq.read_buf);
 }

 FUNC_6(&VAR_3->vidq);

 FUNC_5(&VAR_4->prio, &VAR_3->prio);
 VAR_2->private_data = ((void*)0);
 FUNC_2(VAR_3);

 return 0;
}
