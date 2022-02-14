
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_ext_controls {scalar_t__ count; scalar_t__ ctrl_class; } ;
struct saa7134_dev {int dummy; } ;
struct file {struct saa7134_dev* private_data; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct saa7134_dev*,int ,int ,struct v4l2_ext_controls*) ;
 int FUNC_1 (struct saa7134_dev*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_4, void *VAR_5,
          struct v4l2_ext_controls *VAR_6)
{
 struct saa7134_dev *VAR_7 = VAR_4->private_data;
 int VAR_8;



 if (VAR_6->count == 0)
  return 0;

 if (VAR_6->ctrl_class != VAR_1)
  return -VAR_0;

 VAR_8 = FUNC_0(VAR_7, VAR_2, VAR_3, VAR_6);
 FUNC_1(VAR_7);

 return VAR_8;
}
