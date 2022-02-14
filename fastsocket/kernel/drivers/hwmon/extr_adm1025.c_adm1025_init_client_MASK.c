
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {int dummy; } ;
struct adm1025_data {int vrm; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 struct adm1025_data* FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (struct i2c_client*,int ) ;
 int FUNC_4 (struct i2c_client*,int ,int) ;
 int FUNC_5 () ;

__attribute__((used)) static void FUNC_6(struct i2c_client *VAR_1)
{
 u8 VAR_2;
 struct adm1025_data *VAR_3 = FUNC_2(VAR_1);
 int VAR_4;

 VAR_3->vrm = FUNC_5();
 for (VAR_4=0; VAR_4<6; VAR_4++) {
  VAR_2 = FUNC_3(VAR_1,
            FUNC_0(VAR_4));
  if (VAR_2 == 0)
   FUNC_4(VAR_1,
        FUNC_0(VAR_4),
        0xFF);
 }
 for (VAR_4=0; VAR_4<2; VAR_4++) {
  VAR_2 = FUNC_3(VAR_1,
            FUNC_1(VAR_4));
  if (VAR_2 == 0)
   FUNC_4(VAR_1,
        FUNC_1(VAR_4),
        0x7F);
 }




 VAR_2 = FUNC_3(VAR_1, VAR_0);
 if (!(VAR_2 & 0x01))
  FUNC_4(VAR_1, VAR_0,
       (VAR_2&0x7E)|0x01);
}
