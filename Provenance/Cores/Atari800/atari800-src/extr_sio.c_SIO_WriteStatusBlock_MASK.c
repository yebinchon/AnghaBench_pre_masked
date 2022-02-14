
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UBYTE ;


 int FUNC_0 (char*,int const,int const,int const,int const,int const,int const,int const,int const,int const,int const,int const,int const) ;
 scalar_t__ VAR_0 ;
 scalar_t__* VAR_1 ;
 int* VAR_2 ;
 int* VAR_3 ;

int FUNC_1(int VAR_4, const UBYTE *VAR_5)
{
 int VAR_6;






 if (VAR_1[VAR_4] == VAR_0)
  return 0;




 VAR_6 = VAR_5[6] * 256 + VAR_5[7];
 if (VAR_6 == 128 || VAR_6 == 256)
  VAR_3[VAR_4] = VAR_6;

 VAR_2[VAR_4] = VAR_5[0] * (VAR_5[2] * 256 + VAR_5[3]) * (VAR_5[4] + 1);
 if (VAR_2[VAR_4] < 1 || VAR_2[VAR_4] > 65535)
  VAR_2[VAR_4] = 720;
 return 'C';
}
