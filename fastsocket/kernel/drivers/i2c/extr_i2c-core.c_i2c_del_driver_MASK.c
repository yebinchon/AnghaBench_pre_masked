
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int name; } ;
struct i2c_driver {TYPE_1__ driver; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,struct i2c_driver*,int ) ;
 int VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,int ) ;

void FUNC_5(struct i2c_driver *VAR_3)
{
 FUNC_2(&VAR_1);
 FUNC_0(&VAR_2, ((void*)0), VAR_3, VAR_0);
 FUNC_3(&VAR_1);

 FUNC_1(&VAR_3->driver);
 FUNC_4("i2c-core: driver [%s] unregistered\n", VAR_3->driver.name);
}
