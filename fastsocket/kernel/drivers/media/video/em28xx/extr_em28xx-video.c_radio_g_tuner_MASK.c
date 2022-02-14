
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
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *,int ,int ,int ,struct v4l2_tuner*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_4, void *VAR_5,
    struct v4l2_tuner *VAR_6)
{
 struct em28xx *VAR_7 = ((struct em28xx_fh *)VAR_5)->dev;

 if (FUNC_1(VAR_6->index > 0))
  return -VAR_0;

 FUNC_0(VAR_6->name, "Radio");
 VAR_6->type = VAR_1;

 FUNC_2(&VAR_7->v4l2_dev, 0, VAR_3, VAR_2, VAR_6);

 return 0;
}
