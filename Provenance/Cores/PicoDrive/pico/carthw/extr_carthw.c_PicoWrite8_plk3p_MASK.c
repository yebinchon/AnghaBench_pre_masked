
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int,int,int ) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_1(u32 VAR_4, u32 VAR_5)
{
  FUNC_0(VAR_0, "prot w8  [%06x]   %02x @%06x", VAR_4, VAR_5 & 0xff, VAR_1);
  if (VAR_4 & 2)
    VAR_2 = VAR_5;
  else
    VAR_3 = VAR_5;
}
