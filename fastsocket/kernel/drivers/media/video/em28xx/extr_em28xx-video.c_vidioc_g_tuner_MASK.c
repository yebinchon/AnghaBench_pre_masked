
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_tuner {scalar_t__ index; int type; int name; } ;
struct file {int dummy; } ;
struct em28xx_fh {struct em28xx* dev; } ;
struct em28xx {int v4l2_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct em28xx*) ;
 int VAR_2 ;
 int FUNC_1 (int ,char*) ;
 int VAR_3 ;
 int FUNC_2 (int *,int ,int ,int ,struct v4l2_tuner*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_4, void *VAR_5,
    struct v4l2_tuner *VAR_6)
{
 struct em28xx_fh *VAR_7 = VAR_5;
 struct em28xx *VAR_8 = VAR_7->dev;
 int VAR_9;

 VAR_9 = FUNC_0(VAR_8);
 if (VAR_9 < 0)
  return VAR_9;

 if (0 != VAR_6->index)
  return -VAR_0;

 FUNC_1(VAR_6->name, "Tuner");
 VAR_6->type = VAR_1;

 FUNC_2(&VAR_8->v4l2_dev, 0, VAR_3, VAR_2, VAR_6);
 return 0;
}
