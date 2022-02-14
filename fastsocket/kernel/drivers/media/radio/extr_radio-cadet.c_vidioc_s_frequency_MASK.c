
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_frequency {scalar_t__ type; int frequency; } ;
struct file {int dummy; } ;
struct cadet {int curtuner; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct cadet*,int) ;
 struct cadet* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_2, void *VAR_3,
    struct v4l2_frequency *VAR_4)
{
 struct cadet *VAR_5 = FUNC_1(VAR_2);

 if (VAR_4->type != VAR_1)
  return -VAR_0;
 if (VAR_5->curtuner == 0 && (VAR_4->frequency < 1400 || VAR_4->frequency > 1728))
  return -VAR_0;
 if (VAR_5->curtuner == 1 && (VAR_4->frequency < 8320 || VAR_4->frequency > 26400))
  return -VAR_0;
 FUNC_0(VAR_5, VAR_4->frequency);
 return 0;
}
