
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char*,int) ;
 int* VAR_0 ;

__attribute__((used)) static int FUNC_1(unsigned char *VAR_1, int VAR_2)
{
 int VAR_3, VAR_4 = 0;
 int VAR_5;

 while (1)
 {
  VAR_3 = FUNC_0(VAR_1 + VAR_4, VAR_2 - VAR_4);
  if (VAR_3 < 0)
   return -2;
  VAR_4 += VAR_3;
  if (VAR_2 - VAR_4 < 4)
   return -3;



  VAR_5 = VAR_0[VAR_1[VAR_4 + 2] >> 4];
  if (VAR_5 > 0)
   return VAR_5;
 }

 return -2;
}
