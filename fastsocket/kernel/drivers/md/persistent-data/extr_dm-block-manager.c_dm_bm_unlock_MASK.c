
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_block {int dummy; } ;
struct buffer_aux {int lock; scalar_t__ write_locked; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct buffer_aux* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct dm_block*) ;

int FUNC_6(struct dm_block *VAR_0)
{
 struct buffer_aux *VAR_1;
 VAR_1 = FUNC_2(FUNC_5(VAR_0));

 if (VAR_1->write_locked) {
  FUNC_3(FUNC_5(VAR_0));
  FUNC_1(&VAR_1->lock);
 } else
  FUNC_0(&VAR_1->lock);

 FUNC_4(FUNC_5(VAR_0));

 return 0;
}
