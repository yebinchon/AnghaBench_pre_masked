
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stv0900_internal {int* srch_standard; int chip_id; } ;
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
 int FUNC_0 (int) ;
 int FUNC_1 (struct stv0900_internal*,int) ;
 int FUNC_2 (struct stv0900_internal*,int ) ;
 int FUNC_3 (struct stv0900_internal*,int*,int*,int*,int) ;
 int FUNC_4 (struct stv0900_internal*,int,int,int,int,int) ;
 int FUNC_5 (struct stv0900_internal*,int ,int) ;

__attribute__((used)) static int FUNC_6(struct stv0900_internal *VAR_8,
    enum fe_stv0900_demod_num VAR_9)
{
 int VAR_10 = VAR_3,
  VAR_11,
  VAR_12;
 s32 VAR_13,
  VAR_14,
  VAR_15,
  VAR_16,
  VAR_17;

 FUNC_3(VAR_8, &VAR_14, &VAR_15,
     &VAR_17, VAR_9);
 switch (VAR_8->srch_standard[VAR_9]) {
 case 129:
 case 130:
  if (VAR_8->chip_id >= 0x20)
   FUNC_5(VAR_8, VAR_0, 0x3b);
  else
   FUNC_5(VAR_8, VAR_0, 0xef);

  FUNC_5(VAR_8, VAR_2, 0x49);
  VAR_12 = VAR_3;
  break;
 case 128:
  if (VAR_8->chip_id >= 0x20)
   FUNC_5(VAR_8, VAR_1, 0x79);
  else
   FUNC_5(VAR_8, VAR_1, 0x68);

  FUNC_5(VAR_8, VAR_2, 0x89);

  VAR_12 = VAR_7;
  break;
 case 131:
 default:
  if (VAR_8->chip_id >= 0x20) {
   FUNC_5(VAR_8, VAR_0, 0x3b);
   FUNC_5(VAR_8, VAR_1, 0x79);
  } else {
   FUNC_5(VAR_8, VAR_0, 0xef);
   FUNC_5(VAR_8, VAR_1, 0x68);
  }

  FUNC_5(VAR_8, VAR_2, 0xc9);
  VAR_12 = VAR_3;
  break;
 }

 VAR_16 = 0;
 do {
  VAR_10 = FUNC_4(VAR_8,
      VAR_14,
      VAR_15,
      VAR_12,
      VAR_17,
      VAR_9);
  VAR_11 = FUNC_1(VAR_8, VAR_9);
  VAR_16++;
  if ((VAR_10 == VAR_7)
    || (VAR_11 == VAR_7)
    || (VAR_16 == 2)) {

   if (VAR_8->chip_id >= 0x20) {
    FUNC_5(VAR_8, VAR_0, 0x49);
    FUNC_5(VAR_8, VAR_1, 0x9e);
   } else {
    FUNC_5(VAR_8, VAR_0, 0xed);
    FUNC_5(VAR_8, VAR_1, 0x88);
   }

   if ((FUNC_2(VAR_8, VAR_5) ==
      VAR_6) &&
       (VAR_10 == VAR_7)) {
    FUNC_0(VAR_15);
    VAR_13 = FUNC_2(VAR_8, VAR_4);

    if (VAR_13 < 0xd) {
     FUNC_0(VAR_15);
     VAR_13 = FUNC_2(VAR_8,
        VAR_4);
    }

    if (VAR_13 < 0xd) {
     VAR_10 = VAR_3;

     if (VAR_16 < 2) {
      if (VAR_8->chip_id >= 0x20)
       FUNC_5(VAR_8,
        VAR_1,
        0x79);
      else
       FUNC_5(VAR_8,
        VAR_1,
        0x68);

      FUNC_5(VAR_8,
        VAR_2,
        0x89);
     }
    }
   }
  }

 } while ((VAR_10 == VAR_3)
  && (VAR_16 < 2)
  && (VAR_11 == VAR_3));

 return VAR_10;
}
