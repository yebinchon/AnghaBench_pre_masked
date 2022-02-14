
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmac_i2c_bus {int mutex; scalar_t__ opened; int (* close ) (struct pmac_i2c_bus*) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct pmac_i2c_bus*) ;

void FUNC_3(struct pmac_i2c_bus *VAR_0)
{
 FUNC_0(!VAR_0->opened);
 if (VAR_0->close)
  VAR_0->close(VAR_0);
 VAR_0->opened = 0;
 FUNC_1(&VAR_0->mutex);
}
