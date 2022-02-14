
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int* VAR_0 ;

__attribute__((used)) static int FUNC_0(void)
{
 int VAR_1;
 VAR_1 = VAR_0[0x1198>>1] & 0xff;
 if (VAR_1 == 0xFD) VAR_1 = 0xFA;
 if (VAR_1 == 0xF7) VAR_1 = 0xEB;
 if (VAR_1 == 0xDF) VAR_1 = 0xAF;
 if (VAR_1 == 0x7F) VAR_1 = 0xBE;
 VAR_1 |= VAR_0[0x1184>>1] & 0xFF00;
 VAR_1 |= VAR_0[0x1186>>1] << 16;
 VAR_1 = ~VAR_1 & 0x08c0ff55;

 return VAR_1;
}
