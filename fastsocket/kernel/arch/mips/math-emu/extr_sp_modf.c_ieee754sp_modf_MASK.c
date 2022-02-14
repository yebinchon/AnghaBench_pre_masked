
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ieee754sp ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;






 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,scalar_t__,scalar_t__) ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;

ieee754sp FUNC_2(ieee754sp VAR_10, ieee754sp * VAR_11)
{
 VAR_1;

 VAR_0;

 VAR_2;

 switch (VAR_6) {
 case 129:
 case 130:
 case 132:
 case 128:
  *VAR_11 = VAR_10;
  return VAR_10;
 case 133:

  *VAR_11 = FUNC_1(VAR_9);
  return VAR_10;
 case 131:
  break;
 }
 if (VAR_7 < 0) {
  *VAR_11 = FUNC_1(VAR_9);
  return VAR_10;
 }
 if (VAR_7 >= VAR_5) {
  *VAR_11 = VAR_10;
  return FUNC_1(VAR_9);
 }


 *VAR_11 = FUNC_0(VAR_9, VAR_7 + VAR_3,
        ((VAR_8 >> (VAR_5 - VAR_7)) << (VAR_5 - VAR_7)) &
        ~VAR_4);




 VAR_8 = (VAR_8 << (32 - (VAR_5 - VAR_7))) >> (32 - (VAR_5 - VAR_7));
 if (VAR_8 == 0)
  return FUNC_1(VAR_9);

 while ((VAR_8 >> VAR_5) == 0) {
  VAR_8 <<= 1;
  VAR_7--;
 }
 return FUNC_0(VAR_9, VAR_7 + VAR_3, VAR_8 & ~VAR_4);
}
