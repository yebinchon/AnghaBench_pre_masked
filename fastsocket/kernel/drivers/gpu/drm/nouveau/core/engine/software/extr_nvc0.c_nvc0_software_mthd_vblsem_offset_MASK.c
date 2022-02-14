
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_4__ {int offset; } ;
struct TYPE_3__ {TYPE_2__ vblank; } ;
struct nvc0_software_chan {TYPE_1__ base; } ;
struct nouveau_object {int parent; } ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int
FUNC_1(struct nouveau_object *VAR_0, u32 VAR_1,
     void *VAR_2, u32 VAR_3)
{
 struct nvc0_software_chan *VAR_4 = (void *)FUNC_0(VAR_0->parent);
 u64 VAR_5 = *(u32 *)VAR_2;
 if (VAR_1 == 0x0400) {
  VAR_4->base.vblank.offset &= 0x00ffffffffULL;
  VAR_4->base.vblank.offset |= VAR_5 << 32;
 } else {
  VAR_4->base.vblank.offset &= 0xff00000000ULL;
  VAR_4->base.vblank.offset |= VAR_5;
 }
 return 0;
}
