
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
 int FUNC_0 (struct nouveau_fb*,int) ;

__attribute__((used)) static int
FUNC_1(struct nouveau_fb *VAR_2)
{
 u32 VAR_3 = FUNC_0(VAR_2, 0x100200);
 if (VAR_3 & 0x00000001)
  VAR_2->ram.type = VAR_0;
 else
  VAR_2->ram.type = VAR_1;

 VAR_2->ram.size = FUNC_0(VAR_2, 0x10020c) & 0xff000000;
 return 0;
}
