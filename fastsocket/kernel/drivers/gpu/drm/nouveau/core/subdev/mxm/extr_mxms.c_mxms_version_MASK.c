
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct nouveau_mxm {int dummy; } ;


 int* FUNC_0 (struct nouveau_mxm*) ;
 int FUNC_1 (struct nouveau_mxm*,char*,int,int) ;

u16
FUNC_2(struct nouveau_mxm *VAR_0)
{
 u8 *VAR_1 = FUNC_0(VAR_0);
 u16 VAR_2 = (VAR_1[4] << 8) | VAR_1[5];
 switch (VAR_2 ) {
 case 0x0200:
 case 0x0201:
 case 0x0300:
  return VAR_2;
 default:
  break;
 }

 FUNC_1(VAR_0, "unknown version %d.%d\n", VAR_1[4], VAR_1[5]);
 return 0x0000;
}
