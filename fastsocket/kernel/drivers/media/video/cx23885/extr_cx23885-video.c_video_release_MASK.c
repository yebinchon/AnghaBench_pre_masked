
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct file {struct cx23885_fh* private_data; } ;
struct TYPE_7__ {struct cx23885_fh* read_buf; } ;
struct TYPE_6__ {scalar_t__ reading; scalar_t__ streaming; } ;
struct cx23885_fh {TYPE_3__ vidq; TYPE_1__ vbiq; struct cx23885_dev* dev; } ;
struct cx23885_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*,struct cx23885_fh*) ;
 int FUNC_1 (struct cx23885_fh*) ;
 scalar_t__ FUNC_2 (struct cx23885_fh*,int ) ;
 int FUNC_3 (struct cx23885_dev*,struct cx23885_fh*,int ) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_8(struct file *VAR_3)
{
 struct cx23885_fh *VAR_4 = VAR_3->private_data;
 struct cx23885_dev *VAR_5 = VAR_4->dev;


 if (FUNC_2(VAR_4, VAR_0)) {

  FUNC_3(VAR_5, VAR_4, VAR_0);
 }


 if (FUNC_2(VAR_4, VAR_2)) {
  FUNC_5(&VAR_4->vidq);
  FUNC_3(VAR_5, VAR_4, VAR_2);
 }
 if (VAR_4->vidq.read_buf) {
  FUNC_0(&VAR_4->vidq, VAR_4->vidq.read_buf);
  FUNC_1(VAR_4->vidq.read_buf);
 }


 if (FUNC_2(VAR_4, VAR_1)) {
  if (VAR_4->vbiq.streaming)
   FUNC_7(&VAR_4->vbiq);
  if (VAR_4->vbiq.reading)
   FUNC_6(&VAR_4->vbiq);
  FUNC_3(VAR_5, VAR_4, VAR_1);
 }

 FUNC_4(&VAR_4->vidq);
 VAR_3->private_data = ((void*)0);
 FUNC_1(VAR_4);






 return 0;
}
