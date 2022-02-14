
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;
struct bttv_fh {struct bttv* btv; } ;
struct bttv {int prio; } ;
typedef enum v4l2_priority { ____Placeholder_v4l2_priority } v4l2_priority ;


 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_0, void *VAR_1, enum v4l2_priority *VAR_2)
{
 struct bttv_fh *VAR_3 = VAR_1;
 struct bttv *VAR_4 = VAR_3->btv;

 *VAR_2 = FUNC_0(&VAR_4->prio);

 return 0;
}
