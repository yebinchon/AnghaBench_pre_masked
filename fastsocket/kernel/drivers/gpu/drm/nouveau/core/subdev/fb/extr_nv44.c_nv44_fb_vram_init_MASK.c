
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int size; int type; } ;
struct nouveau_fb {TYPE_1__ ram; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct nouveau_fb*,int) ;

int
FUNC_1(struct nouveau_fb *VAR_3)
{
 u32 VAR_4 = FUNC_0(VAR_3, 0x100474);
 if (VAR_4 & 0x00000004)
  VAR_3->ram.type = VAR_2;
 if (VAR_4 & 0x00000002)
  VAR_3->ram.type = VAR_1;
 if (VAR_4 & 0x00000001)
  VAR_3->ram.type = VAR_0;

 VAR_3->ram.size = FUNC_0(VAR_3, 0x10020c) & 0xff000000;
 return 0;
}
