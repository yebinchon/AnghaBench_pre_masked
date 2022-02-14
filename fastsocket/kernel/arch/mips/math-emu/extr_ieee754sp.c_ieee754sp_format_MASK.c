
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ieee754sp ;
struct TYPE_2__ {int rm; int mx; scalar_t__ nod; } ;


 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int) ;
 int VAR_7 ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (int,scalar_t__,unsigned int) ;
 int FUNC_5 (int,unsigned int) ;
 TYPE_1__ VAR_8 ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;

ieee754sp FUNC_10(int VAR_9, int VAR_10, unsigned VAR_11)
{
 FUNC_3(VAR_11);

 FUNC_3((VAR_11 >> (VAR_7 + 1 + 3)) == 0);
 FUNC_3(VAR_11 & (VAR_6 << 3));

 if (VAR_10 < VAR_5) {

  int VAR_12 = VAR_5 - VAR_10;

  if (VAR_8.nod) {
   FUNC_0(VAR_2);
   FUNC_0(VAR_0);

   switch(VAR_8.rm) {
   case 130:
    return FUNC_9(VAR_9);
   case 128:
    return FUNC_9(VAR_9);
   case 129:
    if(VAR_9 == 0)
     return FUNC_8(0);
    else
     return FUNC_9(1);
   case 131:
    if(VAR_9 == 0)
     return FUNC_9(0);
    else
     return FUNC_8(1);
   }
  }

  if (VAR_10 == VAR_5 - 1
    && FUNC_5(VAR_9, VAR_11) >> (VAR_7 + 1 + 3))
  {

   FUNC_0(VAR_0);
   VAR_11 = FUNC_5(VAR_9, VAR_11);
   VAR_11 >>= 1;

   VAR_11 &= ~(FUNC_2(3) - 1);
   VAR_10++;
  }
  else {


   FUNC_1(VAR_12);
   FUNC_3((VAR_11 & (VAR_6 << 3)) == 0);
   FUNC_3(VAR_10 == VAR_5);
  }
 }
 if (VAR_11 & (FUNC_2(3) - 1)) {
  FUNC_0(VAR_0);
  if ((VAR_11 & (VAR_6 << 3)) == 0) {
   FUNC_0(VAR_2);
  }



  VAR_11 = FUNC_5(VAR_9, VAR_11);


  if (VAR_11 >> (VAR_7 + 1 + 3)) {

   VAR_11 >>= 1;
   VAR_10++;
  }
 }

 VAR_11 >>= 3;

 FUNC_3((VAR_11 >> (VAR_7 + 1)) == 0);
 FUNC_3(VAR_10 >= VAR_5);

 if (VAR_10 > VAR_4) {
  FUNC_0(VAR_1);
  FUNC_0(VAR_0);

  switch (VAR_8.rm) {
  case 130:
   return FUNC_6(VAR_9);
  case 128:
   return FUNC_7(VAR_9);
  case 129:
   if (VAR_9 == 0)
    return FUNC_6(0);
   else
    return FUNC_7(1);
  case 131:
   if (VAR_9 == 0)
    return FUNC_7(0);
   else
    return FUNC_6(1);
  }
 }


 if ((VAR_11 & VAR_6) == 0) {

  FUNC_3(VAR_10 == VAR_5);
  if (VAR_8.mx & VAR_2)
   FUNC_0(VAR_2);
  return FUNC_4(VAR_9, VAR_5 - 1 + VAR_3, VAR_11);
 } else {
  FUNC_3((VAR_11 >> (VAR_7 + 1)) == 0);
  FUNC_3(VAR_11 & VAR_6);

  return FUNC_4(VAR_9, VAR_10 + VAR_3, VAR_11 & ~VAR_6);
 }
}
