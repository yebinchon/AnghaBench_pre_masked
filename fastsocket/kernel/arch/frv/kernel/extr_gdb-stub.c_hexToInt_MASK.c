
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (char) ;

__attribute__((used)) static int FUNC_1(char **VAR_0, unsigned long *VAR_1)
{
 int VAR_2 = 0, VAR_3;

 *VAR_1 = 0;
 while (**VAR_0) {
  VAR_3 = FUNC_0(**VAR_0);
  if (VAR_3 < 0)
   break;

  *VAR_1 = (*VAR_1 << 4) | ((uint8_t) VAR_3 & 0xf);
  VAR_2++;

  (*VAR_0)++;
 }

 return VAR_2;
}
