
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct nouveau_bios {int dummy; } ;


 int FUNC_0 (struct nouveau_bios*,int*) ;
 int FUNC_1 (struct nouveau_bios*,int) ;

__attribute__((used)) static u16
FUNC_2(struct nouveau_bios *VAR_0)
{
 u16 VAR_1, VAR_2 = FUNC_0(VAR_0, &VAR_1);
 if (VAR_2 && VAR_1 >= 16)
  return FUNC_1(VAR_0, VAR_2 + 14);
 return 0x0000;
}
