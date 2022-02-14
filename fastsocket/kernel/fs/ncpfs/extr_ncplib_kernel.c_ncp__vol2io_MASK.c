
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (unsigned char*,unsigned char const*,unsigned int) ;
 unsigned char FUNC_1 (unsigned char const) ;

int
FUNC_2(unsigned char *VAR_1, unsigned int *VAR_2,
  const unsigned char *VAR_3, unsigned int VAR_4, int VAR_5)
{
 int VAR_6;

 if (*VAR_2 <= VAR_4)
  return -VAR_0;

 if (VAR_5)
  for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
   *VAR_1 = FUNC_1(*VAR_3);
   VAR_1++;
   VAR_3++;
  }
 else {
  FUNC_0(VAR_1, VAR_3, VAR_4);
  VAR_1 += VAR_4;
 }

 *VAR_2 = VAR_4;
 *VAR_1 = 0;
 return 0;
}
