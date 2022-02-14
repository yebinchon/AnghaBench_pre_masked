
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned char*,int) ;

void FUNC_1(unsigned char VAR_0[16])
{
 FUNC_0(VAR_0, 16);

 VAR_0[6] = (VAR_0[6] & 0x0F) | 0x40;

 VAR_0[8] = (VAR_0[8] & 0x3F) | 0x80;
}
