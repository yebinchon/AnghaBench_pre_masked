
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u16 ;






__attribute__((used)) static unsigned int FUNC_0(u16 VAR_0, int VAR_1, int VAR_2)
{
 unsigned int VAR_3 = VAR_0;

 if (VAR_1 == 0)
  return VAR_0;

 switch (VAR_0) {
 case 128:

  if (VAR_2 / VAR_1 > 8000)
   VAR_3 = 130;
  else if ((VAR_1 < 5) && (VAR_2 > 512))
   VAR_3 = 129;
  break;
 case 129:
  if (VAR_2 > 10000) {

   if (VAR_2 / VAR_1 > 8000)
    VAR_3 = 130;
   else if ((VAR_1 < 10) || ((VAR_2 / VAR_1) > 1200))
    VAR_3 = 130;
   else if ((VAR_1 > 35))
    VAR_3 = 128;
  } else if (VAR_2 / VAR_1 > 2000) {
   VAR_3 = 130;
  } else if (VAR_1 <= 2 && VAR_2 < 512) {
   VAR_3 = 128;
  }
  break;
 case 130:
  if (VAR_2 > 25000) {
   if (VAR_1 > 35)
    VAR_3 = 129;
  } else if (VAR_2 < 6000) {
   VAR_3 = 129;
  }
  break;
 }

 return VAR_3;
}
