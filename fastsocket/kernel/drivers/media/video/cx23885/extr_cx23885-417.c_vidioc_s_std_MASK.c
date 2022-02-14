
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int v4l2_std_id ;
struct file {struct cx23885_fh* private_data; } ;
struct cx23885_fh {struct cx23885_dev* dev; } ;
struct TYPE_3__ {int id; } ;
struct cx23885_dev {TYPE_1__ encodernorm; } ;


 unsigned int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static int FUNC_1(struct file *VAR_2, void *VAR_3, v4l2_std_id *VAR_4)
{
 struct cx23885_fh *VAR_5 = VAR_2->private_data;
 struct cx23885_dev *VAR_6 = VAR_5->dev;
 unsigned int VAR_7;

 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_1); VAR_7++)
  if (*VAR_4 & VAR_1[VAR_7].id)
   break;
 if (VAR_7 == FUNC_0(VAR_1))
  return -VAR_0;
 VAR_6->encodernorm = VAR_1[VAR_7];
 return 0;
}
