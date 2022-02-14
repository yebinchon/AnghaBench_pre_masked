
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,char*,unsigned short) ;
 int FUNC_2 (int ,int) ;
 size_t VAR_2 ;
 unsigned short** VAR_3 ;

void FUNC_3(void)
{






  while (VAR_2 > 0)
  {
    unsigned short *VAR_4 = VAR_3[--VAR_2];
    if ((*VAR_4 & 0xfd00) == 0x7100)
      *VAR_4 &= 0xff, *VAR_4 |= 0x6600;
    else if ((*VAR_4 & 0xfd00) == 0x7500)
      *VAR_4 &= 0xff, *VAR_4 |= 0x6700;
    else if ((*VAR_4 & 0xfd00) == 0x7d00)
      *VAR_4 &= 0xff, *VAR_4 |= 0x6000;
    else
      FUNC_1(VAR_1|VAR_0, "idle: don't know how to restore %04x", *VAR_4);
  }
}
