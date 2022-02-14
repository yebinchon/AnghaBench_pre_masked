
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 short* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void FUNC_0 (int*,short*,int) ;
 void FUNC_1 (int*,short*,int) ;
 void FUNC_2 (int*,short*,int) ;
 int * VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (int *,scalar_t__*,scalar_t__) ;

void FUNC_4(int *VAR_7, int VAR_8, int VAR_9)
{
 int VAR_10, VAR_11 = 0;
 void (*VAR_12)(int *VAR_13, short *VAR_14, int VAR_15) = FUNC_0;

 if (VAR_4 == ((void*)0) || VAR_6 >= VAR_5)
  return;

 if (!VAR_3)
  return;

 VAR_10 = VAR_8;
 if (VAR_0 <= 11025 + 100) {
  VAR_12 = FUNC_2;
  VAR_10 <<= 2; VAR_11 = 2;
 }
 else if (VAR_0 <= 22050 + 100) {
  VAR_12 = FUNC_1;
  VAR_10 <<= 1; VAR_11 = 1;
 }

 if (1152 - VAR_2 >= VAR_10) {
  VAR_12(VAR_7, VAR_1 + VAR_2 * 2,
   VAR_8 * 2);

  VAR_2 += VAR_10;
 } else {
  int VAR_16, VAR_17 = 1152 - VAR_2;

  if (VAR_17 > 0)
   VAR_12(VAR_7, VAR_1 + VAR_2 * 2,
    (VAR_17 >> VAR_11) * 2);

  VAR_16 = FUNC_3(VAR_4, &VAR_6,
   VAR_5);
  if (VAR_16 == 0) {
   VAR_2 = VAR_10 - VAR_17;
   VAR_12(VAR_7 + (VAR_17 >> VAR_11) * 2,
    VAR_1,
    (VAR_2 >> VAR_11) * 2);
  } else
   VAR_2 = 0;
 }
}
