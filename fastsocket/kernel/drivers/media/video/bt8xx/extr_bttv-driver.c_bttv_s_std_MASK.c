
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int v4l2_std_id ;
struct file {int dummy; } ;
struct bttv_fh {int prio; struct bttv* btv; } ;
struct bttv {int prio; } ;
struct TYPE_2__ {int v4l2_id; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (struct bttv*,unsigned int) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_3, void *VAR_4, v4l2_std_id *VAR_5)
{
 struct bttv_fh *VAR_6 = VAR_4;
 struct bttv *VAR_7 = VAR_6->btv;
 unsigned int VAR_8;
 int VAR_9;

 VAR_9 = FUNC_1(&VAR_7->prio, VAR_6->prio);
 if (VAR_9)
  goto err;

 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++)
  if (*VAR_5 & VAR_2[VAR_8].v4l2_id)
   break;
 if (VAR_8 == VAR_0) {
  VAR_9 = -VAR_1;
  goto err;
 }

 FUNC_0(VAR_7, VAR_8);

err:

 return VAR_9;
}
