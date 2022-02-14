
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int u32 ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int** VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int** VAR_6 ;

__attribute__((used)) static int FUNC_2(u64 VAR_7, unsigned long *VAR_8,
      unsigned long *VAR_9)
{
 int VAR_10, VAR_11;
 u32 VAR_12, VAR_13;
 int VAR_14, VAR_15;

 VAR_11 = FUNC_0(VAR_7);
 if (VAR_11 < 0)
  return -1;
 if (VAR_11 == 4) {
  VAR_10 = ((unsigned int)VAR_7 >> VAR_1) & VAR_0;
  VAR_12 = VAR_6[VAR_10 - 1][0];
  VAR_13 = VAR_6[VAR_10 - 1][1];
 } else {
  VAR_12 = VAR_5[VAR_11][0];
  VAR_13 = VAR_5[VAR_11][1];
 }

 VAR_15 = FUNC_1(VAR_7);
 if (VAR_15) {
  VAR_14 = ((unsigned int)VAR_7 >> VAR_3) & VAR_2;
  VAR_12 |= 0x3f << 24;
  VAR_13 |= VAR_14 << 24;
  if (VAR_15 == 2) {
   VAR_12 |= 0x40000000;
   if ((unsigned int)VAR_7 & VAR_4)
    VAR_13 |= 0x40000000;
  }
 }

 *VAR_8 = VAR_12;
 *VAR_9 = VAR_13;
 return 0;
}
