
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nv31_mpeg_priv {int dummy; } ;
struct nouveau_fb_tile {int addr; int limit; int pitch; } ;
struct nouveau_engine {int dummy; } ;
struct TYPE_3__ {struct nouveau_fb_tile* region; } ;
struct TYPE_4__ {TYPE_1__ tile; } ;


 TYPE_2__* FUNC_0 (struct nouveau_engine*) ;
 int FUNC_1 (struct nv31_mpeg_priv*,int,int ) ;

void
FUNC_2(struct nouveau_engine *VAR_0, int VAR_1)
{
 struct nouveau_fb_tile *VAR_2 = &FUNC_0(VAR_0)->tile.region[VAR_1];
 struct nv31_mpeg_priv *VAR_3 = (void *)VAR_0;

 FUNC_1(VAR_3, 0x00b008 + (VAR_1 * 0x10), VAR_2->pitch);
 FUNC_1(VAR_3, 0x00b004 + (VAR_1 * 0x10), VAR_2->limit);
 FUNC_1(VAR_3, 0x00b000 + (VAR_1 * 0x10), VAR_2->addr);
}
