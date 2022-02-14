
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int,int) ;

__attribute__((used)) static int FUNC_1(int VAR_0, int VAR_1, int VAR_2, int* VAR_3, int* VAR_4, unsigned char* VAR_5)
{
 int VAR_6 = VAR_2 - VAR_1;
 int VAR_7 = *VAR_4 - *VAR_3 + 1;
 int VAR_8 = FUNC_0(VAR_7, VAR_0, VAR_6);
 int VAR_9 = VAR_8 - VAR_7;


 if (VAR_8 > VAR_6 || VAR_8 < VAR_0)
  return -1;


 *VAR_5 = (64*VAR_0) / VAR_8;
 if (*VAR_5 == 64)
  *VAR_5 = 0x00;
 else
  *VAR_5 |= 0x80;


 *VAR_3 -= VAR_9 / 2;
 *VAR_4 += VAR_9 - (VAR_9 / 2);


 if (*VAR_3 < VAR_1) {
  *VAR_4 += VAR_1 - *VAR_3;
  *VAR_3 += VAR_1 - *VAR_3;
 }
 if (*VAR_4 > VAR_2) {
  *VAR_3 -= *VAR_4 - VAR_2;
  *VAR_4 -= *VAR_4 - VAR_2;
 }

 return 0;
}
