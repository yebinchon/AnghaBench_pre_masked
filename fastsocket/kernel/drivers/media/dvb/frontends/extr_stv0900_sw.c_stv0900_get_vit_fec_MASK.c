
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stv0900_internal {int dummy; } ;
typedef int s32 ;
typedef enum fe_stv0900_fec { ____Placeholder_fe_stv0900_fec } fe_stv0900_fec ;
typedef enum fe_stv0900_demod_num { ____Placeholder_fe_stv0900_demod_num } fe_stv0900_demod_num ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct stv0900_internal*,int ) ;

__attribute__((used)) static enum fe_stv0900_fec FUNC_1(struct stv0900_internal *VAR_8,
      enum fe_stv0900_demod_num VAR_9)
{
 enum fe_stv0900_fec VAR_10;
 s32 VAR_11 = FUNC_0(VAR_8, VAR_7);

 switch (VAR_11) {
 case 13:
  VAR_10 = VAR_0;
  break;
 case 18:
  VAR_10 = VAR_1;
  break;
 case 21:
  VAR_10 = VAR_2;
  break;
 case 24:
  VAR_10 = VAR_3;
  break;
 case 25:
  VAR_10 = VAR_4;
  break;
 case 26:
  VAR_10 = VAR_5;
  break;
 default:
  VAR_10 = VAR_6;
  break;
 }

 return VAR_10;
}
