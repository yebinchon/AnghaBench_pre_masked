
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcf8591_data {int aout; int control; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct pcf8591_data* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (struct i2c_client*,int ,int ) ;

__attribute__((used)) static void FUNC_3(struct i2c_client *VAR_2)
{
 struct pcf8591_data *VAR_3 = FUNC_0(VAR_2);
 VAR_3->control = VAR_1;
 VAR_3->aout = VAR_0;

 FUNC_2(VAR_2, VAR_3->control, VAR_3->aout);



 FUNC_1(VAR_2);
}
