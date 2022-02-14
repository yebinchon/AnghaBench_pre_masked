
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int** VAR_8 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(u64 VAR_9, unsigned int VAR_10, u64 VAR_11[])
{
 int VAR_12, VAR_13, VAR_14;
 unsigned int VAR_15, VAR_16;
 unsigned int VAR_17 = 1;
 u64 VAR_18;

 VAR_11[0] = VAR_9;
 VAR_14 = FUNC_1(VAR_9);


 VAR_12 = FUNC_0(VAR_9);
 if (VAR_12 >= 0) {

  for (VAR_13 = 0; VAR_13 < VAR_0; ++VAR_13) {
   VAR_18 = VAR_8[VAR_12][VAR_13];
   if (!VAR_18)
    break;
   if (VAR_18 != VAR_9)
    VAR_11[VAR_17++] = VAR_18;
   VAR_14 += FUNC_1(VAR_18);
  }

 } else {


  VAR_15 = VAR_9 & (VAR_1 & ~1);
  VAR_16 = (VAR_9 >> VAR_4) & VAR_2;
  if (VAR_16 && (VAR_15 == 0x32 || VAR_15 == 0x34))
   VAR_11[VAR_17++] = ((VAR_9 ^ 0x6) & ~VAR_3) |
    ((5 - VAR_16) << VAR_4);


  if (VAR_16 && (VAR_15 == 0x38 || VAR_15 == 0x3a))
   VAR_11[VAR_17++] = ((VAR_9 ^ 0x2) & ~VAR_3) |
    ((VAR_16 > 2? VAR_16 - 2: VAR_16 + 2) << VAR_4);
 }

 if (VAR_10 & VAR_7) {
  VAR_13 = VAR_17;
  for (VAR_12 = 0; VAR_12 < VAR_17; ++VAR_12) {
   switch (VAR_11[VAR_12]) {
   case 0x1e:
    VAR_11[VAR_13++] = 0x600005;
    ++VAR_14;
    break;
   case 0x10000a:
    VAR_11[VAR_13++] = 0x1e;
    break;
   case 2:
    VAR_11[VAR_13++] = 0x500009;
    ++VAR_14;
    break;
   case 0x500009:
    VAR_11[VAR_13++] = 2;
    break;
   case 0x10000e:
    VAR_11[VAR_13++] = 0x4000f4;
    break;
   case 0x4000f4:
    VAR_11[VAR_13++] = 0x10000e;
    break;
   }
  }
  VAR_17 = VAR_13;
 }

 if (!(VAR_10 & VAR_5) && VAR_14) {

  VAR_13 = 0;
  for (VAR_12 = 0; VAR_12 < VAR_17; ++VAR_12) {
   if (!FUNC_1(VAR_11[VAR_12])) {
    VAR_11[VAR_13] = VAR_11[VAR_12];
    ++VAR_13;
   }
  }
  VAR_17 = VAR_13;
 } else if ((VAR_10 & VAR_6) && VAR_14 < VAR_17) {

  VAR_13 = 0;
  for (VAR_12 = 0; VAR_12 < VAR_17; ++VAR_12) {
   if (FUNC_1(VAR_11[VAR_12])) {
    VAR_11[VAR_13] = VAR_11[VAR_12];
    ++VAR_13;
   }
  }
  VAR_17 = VAR_13;
 }

 return VAR_17;
}
