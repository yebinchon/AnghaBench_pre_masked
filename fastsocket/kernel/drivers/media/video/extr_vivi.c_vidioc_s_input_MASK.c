
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vivi_fh {struct vivi_dev* dev; } ;
struct vivi_dev {unsigned int input; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct vivi_fh*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_2, void *VAR_3, unsigned int VAR_4)
{
 struct vivi_fh *VAR_5 = VAR_3;
 struct vivi_dev *VAR_6 = VAR_5->dev;

 if (VAR_4 >= VAR_1)
  return -VAR_0;

 VAR_6->input = VAR_4;
 FUNC_0(VAR_5);

 return (0);
}
