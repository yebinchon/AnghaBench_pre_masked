
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct i2c_client*,int ) ;
 int FUNC_1 (struct i2c_client*,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct i2c_client *VAR_5)
{
 u8 VAR_6, VAR_7, VAR_8;

 if (VAR_4) {
  FUNC_1(VAR_5, VAR_0, 0x80);
 }





 VAR_8 = FUNC_0(VAR_5, VAR_3);
 FUNC_1(VAR_5, VAR_3,
       VAR_8 & 0xbf);

 VAR_6 = FUNC_0(VAR_5, VAR_1);
 VAR_7 = FUNC_0(VAR_5, VAR_2);
 FUNC_1(VAR_5, VAR_1,
    VAR_6 & 0xe6);
 FUNC_1(VAR_5, VAR_2,
    VAR_7 & 0xe6);


 FUNC_1(VAR_5, VAR_0,
       (FUNC_0(VAR_5,
      VAR_0) & 0xf7)
       | 0x01);
}
