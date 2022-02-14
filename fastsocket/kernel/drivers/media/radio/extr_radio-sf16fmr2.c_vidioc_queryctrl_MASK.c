
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_queryctrl {int id; } ;
struct fmr2 {int card_type; } ;
struct file {int dummy; } ;


 int VAR_0 ;


 int FUNC_0 (struct v4l2_queryctrl*,int ,int,int,int) ;
 struct fmr2* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_1, void *VAR_2,
     struct v4l2_queryctrl *VAR_3)
{
 struct fmr2 *VAR_4 = FUNC_1(VAR_1);

 switch (VAR_3->id) {
 case 129:
  return FUNC_0(VAR_3, 0, 1, 1, 1);
 case 128:

  if (VAR_4->card_type == 11)
   return FUNC_0(VAR_3, 0, 15, 1, 0);
  return FUNC_0(VAR_3, 0, 1, 1, 0);
 }
 return -VAR_0;
}
