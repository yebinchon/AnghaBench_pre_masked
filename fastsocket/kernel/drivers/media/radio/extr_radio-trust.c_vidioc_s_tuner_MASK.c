
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_tuner {scalar_t__ audmode; scalar_t__ index; } ;
struct trust {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct trust*,int) ;
 struct trust* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_2, void *VAR_3,
    struct v4l2_tuner *VAR_4)
{
 struct trust *VAR_5 = FUNC_1(VAR_2);

 if (VAR_4->index)
  return -VAR_0;
 FUNC_0(VAR_5, VAR_4->audmode == VAR_1);
 return 0;
}
