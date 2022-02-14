
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_frequency {int frequency; int type; } ;
struct file {int dummy; } ;
struct bttv_fh {struct bttv* btv; } ;
struct bttv {int freq; scalar_t__ radio_user; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(struct file *VAR_2, void *VAR_3,
     struct v4l2_frequency *VAR_4)
{
 struct bttv_fh *VAR_5 = VAR_3;
 struct bttv *VAR_6 = VAR_5->btv;

 VAR_4->type = VAR_6->radio_user ? VAR_1 : VAR_0;
 VAR_4->frequency = VAR_6->freq;

 return 0;
}
