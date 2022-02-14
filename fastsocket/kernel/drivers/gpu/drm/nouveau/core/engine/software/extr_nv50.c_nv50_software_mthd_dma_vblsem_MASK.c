
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int ctxdma; } ;
struct TYPE_6__ {TYPE_1__ vblank; } ;
struct nv50_software_chan {TYPE_2__ base; } ;
struct nouveau_object {int parent; } ;
struct nouveau_handle {int object; } ;
struct nouveau_gpuobj {TYPE_3__* node; } ;
struct nouveau_fifo_chan {int dummy; } ;
struct TYPE_8__ {scalar_t__ parent; } ;
struct TYPE_7__ {int offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct nouveau_handle* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct nouveau_handle*) ;
 scalar_t__ FUNC_2 (int ) ;
 struct nouveau_gpuobj* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (struct nouveau_fifo_chan*) ;
 TYPE_4__* FUNC_6 (struct nv50_software_chan*) ;

__attribute__((used)) static int
FUNC_7(struct nouveau_object *VAR_3, u32 VAR_4,
         void *VAR_5, u32 VAR_6)
{
 struct nv50_software_chan *VAR_7 = (void *)FUNC_2(VAR_3->parent);
 struct nouveau_fifo_chan *VAR_8 = (void *)FUNC_6(VAR_7)->parent;
 struct nouveau_handle *VAR_9;
 int VAR_10 = -VAR_0;

 VAR_9 = FUNC_0(FUNC_5(VAR_8), *(u32 *)VAR_5);
 if (!VAR_9)
  return -VAR_1;

 if (FUNC_4(VAR_9->object, VAR_2)) {
  struct nouveau_gpuobj *VAR_11 = FUNC_3(VAR_9->object);
  VAR_7->base.vblank.ctxdma = VAR_11->node->offset >> 4;
  VAR_10 = 0;
 }
 FUNC_1(VAR_9);
 return VAR_10;
}
