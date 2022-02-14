
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_tuner {scalar_t__ index; int audmode; } ;
struct tea5764_device {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct tea5764_device*,int ) ;
 struct tea5764_device* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_1, void *VAR_2,
    struct v4l2_tuner *VAR_3)
{
 struct tea5764_device *VAR_4 = FUNC_1(VAR_1);

 if (VAR_3->index > 0)
  return -VAR_0;

 FUNC_0(VAR_4, VAR_3->audmode);
 return 0;
}
