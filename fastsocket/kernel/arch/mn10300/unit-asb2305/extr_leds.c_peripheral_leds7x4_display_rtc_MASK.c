
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (unsigned int,int ) ;

void FUNC_1(void)
{
 unsigned int VAR_2;
 u8 VAR_3, VAR_4;

 VAR_3 = VAR_0;
 VAR_4 = VAR_1;

 VAR_2 = ((VAR_3 & 0xf0) >> 4);
 VAR_2 *= 10;
 VAR_2 += (VAR_3 & 0x0f);
 VAR_2 *= 6;

 VAR_2 += ((VAR_4 & 0xf0) >> 4);
 VAR_2 *= 10;
 VAR_2 += (VAR_4 & 0x0f);

 FUNC_0(VAR_2, 0);
}
