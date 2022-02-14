
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 void FUNC_0 (int*,short*,int) ;
 void FUNC_1 (int*,short*,int) ;
 void FUNC_2 (int*,short*,int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 short** VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

void FUNC_6(int *VAR_12, int VAR_13, int VAR_14)
{
 int VAR_15;


 if (VAR_2 < 0 || VAR_7 >= VAR_8) return;

 VAR_15 = VAR_13;
 if (VAR_0 == 22050) VAR_15 <<= 1;
 else if (VAR_0 == 11025) VAR_15 <<= 2;


 if (VAR_3 && VAR_6 < VAR_15)
 {
  FUNC_3(VAR_9);
  FUNC_4(VAR_9);
  VAR_3 = 0;
  VAR_6 += 1152;
 }


 if (VAR_6 >= VAR_15)
 {
  int VAR_16 = 0;
  void (*VAR_17)(int *VAR_18, short *VAR_19, int VAR_20) = FUNC_0;
  if (VAR_0 == 22050) { VAR_17 = FUNC_1; VAR_16 = 1; }
  else if (VAR_0 == 11025) { VAR_17 = FUNC_2; VAR_16 = 2; }

  if (1152 - VAR_1 >= VAR_15) {
   VAR_17(VAR_12, VAR_4[VAR_5] + VAR_1*2, VAR_13<<1);

   VAR_1 += VAR_15;
  } else {

   int VAR_21 = 1152 - VAR_1;
   if (VAR_5 == 0)
   {
    VAR_17(VAR_12, VAR_4[0] + VAR_1*2, VAR_13<<1);
    VAR_1 = VAR_15 - VAR_21;
    VAR_5 = 1;
   } else {
    VAR_17(VAR_12, VAR_4[1] + VAR_1*2, (VAR_21>>VAR_16)<<1);
    VAR_1 = VAR_15 - VAR_21;
    VAR_17(VAR_12 + ((VAR_21>>VAR_16)<<1),
     VAR_4[0], (VAR_1>>VAR_16)<<1);
    VAR_5 = 0;
   }
  }
  VAR_6 -= VAR_15;
 }


 if (!VAR_3)
 {
  VAR_3 = 1;
  VAR_11 ^= 1;


  FUNC_3(VAR_9);
  FUNC_4(VAR_9);
  FUNC_4(VAR_10);
  FUNC_5(1);
 }
}
