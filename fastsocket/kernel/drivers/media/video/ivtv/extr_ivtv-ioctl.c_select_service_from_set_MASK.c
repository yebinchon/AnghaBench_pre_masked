
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int,int) ;

__attribute__((used)) static u16 FUNC_1(int VAR_5, int VAR_6, u16 VAR_7, int VAR_8)
{
 u16 VAR_9 = (VAR_8 ? VAR_2 : VAR_1);
 int VAR_10;

 VAR_7 = VAR_7 & VAR_9;
 if (VAR_7 == 0 || !FUNC_0(VAR_5, VAR_6, VAR_8)) {
  return 0;
 }
 if (!VAR_8) {
  if (VAR_6 == 21 && (VAR_7 & VAR_0))
   return VAR_0;
 }
 else {
  if (VAR_6 == 16 && VAR_5 == 0 && (VAR_7 & VAR_3))
   return VAR_3;
  if (VAR_6 == 23 && VAR_5 == 0 && (VAR_7 & VAR_4))
   return VAR_4;
  if (VAR_6 == 23)
   return 0;
 }
 for (VAR_10 = 0; VAR_10 < 32; VAR_10++) {
  if ((1 << VAR_10) & VAR_7)
   return 1 << VAR_10;
 }
 return 0;
}
