
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zoltrix {int dummy; } ;
struct v4l2_frequency {int frequency; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 struct zoltrix* FUNC_0 (struct file*) ;
 scalar_t__ FUNC_1 (struct zoltrix*,int ) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_1, void *VAR_2,
     struct v4l2_frequency *VAR_3)
{
 struct zoltrix *VAR_4 = FUNC_0(VAR_1);

 if (FUNC_1(VAR_4, VAR_3->frequency) != 0)
  return -VAR_0;
 return 0;
}
