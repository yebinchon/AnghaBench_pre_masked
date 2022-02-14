
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int s64 ;
typedef int ieee754dp ;


 int VAR_0 ;
 int FUNC_0 (int,int,int,char*,int) ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;

ieee754dp FUNC_5(s64 VAR_2)
{
 u64 VAR_3;
 int VAR_4;
 int VAR_5;

 VAR_0;

 if (VAR_2 == 0)
  return FUNC_4(0);
 if (VAR_2 == 1 || VAR_2 == -1)
  return FUNC_2(VAR_2 < 0);
 if (VAR_2 == 10 || VAR_2 == -10)
  return FUNC_3(VAR_2 < 0);

 VAR_5 = (VAR_2 < 0);
 if (VAR_5) {
  if (VAR_2 == (1ULL << 63))
   VAR_3 = (1ULL << 63);
  else
   VAR_3 = -VAR_2;
 } else {
  VAR_3 = VAR_2;
 }


 VAR_4 = VAR_1 + 3;
 if (VAR_3 >> (VAR_1 + 1 + 3)) {

  while (VAR_3 >> (VAR_1 + 1 + 3)) {
   FUNC_1();
  }
 } else {

  while ((VAR_3 >> (VAR_1 + 3)) == 0) {
   VAR_3 <<= 1;
   VAR_4--;
  }
 }
 FUNC_0(VAR_5, VAR_4, VAR_3, "dp_flong", VAR_2);
}
