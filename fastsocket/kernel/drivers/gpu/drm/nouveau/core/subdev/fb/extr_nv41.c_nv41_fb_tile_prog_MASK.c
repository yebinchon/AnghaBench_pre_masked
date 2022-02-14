
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nouveau_fb_tile {int zcomp; int addr; int pitch; int limit; } ;
struct nouveau_fb {int dummy; } ;


 int FUNC_0 (struct nouveau_fb*,int) ;
 int FUNC_1 (struct nouveau_fb*,int,int ) ;

void
FUNC_2(struct nouveau_fb *VAR_0, int VAR_1, struct nouveau_fb_tile *VAR_2)
{
 FUNC_1(VAR_0, 0x100604 + (VAR_1 * 0x10), VAR_2->limit);
 FUNC_1(VAR_0, 0x100608 + (VAR_1 * 0x10), VAR_2->pitch);
 FUNC_1(VAR_0, 0x100600 + (VAR_1 * 0x10), VAR_2->addr);
 FUNC_0(VAR_0, 0x100600 + (VAR_1 * 0x10));
 FUNC_1(VAR_0, 0x100700 + (VAR_1 * 0x04), VAR_2->zcomp);
}
