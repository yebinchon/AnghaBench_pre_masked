
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int* VAR_1 ;
 int FUNC_0 () ;

__attribute__((used)) static unsigned char FUNC_1(char *VAR_2)
{
 u32 VAR_3;
 char *VAR_4;
 int VAR_5;
 unsigned char VAR_6 = 0;

 if (!VAR_0) {
  FUNC_0();
  VAR_0 = 1;
 }

 VAR_3 = 0xFFFFFFFF;
 for (VAR_5 = 0, VAR_4 = VAR_2; VAR_5 < 6; ++VAR_4, ++VAR_5)
  VAR_3 = (VAR_3 >> 8) ^ VAR_1[(VAR_3 ^ *VAR_4) & 0xFF];


 for (VAR_5 = 1; VAR_5 < 9; VAR_5++)
  VAR_6 |= (((VAR_3 >> VAR_5) & 1) << (8 - VAR_5));

 return VAR_6;
}
