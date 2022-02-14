
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_buffer {int dummy; } ;
struct saa7134_dev {int empress_tsq; } ;
struct file {struct saa7134_dev* private_data; } ;


 int FUNC_0 (int *,struct v4l2_buffer*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_0, void *VAR_1, struct v4l2_buffer *VAR_2)
{
 struct saa7134_dev *VAR_3 = VAR_0->private_data;

 return FUNC_0(&VAR_3->empress_tsq, VAR_2);
}
