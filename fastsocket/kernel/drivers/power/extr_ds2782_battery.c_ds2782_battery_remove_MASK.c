
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_client {int dummy; } ;
struct TYPE_2__ {struct ds2782_info* name; } ;
struct ds2782_info {int id; TYPE_1__ battery; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct ds2782_info* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (struct i2c_client*,struct ds2782_info*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct ds2782_info*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_7(struct i2c_client *VAR_2)
{
 struct ds2782_info *VAR_3 = FUNC_0(VAR_2);

 FUNC_6(&VAR_3->battery);
 FUNC_3(VAR_3->battery.name);

 FUNC_4(&VAR_1);
 FUNC_2(&VAR_0, VAR_3->id);
 FUNC_5(&VAR_1);

 FUNC_1(VAR_2, VAR_3);

 FUNC_3(VAR_3);
 return 0;
}
