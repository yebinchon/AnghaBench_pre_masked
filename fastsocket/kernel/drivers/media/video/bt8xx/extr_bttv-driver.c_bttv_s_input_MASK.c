
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct file {int dummy; } ;
struct bttv_fh {int prio; struct bttv* btv; } ;
struct TYPE_3__ {size_t type; } ;
struct bttv {int tvnorm; TYPE_1__ c; int prio; } ;
struct TYPE_4__ {unsigned int video_inputs; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (struct bttv*,unsigned int,int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_2, void *VAR_3, unsigned int VAR_4)
{
 struct bttv_fh *VAR_5 = VAR_3;
 struct bttv *VAR_6 = VAR_5->btv;

 int VAR_7;

 VAR_7 = FUNC_2(&VAR_6->prio, VAR_5->prio);
 if (FUNC_1(VAR_7))
  goto err;

 if (VAR_4 > VAR_1[VAR_6->c.type].video_inputs) {
  VAR_7 = -VAR_0;
  goto err;
 }

 FUNC_0(VAR_6, VAR_4, VAR_6->tvnorm);

err:
 return 0;
}
