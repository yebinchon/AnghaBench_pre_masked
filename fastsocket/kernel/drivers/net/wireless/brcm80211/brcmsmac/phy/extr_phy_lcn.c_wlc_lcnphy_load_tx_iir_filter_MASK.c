
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct brcms_phy {int dummy; } ;
typedef scalar_t__ s16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__** VAR_3 ;
 scalar_t__** VAR_4 ;
 int FUNC_0 (struct brcms_phy*,int,scalar_t__) ;

__attribute__((used)) static int
FUNC_1(struct brcms_phy *VAR_5, bool VAR_6, s16 VAR_7)
{
 s16 VAR_8 = -1;
 int VAR_9;

 u16 VAR_10[] = {
  0x910,
  0x91e,
  0x91f,
  0x924,
  0x925,
  0x926,
  0x920,
  0x921,
  0x927,
  0x928,
  0x929,
  0x922,
  0x923,
  0x930,
  0x931,
  0x932
 };

 u16 VAR_11[] = {
  0x90f,
  0x900,
  0x901,
  0x906,
  0x907,
  0x908,
  0x902,
  0x903,
  0x909,
  0x90a,
  0x90b,
  0x904,
  0x905,
  0x90c,
  0x90d,
  0x90e
 };

 if (!VAR_6) {
  for (VAR_9 = 0; VAR_9 < VAR_1; VAR_9++) {
   if (VAR_7 == VAR_3[VAR_9][0]) {
    VAR_8 = (s16) VAR_9;
    break;
   }
  }

  if (VAR_8 != -1) {
   for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++)
    FUNC_0(VAR_5, VAR_10[VAR_9],
           VAR_3
           [VAR_8][VAR_9 + 1]);
  }
 } else {
  for (VAR_9 = 0; VAR_9 < VAR_2; VAR_9++) {
   if (VAR_7 == VAR_4[VAR_9][0]) {
    VAR_8 = (s16) VAR_9;
    break;
   }
  }

  if (VAR_8 != -1) {
   for (VAR_9 = 0; VAR_9 < VAR_0; VAR_9++)
    FUNC_0(VAR_5, VAR_11[VAR_9],
           VAR_4
           [VAR_8][VAR_9 + 1]);
  }
 }

 return (VAR_8 != -1) ? 0 : -1;
}
