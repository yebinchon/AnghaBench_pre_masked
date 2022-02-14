
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 long FUNC_0 (int) ;
 unsigned long FUNC_1 (int) ;
 unsigned long FUNC_2 (int) ;



 int FUNC_3 (char*,int ) ;
 int VAR_2 ;

long FUNC_4 (int VAR_3, int VAR_4, int VAR_5, int VAR_6)
{
 unsigned long VAR_7;

 switch (VAR_3) {
 case 128:
  if (VAR_4) {
   VAR_7 = (67667L * (31L + 10L * FUNC_0 (VAR_6))) / 1000L;
   return (64060L + (2 * VAR_1) + VAR_0 + VAR_7);
  } else {
   VAR_7 = (66700L * (31L + 10L * FUNC_0 (VAR_6))) / 1000L;
   return (64107L + (2 * VAR_1) + VAR_0 + VAR_7);
  }
 case 130:
  if (VAR_5) {
   VAR_7 = (8354L * (31L + 10L * FUNC_0 (VAR_6))) / 1000L;
   return (((VAR_4) ? 7268L : 6265L) + VAR_0 + VAR_7);
  } else {
   VAR_7 = (8354L * (31L + 10L * FUNC_0 (VAR_6))) / 1000L;
   return (9107L + VAR_0 + VAR_7);
  }
 case 129:

  if (VAR_5)
   VAR_7 = FUNC_2 (VAR_6);
  else
   VAR_7 = FUNC_1 (VAR_6);
  return VAR_7;
 default:
  FUNC_3 ("%s: bogus device speed!\n", VAR_2);
  return -1;
 }
}
