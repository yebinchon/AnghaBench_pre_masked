
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int size; int type; } ;
struct nouveau_fb {TYPE_1__ ram; } ;


 int VAR_0 ;
 int FUNC_0 (struct nouveau_fb*,int) ;

__attribute__((used)) static int
FUNC_1(struct nouveau_fb *VAR_1)
{
 VAR_1->ram.size = FUNC_0(VAR_1, 0x10020c) & 0xff000000;
 VAR_1->ram.type = VAR_0;
 return 0;
}
