
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct nvc0_graph_priv {int size; int* data; int firmware; struct nvc0_graph_mmio* mmio_list; struct nvc0_graph_mmio* mmio_data; } ;
struct nvc0_graph_mmio {int size; int align; int access; int addr; int data; int shift; size_t buffer; } ;
struct nvc0_graph_data {int size; int align; int access; int addr; int data; int shift; size_t buffer; } ;
struct TYPE_5__ {int offset; } ;
struct nvc0_graph_chan {int mmio_nr; TYPE_2__ mmio_vma; struct nvc0_graph_chan* mmio; TYPE_1__* data; } ;
struct nouveau_vm {int dummy; } ;
struct nouveau_oclass {int dummy; } ;
struct nouveau_object {int dummy; } ;
struct TYPE_6__ {struct nouveau_vm* vm; } ;
struct TYPE_4__ {TYPE_2__ vma; struct nvc0_graph_chan* mem; } ;


 int FUNC_0 (struct nvc0_graph_mmio*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 TYPE_3__* FUNC_2 (struct nouveau_object*) ;
 int FUNC_3 (struct nvc0_graph_chan*,struct nouveau_vm*,int,TYPE_2__*) ;
 int FUNC_4 (struct nouveau_object*,int *,int,int,int ,struct nvc0_graph_chan**) ;
 int FUNC_5 (struct nouveau_object*,struct nouveau_object*,struct nouveau_oclass*,int *,int,int,int ,struct nvc0_graph_chan**) ;
 struct nvc0_graph_chan* FUNC_6 (struct nvc0_graph_chan*) ;
 struct nouveau_object* FUNC_7 (struct nvc0_graph_chan*) ;
 int FUNC_8 (struct nvc0_graph_chan*,int,int) ;
 int FUNC_9 (int) ;

int
FUNC_10(struct nouveau_object *VAR_3,
   struct nouveau_object *VAR_4,
   struct nouveau_oclass *VAR_5, void *VAR_6, u32 VAR_7,
   struct nouveau_object **VAR_8)
{
 struct nouveau_vm *VAR_9 = FUNC_2(VAR_3)->vm;
 struct nvc0_graph_priv *VAR_10 = (void *)VAR_4;
 struct nvc0_graph_data *VAR_11 = VAR_10->mmio_data;
 struct nvc0_graph_mmio *VAR_12 = VAR_10->mmio_list;
 struct nvc0_graph_chan *VAR_13;
 int VAR_14, VAR_15;


 VAR_14 = FUNC_5(VAR_3, VAR_4, VAR_5, ((void*)0),
        VAR_10->size, 0x100,
        VAR_0, &VAR_13);
 *VAR_8 = FUNC_7(VAR_13);
 if (VAR_14)
  return VAR_14;





 VAR_14 = FUNC_4(VAR_3, ((void*)0), 0x1000, 0x100, 0, &VAR_13->mmio);
 if (VAR_14)
  return VAR_14;

 VAR_14 = FUNC_3(FUNC_6(VAR_13->mmio), VAR_9,
        VAR_1 | VAR_2,
        &VAR_13->mmio_vma);
 if (VAR_14)
  return VAR_14;


 for (VAR_15 = 0; VAR_11->size && VAR_15 < FUNC_0(VAR_10->mmio_data); VAR_15++) {
  VAR_14 = FUNC_4(VAR_3, ((void*)0), VAR_11->size, VAR_11->align,
      0, &VAR_13->data[VAR_15].mem);
  if (VAR_14)
   return VAR_14;

  VAR_14 = FUNC_3(VAR_13->data[VAR_15].mem, VAR_9, VAR_11->access,
        &VAR_13->data[VAR_15].vma);
  if (VAR_14)
   return VAR_14;

  VAR_11++;
 }


 for (VAR_15 = 0; VAR_12->addr && VAR_15 < FUNC_0(VAR_10->mmio_list); VAR_15++) {
  u32 VAR_16 = VAR_12->addr;
  u32 VAR_17 = VAR_12->data;

  if (VAR_12->shift) {
   u64 VAR_18 = VAR_13->data[VAR_12->buffer].vma.offset;
   VAR_17 |= VAR_18 >> VAR_12->shift;
  }

  FUNC_8(VAR_13->mmio, VAR_13->mmio_nr++ * 4, VAR_16);
  FUNC_8(VAR_13->mmio, VAR_13->mmio_nr++ * 4, VAR_17);
  VAR_12++;
 }

 for (VAR_15 = 0; VAR_15 < VAR_10->size; VAR_15 += 4)
  FUNC_8(VAR_13, VAR_15, VAR_10->data[VAR_15 / 4]);

 if (!VAR_10->firmware) {
  FUNC_8(VAR_13, 0x00, VAR_13->mmio_nr / 2);
  FUNC_8(VAR_13, 0x04, VAR_13->mmio_vma.offset >> 8);
 } else {
  FUNC_8(VAR_13, 0xf4, 0);
  FUNC_8(VAR_13, 0xf8, 0);
  FUNC_8(VAR_13, 0x10, VAR_13->mmio_nr / 2);
  FUNC_8(VAR_13, 0x14, FUNC_1(VAR_13->mmio_vma.offset));
  FUNC_8(VAR_13, 0x18, FUNC_9(VAR_13->mmio_vma.offset));
  FUNC_8(VAR_13, 0x1c, 1);
  FUNC_8(VAR_13, 0x20, 0);
  FUNC_8(VAR_13, 0x28, 0);
  FUNC_8(VAR_13, 0x2c, 0);
 }

 return 0;
}
