
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned short* VAR_5 ;
 int VAR_6 ;
 unsigned int VAR_7 ;

__attribute__((used)) static void FUNC_0(void)
{
 int VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
 unsigned short *VAR_14 = VAR_5;

 VAR_10 = VAR_1 - 3;
 if (VAR_10 < 0)
  VAR_10 = 0;
 VAR_11 = VAR_2 + 2;
 if (VAR_11 > VAR_6 - 1)
  VAR_11 = VAR_6 - 1;

 VAR_9 = VAR_3 - 3;
 if (VAR_9 < 0)
  VAR_9 = 0;
 VAR_12 = VAR_0 + 2;
 if (VAR_12 > VAR_4 - 1)
  VAR_12 = VAR_4 - 1;

 for (VAR_8 = VAR_10; VAR_8 <= VAR_11; VAR_8++)
  VAR_14[VAR_9 * VAR_6 + VAR_8] = 0xa514;
 for (VAR_9++; VAR_9 < VAR_12; VAR_9++)
 {
  VAR_13 = VAR_9 * VAR_6;
  VAR_14[VAR_13 + VAR_10] = 0xffff;
  for (VAR_8 = VAR_10 + 1; VAR_8 < VAR_11; VAR_8++)
  {
   unsigned int VAR_15 = VAR_14[VAR_13 + VAR_8];
   if (VAR_15 != VAR_7)
    VAR_14[VAR_13 + VAR_8] = ((VAR_15&0xf79e)>>1) - ((VAR_15&0xc618)>>3);
  }
  VAR_14[VAR_13 + VAR_11] = 0xffff;
 }
 VAR_13 = VAR_9 * VAR_6;
 for (VAR_8 = VAR_10; VAR_8 <= VAR_11; VAR_8++)
  VAR_14[VAR_13 + VAR_8] = 0xffff;
}
