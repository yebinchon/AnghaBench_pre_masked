
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct hfsplus_unistr {int * unicode; int const length; } ;
typedef int hfsplus_unichr ;


 scalar_t__ FUNC_0 (int const) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

int FUNC_2(const struct hfsplus_unistr *VAR_0,
         const struct hfsplus_unistr *VAR_1)
{
 u16 VAR_2, VAR_3, VAR_4, VAR_5;
 const hfsplus_unichr *VAR_6, *VAR_7;

 VAR_2 = FUNC_0(VAR_0->length);
 VAR_3 = FUNC_0(VAR_1->length);
 VAR_6 = VAR_0->unicode;
 VAR_7 = VAR_1->unicode;

 while (1) {
  VAR_4 = VAR_5 = 0;

  while (VAR_2 && !VAR_4) {
   VAR_4 = FUNC_1(FUNC_0(*VAR_6));
   VAR_6++;
   VAR_2--;
  }
  while (VAR_3 && !VAR_5) {
   VAR_5 = FUNC_1(FUNC_0(*VAR_7));
   VAR_7++;
   VAR_3--;
  }

  if (VAR_4 != VAR_5)
   return (VAR_4 < VAR_5) ? -1 : 1;
  if (!VAR_4 && !VAR_5)
   return 0;
 }
}
