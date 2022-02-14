
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rc_map {unsigned int len; int lock; TYPE_1__* scan; } ;
struct rc_dev {struct rc_map rc_map; } ;
struct input_dev {int dummy; } ;
struct TYPE_2__ {int keycode; } ;


 int VAR_0 ;
 struct rc_dev* FUNC_0 (struct input_dev*) ;
 unsigned int FUNC_1 (struct rc_map*,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct input_dev *VAR_1,
    int VAR_2, int *VAR_3)
{
 struct rc_dev *VAR_4 = FUNC_0(VAR_1);
 struct rc_map *VAR_5 = &VAR_4->rc_map;
 unsigned long VAR_6;
 unsigned int VAR_7;
 int VAR_8;

 FUNC_2(&VAR_5->lock, VAR_6);

 VAR_7 = FUNC_1(VAR_5, VAR_2);

 if (VAR_7 >= VAR_5->len) {
  *VAR_3 = VAR_0;
  VAR_8 = 0;
  goto out;
 }

 *VAR_3 = VAR_5->scan[VAR_7].keycode;

 VAR_8 = 0;

out:
 FUNC_3(&VAR_5->lock, VAR_6);
 return VAR_8;
}
