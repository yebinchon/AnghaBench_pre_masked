
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct module {int dummy; } ;
struct TYPE_5__ {int name; TYPE_1__* bus; struct module* owner; } ;
struct i2c_driver {int clients; TYPE_2__ driver; } ;
struct TYPE_4__ {int p; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_1__*,int *,struct i2c_driver*,int ) ;
 int VAR_2 ;
 int FUNC_3 (TYPE_2__*) ;
 TYPE_1__ VAR_3 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,int ) ;
 scalar_t__ FUNC_7 (int ) ;

int FUNC_8(struct module *VAR_4, struct i2c_driver *VAR_5)
{
 int VAR_6;


 if (FUNC_7(FUNC_1(!VAR_3.p)))
  return -VAR_0;


 VAR_5->driver.owner = VAR_4;
 VAR_5->driver.bus = &VAR_3;




 VAR_6 = FUNC_3(&VAR_5->driver);
 if (VAR_6)
  return VAR_6;

 FUNC_6("i2c-core: driver [%s] registered\n", VAR_5->driver.name);

 FUNC_0(&VAR_5->clients);

 FUNC_4(&VAR_2);
 FUNC_2(&VAR_3, ((void*)0), VAR_5, VAR_1);
 FUNC_5(&VAR_2);

 return 0;
}
