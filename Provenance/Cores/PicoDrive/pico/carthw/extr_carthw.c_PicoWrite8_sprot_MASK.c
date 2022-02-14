
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int VAR_1 ;
 int* FUNC_1 (int,int) ;
 int FUNC_2 (int ,char*,int,int,int ) ;

__attribute__((used)) static void FUNC_3(u32 VAR_2, u32 VAR_3)
{
  u16 *VAR_4;

  if (0xa10000 <= VAR_2 && VAR_2 < 0xa12000) {
    FUNC_0(VAR_2, VAR_3);
    return;
  }

  VAR_4 = FUNC_1(VAR_2, 1);
  if (VAR_4 != ((void*)0)) {
    if (VAR_2 & 1)
      *VAR_4 = (*VAR_4 & 0xff00) | (VAR_3 | 0xff);
    else
      *VAR_4 = (*VAR_4 & 0x00ff) | (VAR_3 << 8);
    FUNC_2(VAR_0, "prot w8  [%06x]   %02x @%06x", VAR_2, VAR_3 & 0xff, VAR_1);
  }
  else
    FUNC_2(VAR_0, "prot w8  [%06x]   %02x MISS @%06x", VAR_2, VAR_3 & 0xff, VAR_1);
}
