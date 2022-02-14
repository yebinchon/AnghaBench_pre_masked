
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct nouveau_fb_tile {int zcomp; TYPE_2__* tag; } ;
struct TYPE_3__ {int parts; } ;
struct nouveau_fb {int tags; TYPE_1__ ram; } ;
struct TYPE_4__ {int offset; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int *,int,int,int,int,TYPE_2__**) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static void
FUNC_3(struct nouveau_fb *VAR_0, int VAR_1, u32 VAR_2, u32 VAR_3,
    struct nouveau_fb_tile *VAR_4)
{
 u32 VAR_5 = FUNC_0(VAR_2, 0x40);
 u32 VAR_6 = FUNC_2(VAR_5 / VAR_0->ram.parts, 0x40);
 if (!FUNC_1(&VAR_0->tags, 1, VAR_6, VAR_6, 1, &VAR_4->tag)) {
  if (VAR_3 & 2) VAR_4->zcomp |= 0x01000000;
  else VAR_4->zcomp |= 0x02000000;
  VAR_4->zcomp |= ((VAR_4->tag->offset ) >> 6);
  VAR_4->zcomp |= ((VAR_4->tag->offset + VAR_6 - 1) >> 6) << 12;



 }
}
