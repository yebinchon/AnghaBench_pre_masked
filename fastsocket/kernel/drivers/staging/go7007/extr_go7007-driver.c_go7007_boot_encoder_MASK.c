
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct go7007 {int i2c_adapter_online; int hw_lock; } ;


 scalar_t__ FUNC_0 (struct go7007*) ;
 int FUNC_1 (struct go7007*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct go7007 *VAR_0, int VAR_1)
{
 int VAR_2;

 FUNC_2(&VAR_0->hw_lock);
 VAR_2 = FUNC_1(VAR_0);
 FUNC_3(&VAR_0->hw_lock);
 if (VAR_2 < 0)
  return -1;
 if (!VAR_1)
  return 0;
 if (FUNC_0(VAR_0) < 0)
  return -1;
 VAR_0->i2c_adapter_online = 1;
 return 0;
}
