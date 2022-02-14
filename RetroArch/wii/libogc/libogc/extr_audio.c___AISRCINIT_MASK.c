
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef int u32 ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int* VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;

__attribute__((used)) static void FUNC_2()
{
 int VAR_11 = 0;
 u32 VAR_12;
 u64 VAR_13, VAR_14, VAR_15;
 u64 VAR_16 = 0;

 while (!VAR_11) {
  VAR_5[VAR_1] |= VAR_4;
  VAR_5[VAR_1] &= ~VAR_0;
  VAR_5[VAR_1] |= VAR_2;





  VAR_12 = VAR_5[VAR_3] & 0x7fffffff;
  while (VAR_12 == (VAR_5[VAR_3] & 0x7fffffff)) {}


  VAR_13 = FUNC_1();

  VAR_5[VAR_1] |= VAR_0;
  VAR_5[VAR_1] |= VAR_2;





  VAR_12 = VAR_5[VAR_3] & 0x7fffffff;
  while (VAR_12 == (VAR_5[VAR_3] & 0x7fffffff)) {}


  VAR_14 = FUNC_1();
  VAR_15 = VAR_14 - VAR_13;

  VAR_5[VAR_1] &= ~VAR_0;
  VAR_5[VAR_1] &= ~VAR_2;

  if ((VAR_15 > (VAR_6 - VAR_8)) &&
   (VAR_15 < (VAR_6 + VAR_8))) {
   if (VAR_15 < (VAR_7 - VAR_8)) {
    VAR_16 = VAR_9;
    VAR_11 = 1;
   }
  } else {
   VAR_16 = VAR_10;
   VAR_11 = 1;
  }
 }

 while (FUNC_0(VAR_14, FUNC_1()) < VAR_16) {}
}
