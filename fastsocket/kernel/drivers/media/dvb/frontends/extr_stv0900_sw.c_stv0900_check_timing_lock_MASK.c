
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct stv0900_internal {int dummy; } ;
typedef int s32 ;
typedef enum fe_stv0900_demod_num { ____Placeholder_fe_stv0900_demod_num } fe_stv0900_demod_num ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct stv0900_internal*,int ) ;
 int FUNC_2 (struct stv0900_internal*,int ) ;
 int FUNC_3 (struct stv0900_internal*,int ,int ) ;
 int FUNC_4 (struct stv0900_internal*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct stv0900_internal *VAR_13,
    enum fe_stv0900_demod_num VAR_14)
{
 int VAR_15 = VAR_6;
 s32 VAR_16,
  VAR_17 = 0;
 u8 VAR_18,
  VAR_19,
  VAR_20;

 VAR_18 = FUNC_2(VAR_13, VAR_1);
 VAR_19 = FUNC_2(VAR_13, VAR_11);
 VAR_20 = FUNC_2(VAR_13, VAR_10);
 FUNC_4(VAR_13, VAR_11, 0x20);
 FUNC_4(VAR_13, VAR_10, 0x0);
 FUNC_3(VAR_13, VAR_4, 0);
 FUNC_4(VAR_13, VAR_7, 0x80);
 FUNC_4(VAR_13, VAR_8, 0x40);
 FUNC_4(VAR_13, VAR_1, 0x0);
 FUNC_4(VAR_13, VAR_3, 0x0);
 FUNC_4(VAR_13, VAR_2, 0x0);
 FUNC_4(VAR_13, VAR_0, 0x65);
 FUNC_4(VAR_13, VAR_5, 0x18);
 FUNC_0(7);

 for (VAR_16 = 0; VAR_16 < 10; VAR_16++) {
  if (FUNC_1(VAR_13, VAR_9) >= 2)
   VAR_17++;

  FUNC_0(1);
 }

 if (VAR_17 >= 3)
  VAR_15 = VAR_12;

 FUNC_4(VAR_13, VAR_0, 0x38);
 FUNC_4(VAR_13, VAR_7, 0x88);
 FUNC_4(VAR_13, VAR_8, 0x68);
 FUNC_4(VAR_13, VAR_1, VAR_18);
 FUNC_4(VAR_13, VAR_11, VAR_19);
 FUNC_4(VAR_13, VAR_10, VAR_20);

 return VAR_15;
}
