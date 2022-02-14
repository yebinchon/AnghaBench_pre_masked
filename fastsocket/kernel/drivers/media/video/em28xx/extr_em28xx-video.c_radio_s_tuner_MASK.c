
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_tuner {scalar_t__ index; } ;
struct file {int dummy; } ;
struct em28xx_fh {struct em28xx* dev; } ;
struct em28xx {int v4l2_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int ,int ,struct v4l2_tuner*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_3, void *VAR_4,
    struct v4l2_tuner *VAR_5)
{
 struct em28xx *VAR_6 = ((struct em28xx_fh *)VAR_4)->dev;

 if (0 != VAR_5->index)
  return -VAR_0;

 FUNC_0(&VAR_6->v4l2_dev, 0, VAR_2, VAR_1, VAR_5);

 return 0;
}
