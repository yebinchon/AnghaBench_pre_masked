
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static char* FUNC_0(char *VAR_0, unsigned VAR_1)
{


 unsigned VAR_2, VAR_3, VAR_4, VAR_5;
 VAR_4 = (VAR_1>>4) & 0xf;
 VAR_3 = (VAR_1>>8) & 0xf;
 VAR_2 = (VAR_1>>12);
 VAR_5 = 6*(VAR_2 + VAR_3 + VAR_4) + (VAR_1 & 0xf);
 VAR_1 = (VAR_5 * 0xcd) >> 11;
 VAR_5 = VAR_5 - 10*VAR_1;
 *VAR_0++ = VAR_5 + '0';
 VAR_4 = VAR_1 + 9*VAR_2 + 5*VAR_3 + VAR_4;
  VAR_1 = (VAR_4 * 0xcd) >> 11;
  VAR_4 = VAR_4 - 10*VAR_1;
  *VAR_0++ = VAR_4 + '0';

  VAR_3 = VAR_1 + 2*VAR_3;
   VAR_1 = (VAR_3 * 0xd) >> 7;
   VAR_3 = VAR_3 - 10*VAR_1;
   *VAR_0++ = VAR_3 + '0';

   VAR_2 = VAR_1 + 4*VAR_2;
    VAR_1 = (VAR_2 * 0xcd) >> 11;

    VAR_2 = VAR_2 - 10*VAR_1;
    *VAR_0++ = VAR_2 + '0';
     *VAR_0++ = VAR_1 + '0';
 return VAR_0;
}
