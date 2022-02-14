
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct adm1031_data {scalar_t__ chip_type; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 unsigned int FUNC_0 (struct i2c_client*,int ) ;
 int FUNC_1 (struct i2c_client*,int ,unsigned int) ;
 struct adm1031_data* FUNC_2 (struct i2c_client*) ;

__attribute__((used)) static void FUNC_3(struct i2c_client *VAR_8)
{
 unsigned int VAR_9;
 unsigned int VAR_10;
 struct adm1031_data *VAR_11 = FUNC_2(VAR_8);

 VAR_10 = (VAR_1 | VAR_3);
 if (VAR_11->chip_type == VAR_7) {
  VAR_10 |= (VAR_2 |
   VAR_4);
 }

 VAR_9 = FUNC_0(VAR_8, VAR_6);
 if ((VAR_9 | VAR_10) != VAR_9) {
     FUNC_1(VAR_8, VAR_6, VAR_9 | VAR_10);
 }

 VAR_9 = FUNC_0(VAR_8, VAR_5);
 if ((VAR_9 | VAR_0) != VAR_9) {
     FUNC_1(VAR_8, VAR_5, VAR_9 |
    VAR_0);
 }

}
