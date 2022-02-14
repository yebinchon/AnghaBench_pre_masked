
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;
 int VAR_1 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ,char*,int,int,int ) ;

__attribute__((used)) static void FUNC_3(u32 VAR_2, u32 VAR_3)
{
  if ((VAR_2 & 0xffff00) != 0xa13000) {
    FUNC_0(VAR_2, VAR_3);
    return;
  }

  FUNC_2(VAR_0, "pier w16 [%06x] %04x @%06x", VAR_2, VAR_3 & 0xffff, VAR_1);
  FUNC_1(VAR_2 + 1, VAR_3);
}
