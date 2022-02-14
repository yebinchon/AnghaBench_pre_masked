
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_frequency {int frequency; int type; int tuner; } ;
struct file {int dummy; } ;
struct cadet {int curtuner; } ;


 int VAR_0 ;
 int FUNC_0 (struct cadet*) ;
 struct cadet* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_1, void *VAR_2,
    struct v4l2_frequency *VAR_3)
{
 struct cadet *VAR_4 = FUNC_1(VAR_1);

 VAR_3->tuner = VAR_4->curtuner;
 VAR_3->type = VAR_0;
 VAR_3->frequency = FUNC_0(VAR_4);
 return 0;
}
