
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef scalar_t__ s64 ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__** VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static int FUNC_3(u64 VAR_5, unsigned int VAR_6, u64 VAR_7[])
{
 int VAR_8, VAR_9, VAR_10 = 1;
 int VAR_11;
 s64 VAR_12;

 VAR_7[0] = VAR_5;
 VAR_10 = 1;
 VAR_11 = FUNC_2(VAR_5);
 VAR_8 = FUNC_0(VAR_5);
 if (VAR_8 >= 0) {
  for (VAR_9 = 0; VAR_9 < VAR_0; ++VAR_9) {
   VAR_12 = VAR_4[VAR_8][VAR_9];
   if (VAR_12 && VAR_12 != VAR_5)
    VAR_7[VAR_10++] = VAR_12;
   VAR_11 += FUNC_2(VAR_12);
  }
 } else {
  VAR_12 = FUNC_1(VAR_5);
  if (VAR_12 > 0)
   VAR_7[VAR_10++] = VAR_12;
 }

 if (VAR_6 & VAR_3) {
  VAR_9 = VAR_10;
  for (VAR_8 = 0; VAR_8 < VAR_10; ++VAR_8) {
   switch (VAR_7[VAR_8]) {
   case 0xf:
    VAR_7[VAR_9++] = 0x600005;
    ++VAR_11;
    break;
   case 0x600005:
    VAR_7[VAR_9++] = 0xf;
    break;
   case 0x100009:
    VAR_7[VAR_9++] = 0x500009;
    ++VAR_11;
    break;
   case 0x500009:
    VAR_7[VAR_9++] = 0x100009;
    VAR_7[VAR_9++] = 0x200009;
    break;
   }
  }
  VAR_10 = VAR_9;
 }

 if (!(VAR_6 & VAR_1) && VAR_11) {

  VAR_9 = 0;
  for (VAR_8 = 0; VAR_8 < VAR_10; ++VAR_8) {
   if (!FUNC_2(VAR_7[VAR_8])) {
    VAR_7[VAR_9] = VAR_7[VAR_8];
    ++VAR_9;
   }
  }
  VAR_10 = VAR_9;
 } else if ((VAR_6 & VAR_2) && VAR_11 < VAR_10) {

  VAR_9 = 0;
  for (VAR_8 = 0; VAR_8 < VAR_10; ++VAR_8) {
   if (FUNC_2(VAR_7[VAR_8])) {
    VAR_7[VAR_9] = VAR_7[VAR_8];
    ++VAR_9;
   }
  }
  VAR_10 = VAR_9;
 }

 return VAR_10;
}
