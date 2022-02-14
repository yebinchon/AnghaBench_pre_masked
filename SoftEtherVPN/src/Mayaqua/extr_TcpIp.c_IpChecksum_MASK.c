
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int USHORT ;
typedef scalar_t__ UINT ;
typedef int UCHAR ;


 int FUNC_0 (int*,int ,int) ;

USHORT FUNC_1(void *VAR_0, UINT VAR_1)
{
 int VAR_2 = 0;
 USHORT *VAR_3 = (USHORT *)VAR_0;
 int VAR_4 = (int)VAR_1;
 USHORT *VAR_5 = VAR_3;
 int VAR_6 = VAR_4;
 USHORT VAR_7 = 0;

 while (VAR_6 > 1)
 {
  USHORT VAR_8 = 0;
  FUNC_0(&VAR_8, VAR_5++, sizeof(USHORT));
  VAR_2 += VAR_8;
  VAR_6 -= 2;
 }

 if (VAR_6 == 1)
 {
  *(UCHAR *)(&VAR_7) = *(UCHAR *)VAR_5;
  VAR_2 += VAR_7;
 }

 VAR_2 = (VAR_2 >> 16) + (VAR_2 & 0xffff);
 VAR_2 += (VAR_2 >> 16);

 VAR_7 = ~VAR_2;

 return VAR_7;
}
