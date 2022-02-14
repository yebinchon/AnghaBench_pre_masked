
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int size; int parts; int type; } ;
struct nouveau_fb {TYPE_1__ ram; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct nouveau_fb*,int) ;

__attribute__((used)) static int
FUNC_1(struct nouveau_fb *VAR_3)
{
 u32 VAR_4 = FUNC_0(VAR_3, 0x100914);

 switch (VAR_4 & 0x00000003) {
 case 0x00000000: VAR_3->ram.type = VAR_0; break;
 case 0x00000001: VAR_3->ram.type = VAR_1; break;
 case 0x00000002: VAR_3->ram.type = VAR_2; break;
 case 0x00000003: break;
 }

 VAR_3->ram.size = FUNC_0(VAR_3, 0x10020c) & 0xff000000;
 VAR_3->ram.parts = (FUNC_0(VAR_3, 0x100200) & 0x00000003) + 1;
 return FUNC_0(VAR_3, 0x100320);
}
