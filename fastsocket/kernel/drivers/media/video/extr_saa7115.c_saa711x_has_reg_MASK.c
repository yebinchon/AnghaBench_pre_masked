
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int const VAR_0 ;
 int const VAR_1 ;




 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static int FUNC_1(const int VAR_2, const u8 VAR_3)
{
 if (VAR_2 == VAR_0)
  return VAR_3 < 0x20 && VAR_3 != 0x01 && VAR_3 != 0x0f &&
         (VAR_3 < 0x13 || VAR_3 > 0x19) && VAR_3 != 0x1d && VAR_3 != 0x1e;
 if (VAR_2 == VAR_1)
  return VAR_3 < 0x20 && VAR_3 != 0x01 && VAR_3 != 0x0f &&
         VAR_3 != 0x14 && VAR_3 != 0x18 && VAR_3 != 0x19 &&
         VAR_3 != 0x1d && VAR_3 != 0x1e;


 if (FUNC_0((VAR_3 >= 0x3b && VAR_3 <= 0x3f) || VAR_3 == 0x5c || VAR_3 == 0x5f ||
     VAR_3 == 0xa3 || VAR_3 == 0xa7 || VAR_3 == 0xab || VAR_3 == 0xaf || (VAR_3 >= 0xb5 && VAR_3 <= 0xb7) ||
     VAR_3 == 0xd3 || VAR_3 == 0xd7 || VAR_3 == 0xdb || VAR_3 == 0xdf || (VAR_3 >= 0xe5 && VAR_3 <= 0xe7) ||
     VAR_3 == 0x82 || (VAR_3 >= 0x89 && VAR_3 <= 0x8e)))
  return 0;

 switch (VAR_2) {
 case 131:
  return VAR_3 != 0x14 && (VAR_3 < 0x18 || VAR_3 > 0x1e) && (VAR_3 < 0x20 || VAR_3 > 0x3f) &&
         VAR_3 != 0x5d && VAR_3 < 0x63;
 case 130:
  return (VAR_3 < 0x1a || VAR_3 > 0x1e) && (VAR_3 < 0x20 || VAR_3 > 0x2f) &&
         (VAR_3 < 0x63 || VAR_3 > 0x7f) && VAR_3 != 0x33 && VAR_3 != 0x37 &&
         VAR_3 != 0x81 && VAR_3 < 0xf0;
 case 129:
  return (VAR_3 < 0x20 || VAR_3 > 0x2f) && VAR_3 != 0x65 && (VAR_3 < 0xfc || VAR_3 > 0xfe);
 case 128:
  return (VAR_3 < 0x1a || VAR_3 > 0x1d) && (VAR_3 < 0x20 || VAR_3 > 0x22) &&
         (VAR_3 < 0x26 || VAR_3 > 0x28) && VAR_3 != 0x33 && VAR_3 != 0x37 &&
         (VAR_3 < 0x63 || VAR_3 > 0x7f) && VAR_3 != 0x81 && VAR_3 < 0xf0;
 }
 return 1;
}
