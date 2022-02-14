
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct saa6588_command {int dummy; } ;
struct file {struct bttv_fh* private_data; } ;
struct bttv_fh {int prio; struct bttv* btv; } ;
struct bttv {int radio_user; int prio; } ;


 int VAR_0 ;
 int FUNC_0 (struct bttv*,int ,int ,int ,struct saa6588_command*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct bttv_fh*) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_3)
{
 struct bttv_fh *VAR_4 = VAR_3->private_data;
 struct bttv *VAR_5 = VAR_4->btv;
 struct saa6588_command VAR_6;

 FUNC_2(&VAR_5->prio, VAR_4->prio);
 VAR_3->private_data = ((void*)0);
 FUNC_1(VAR_4);

 VAR_5->radio_user--;

 FUNC_0(VAR_5, VAR_1, VAR_2, VAR_0, &VAR_6);

 return 0;
}
