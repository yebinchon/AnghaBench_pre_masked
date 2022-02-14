
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT ;
typedef int UCHAR ;


 int* VAR_0 ;

UINT FUNC_0(void *VAR_1, UINT VAR_2, UINT VAR_3, UINT VAR_4)
{
 UINT VAR_5 = VAR_4;
 UINT VAR_6;

 for (VAR_6 = 0;VAR_6 < VAR_3;VAR_6++)
 {
  VAR_5 = (VAR_5 >> 8) ^ VAR_0[((UCHAR *)VAR_1)[VAR_2 + VAR_6] ^ (VAR_5 & 0xff)];
 }

 return VAR_5;
}
