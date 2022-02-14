
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int,int,int ) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static void FUNC_2(u32 VAR_2, u32 VAR_3)
{
  FUNC_0(VAR_0, "m68k w8  [%06x]   %02x @%06x", VAR_2, VAR_3 & 0xff, VAR_1);

  VAR_2 &= 0xfffff;
  FUNC_1(VAR_2, VAR_3);
}
