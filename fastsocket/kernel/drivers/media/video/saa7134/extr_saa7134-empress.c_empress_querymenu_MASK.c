
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_querymenu {int id; } ;
struct saa7134_dev {int dummy; } ;
struct file {struct saa7134_dev* private_data; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct saa7134_dev*,int ,int ,struct v4l2_querymenu*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_4, void *VAR_5,
     struct v4l2_querymenu *VAR_6)
{
 struct saa7134_dev *VAR_7 = VAR_4->private_data;

 if (FUNC_0(VAR_6->id) != VAR_1)
  return -VAR_0;
 return FUNC_1(VAR_7, VAR_2, VAR_3, VAR_6);
}
