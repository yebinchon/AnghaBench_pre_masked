
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nouveau_fb_tile {int addr; int pitch; scalar_t__ limit; } ;
struct TYPE_2__ {int (* comp ) (struct nouveau_fb*,int,int,int,struct nouveau_fb_tile*) ;} ;
struct nouveau_fb {TYPE_1__ tile; } ;


 scalar_t__ FUNC_0 (unsigned int,int) ;
 int FUNC_1 (struct nouveau_fb*,int,int,int,struct nouveau_fb_tile*) ;

void
FUNC_2(struct nouveau_fb *VAR_0, int VAR_1, u32 VAR_2, u32 VAR_3, u32 VAR_4,
    u32 VAR_5, struct nouveau_fb_tile *VAR_6)
{
 VAR_6->addr = 0x00000001 | VAR_2;
 VAR_6->limit = FUNC_0(1u, VAR_2 + VAR_3) - 1;
 VAR_6->pitch = VAR_4;
 if (VAR_5 & 4) {
  VAR_0->tile.comp(VAR_0, VAR_1, VAR_3, VAR_5, VAR_6);
  VAR_6->addr |= 2;
 }
}
