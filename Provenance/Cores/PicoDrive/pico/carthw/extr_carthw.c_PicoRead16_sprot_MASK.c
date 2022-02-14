
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int* FUNC_1 (int,int ) ;
 int FUNC_2 (int ,char*,int,int,...) ;

__attribute__((used)) static u32 FUNC_3(u32 VAR_2)
{
  u16 *VAR_3;

  if (0xa10000 <= VAR_2 && VAR_2 < 0xa12000)
    return FUNC_0(VAR_2);

  VAR_3 = FUNC_1(VAR_2, 0);
  if (VAR_3 != ((void*)0)) {
    FUNC_2(VAR_0, "prot r16 [%06x] %04x @%06x", VAR_2, *VAR_3, VAR_1);
    return *VAR_3;
  }
  else {
    FUNC_2(VAR_0, "prot r16 [%06x] MISS @%06x", VAR_2, VAR_1);
    return 0;
  }
}
