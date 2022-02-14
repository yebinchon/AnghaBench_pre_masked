
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_buffer {int dummy; } ;
struct saa7134_dev {int empress_tsq; } ;
struct file {int f_flags; struct saa7134_dev* private_data; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct v4l2_buffer*,int) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_1, void *VAR_2, struct v4l2_buffer *VAR_3)
{
 struct saa7134_dev *VAR_4 = VAR_1->private_data;

 return FUNC_0(&VAR_4->empress_tsq, VAR_3,
    VAR_1->f_flags & VAR_0);
}
