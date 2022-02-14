
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct w1_slave {TYPE_1__* master; int reg_num; } ;
struct TYPE_4__ {int slave_count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,int) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*,int *,int) ;

int FUNC_5(struct w1_slave *VAR_2)
{
 if (FUNC_2(VAR_2->master))
  return -1;

 if (VAR_2->master->slave_count == 1)
  FUNC_3(VAR_2->master, VAR_1);
 else {
  u8 VAR_3[9] = {VAR_0, };
  u64 VAR_4 = FUNC_0(*((u64*)&VAR_2->reg_num));

  FUNC_1(&VAR_3[1], &VAR_4, 8);
  FUNC_4(VAR_2->master, VAR_3, 9);
 }
 return 0;
}
