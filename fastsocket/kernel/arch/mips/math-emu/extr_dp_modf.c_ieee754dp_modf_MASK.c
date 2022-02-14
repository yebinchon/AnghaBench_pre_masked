
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ieee754dp ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;






 int FUNC_0 (int ,scalar_t__,scalar_t__) ;
 int FUNC_1 (int ) ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;

ieee754dp FUNC_2(ieee754dp VAR_10, ieee754dp * VAR_11)
{
 VAR_1;

 VAR_0;

 VAR_5;

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
 if (VAR_7 >= VAR_4) {
  *VAR_11 = VAR_10;
  return FUNC_1(VAR_9);
 }


 *VAR_11 = FUNC_0(VAR_9, VAR_7 + VAR_2,
        ((VAR_8 >> (VAR_4 - VAR_7)) << (VAR_4 - VAR_7)) &
        ~VAR_3);




 VAR_8 = (VAR_8 << (64 - (VAR_4 - VAR_7))) >> (64 - (VAR_4 - VAR_7));
 if (VAR_8 == 0)
  return FUNC_1(VAR_9);

 while ((VAR_8 >> VAR_4) == 0) {
  VAR_8 <<= 1;
  VAR_7--;
 }
 return FUNC_0(VAR_9, VAR_7 + VAR_2, VAR_8 & ~VAR_3);
}
