
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_frequency {int frequency; } ;
struct poseidon {int pm_resume; int pm_suspend; } ;
struct front_face {struct poseidon* pd; } ;
struct file {int dummy; } ;


 int FUNC_0 (struct front_face*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct poseidon*,int ) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_2, void *VAR_3,
    struct v4l2_frequency *VAR_4)
{
 struct front_face *VAR_5 = VAR_3;
 struct poseidon *VAR_6 = VAR_5->pd;

 FUNC_0(VAR_5);




 return FUNC_1(VAR_6, VAR_4->frequency);
}
