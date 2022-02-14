
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int,char*,int,int ) ;

__attribute__((used)) static u32 FUNC_2(u32 VAR_3)
{
  if ((VAR_3 & 0x00e0) == 0x0000)
    return FUNC_0(VAR_3);

  FUNC_1(VAR_1|VAR_0, "68k bad read [%06x] @%06x", VAR_3, VAR_2);
  return 0;
}
