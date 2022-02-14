
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;


 int* VAR_0 ;
 int* VAR_1 ;

UINT FUNC_0(UINT VAR_2)
{
 UINT VAR_3;
 UINT VAR_4;
 UINT VAR_5, VAR_6;

 VAR_3 = (VAR_2 % 256);
 VAR_4 = ((VAR_2 >> 8) % 256);

 VAR_5 = VAR_0[VAR_3] + (VAR_1[VAR_3] * 256);
 VAR_6 = VAR_1[VAR_4] + (VAR_0[VAR_4] * 256);

 return (VAR_5 ^ VAR_6);
}
