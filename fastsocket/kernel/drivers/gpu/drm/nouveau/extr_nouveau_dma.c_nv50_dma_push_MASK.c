
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct nouveau_vma {scalar_t__ offset; } ;
struct TYPE_5__ {int ib_put; int ib_base; int ib_free; int ib_max; } ;
struct TYPE_4__ {struct nouveau_bo* buffer; } ;
struct nouveau_channel {TYPE_2__ dma; int object; int cli; TYPE_1__ push; } ;
struct nouveau_bo {int dummy; } ;
struct TYPE_6__ {int vm; } ;


 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct nouveau_bo*,int ) ;
 struct nouveau_vma* FUNC_4 (struct nouveau_bo*,int ) ;
 int FUNC_5 (struct nouveau_bo*,int ,int) ;
 TYPE_3__* FUNC_6 (int ) ;
 int FUNC_7 (int ,int,int) ;
 int FUNC_8 (scalar_t__) ;

void
FUNC_9(struct nouveau_channel *VAR_0, struct nouveau_bo *VAR_1,
       int VAR_2, int VAR_3)
{
 struct nouveau_bo *VAR_4 = VAR_0->push.buffer;
 struct nouveau_vma *VAR_5;
 int VAR_6 = (VAR_0->dma.ib_put * 2) + VAR_0->dma.ib_base;
 u64 VAR_7;

 VAR_5 = FUNC_4(VAR_1, FUNC_6(VAR_0->cli)->vm);
 FUNC_0(!VAR_5);
 VAR_7 = VAR_5->offset + VAR_2;

 FUNC_0(VAR_0->dma.ib_free < 1);

 FUNC_5(VAR_4, VAR_6++, FUNC_2(VAR_7));
 FUNC_5(VAR_4, VAR_6++, FUNC_8(VAR_7) | VAR_3 << 8);

 VAR_0->dma.ib_put = (VAR_0->dma.ib_put + 1) & VAR_0->dma.ib_max;

 FUNC_1();

 FUNC_3(VAR_4, 0);

 FUNC_7(VAR_0->object, 0x8c, VAR_0->dma.ib_put);
 VAR_0->dma.ib_free--;
}
