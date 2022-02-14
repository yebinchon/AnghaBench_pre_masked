
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rc_map {unsigned int len; int lock; } ;
struct rc_dev {struct rc_map rc_map; } ;
struct input_dev {int dummy; } ;


 int VAR_0 ;
 struct rc_dev* FUNC_0 (struct input_dev*) ;
 unsigned int FUNC_1 (struct rc_dev*,struct rc_map*,int,int) ;
 int FUNC_2 (struct rc_dev*,struct rc_map*,unsigned int,int) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_5(struct input_dev *VAR_1,
    int VAR_2, int VAR_3)
{
 struct rc_dev *VAR_4 = FUNC_0(VAR_1);
 struct rc_map *VAR_5 = &VAR_4->rc_map;
 unsigned int VAR_6;
 int VAR_7 = 0;
 unsigned long VAR_8;

 FUNC_3(&VAR_5->lock, VAR_8);

 VAR_6 = FUNC_1(VAR_4, VAR_5, VAR_2, 1);
 if (VAR_6 >= VAR_5->len) {
  VAR_7 = -VAR_0;
  goto out;
 }

 FUNC_2(VAR_4, VAR_5, VAR_6, VAR_3);

out:
 FUNC_4(&VAR_5->lock, VAR_8);
 return VAR_7;
}
