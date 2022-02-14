
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_frequency {scalar_t__ tuner; scalar_t__ type; int frequency; } ;
struct gemtek {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct gemtek*,int ) ;
 struct gemtek* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_2, void *VAR_3,
         struct v4l2_frequency *VAR_4)
{
 struct gemtek *VAR_5 = FUNC_1(VAR_2);

 if (VAR_4->tuner != 0 || VAR_4->type != VAR_1)
  return -VAR_0;
 FUNC_0(VAR_5, VAR_4->frequency);
 return 0;
}
