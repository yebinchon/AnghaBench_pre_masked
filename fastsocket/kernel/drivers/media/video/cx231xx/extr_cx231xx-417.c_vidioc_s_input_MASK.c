
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {struct cx231xx_fh* private_data; } ;
struct cx231xx_fh {struct cx231xx* dev; } ;
struct cx231xx {unsigned int input; int lock; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,...) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct cx231xx*,unsigned int) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_1, void *VAR_2, unsigned int VAR_3)
{
 struct cx231xx_fh *VAR_4 = VAR_1->private_data;
 struct cx231xx *VAR_5 = VAR_4->dev;

 FUNC_0(3, "enter vidioc_s_input() i=%d\n", VAR_3);

 FUNC_1(&VAR_5->lock);

 FUNC_3(VAR_5, VAR_3);

 FUNC_2(&VAR_5->lock);

 if (VAR_3 >= 4)
  return -VAR_0;
 VAR_5->input = VAR_3;
 FUNC_0(3, "exit vidioc_s_input()\n");
 return 0;
}
