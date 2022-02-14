
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int* VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (unsigned int*,int ,int) ;
 int FUNC_1 (short*,unsigned short*,int,int) ;

__attribute__((used)) static void FUNC_2(int VAR_6)
{
 unsigned short *VAR_7 = (void *)VAR_1;
 int VAR_8 = VAR_5, VAR_9 = VAR_4;
 short *VAR_10;
 int VAR_11, VAR_12;

 if (VAR_7 == ((void*)0)) {
  FUNC_0(VAR_0, 0, VAR_3 * VAR_2 * 2);
  return;
 }

 if (!VAR_6 && VAR_3 / VAR_8 >= 2 && VAR_2 / VAR_9 >= 2)
 {
  unsigned int VAR_13, *VAR_14 = VAR_0;
  VAR_14 += (VAR_2 / 2 - VAR_9 * 2 / 2)
   * VAR_3 / 2;
  VAR_14 += (VAR_3 / 2 - VAR_8 * 2 / 2) / 2;
  for (VAR_12 = 0; VAR_12 < VAR_9; VAR_12++, VAR_7 += VAR_8, VAR_14 += VAR_3*2/2) {
   for (VAR_11 = 0; VAR_11 < VAR_8; VAR_11++) {
    VAR_13 = VAR_7[VAR_11];
    VAR_13 = ((VAR_13 & 0xf79e)>>1) - ((VAR_13 & 0xc618)>>3);
    VAR_13 |= VAR_13 << 16;
    VAR_14[VAR_11] = VAR_14[VAR_11 + VAR_3 / 2] = VAR_13;
   }
  }
  return;
 }

 if (VAR_8 > VAR_3)
  VAR_8 = VAR_3;
 if (VAR_9 > VAR_2)
  VAR_9 = VAR_2;
 VAR_10 = (short *)VAR_0 +
  (VAR_2 / 2 - VAR_9 / 2) * VAR_3 +
  (VAR_3 / 2 - VAR_8 / 2);


 for (; VAR_9 > 0; VAR_10 += VAR_3, VAR_7 += VAR_5, VAR_9--)
  FUNC_1(VAR_10, VAR_7, VAR_8, 1);
}
