
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct w83791d_data {int vrm; } ;
struct i2c_client {int dummy; } ;


 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct w83791d_data* FUNC_0 (struct i2c_client*) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 () ;
 int FUNC_2 (struct i2c_client*,int ) ;
 int FUNC_3 (struct i2c_client*,int ,int) ;

__attribute__((used)) static void FUNC_4(struct i2c_client *VAR_7)
{
 struct w83791d_data *VAR_8 = FUNC_0(VAR_7);
 u8 VAR_9;
 u8 VAR_10;
 if (VAR_6 || VAR_5) {

  VAR_10 = FUNC_2(VAR_7, VAR_0);

  if (VAR_6) {

   FUNC_3(VAR_7, VAR_2, 0x80);
  }


  FUNC_3(VAR_7, VAR_0, VAR_10 | 0x80);


  VAR_9 = FUNC_2(VAR_7, VAR_1[1]);
  FUNC_3(VAR_7, VAR_1[1], VAR_9 & 0xef);

  if (VAR_5) {

   VAR_9 = FUNC_2(VAR_7, VAR_3);
   if (VAR_9 & 1) {
    FUNC_3(VAR_7, VAR_3,
     VAR_9 & 0xfe);
   }

   VAR_9 = FUNC_2(VAR_7, VAR_4);
   if (VAR_9 & 1) {
    FUNC_3(VAR_7, VAR_4,
     VAR_9 & 0xfe);
   }


   VAR_9 = FUNC_2(VAR_7, VAR_2) & 0xf7;
   FUNC_3(VAR_7, VAR_2, VAR_9 | 0x01);
  }
 }

 VAR_8->vrm = FUNC_1();
}
