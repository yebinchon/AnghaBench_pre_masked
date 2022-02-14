
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long* virtual; unsigned int page_count; scalar_t__* dma_cpu; int dma; } ;
struct vino_framebuffer {unsigned int size; TYPE_1__ desc_table; int data_format; } ;
typedef scalar_t__ dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_0 (int ) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 scalar_t__* FUNC_1 (int *,unsigned int,int *,int) ;
 scalar_t__ FUNC_2 (int *,void*,unsigned int,int ) ;
 int FUNC_3 (char*,...) ;
 unsigned long FUNC_4 (int) ;
 int FUNC_5 (unsigned long*) ;
 scalar_t__ FUNC_6 (unsigned int,int) ;
 int FUNC_7 (struct vino_framebuffer*,int ,int) ;
 int FUNC_8 (struct vino_framebuffer*,unsigned int) ;
 int FUNC_9 (void*) ;

__attribute__((used)) static int FUNC_10(struct vino_framebuffer *VAR_11,
    unsigned int VAR_12)
{
 unsigned int VAR_13, VAR_14, VAR_15;
 int VAR_16 = 0;

 FUNC_3("vino_allocate_buffer():\n");

 if (VAR_12 < 1)
  return -VAR_1;

 FUNC_7(VAR_11, 0, sizeof(struct vino_framebuffer));

 VAR_13 = ((VAR_12 / VAR_6) + 4) & ~3;

 FUNC_3("vino_allocate_buffer(): size = %d, count = %d\n",
  VAR_12, VAR_13);


 VAR_11->desc_table.virtual = (unsigned long *)
  FUNC_6(VAR_13 * sizeof(unsigned long), VAR_5);
 if (!VAR_11->desc_table.virtual)
  return -VAR_3;



 VAR_11->desc_table.dma_cpu =
  FUNC_1(((void*)0), VAR_9 * (VAR_13 + 4) *
       sizeof(dma_addr_t), &VAR_11->desc_table.dma,
       VAR_5 | VAR_4);
 if (!VAR_11->desc_table.dma_cpu) {
  VAR_16 = -VAR_3;
  goto out_free_virtual;
 }



 for (VAR_14 = 0; VAR_14 < VAR_13; VAR_14++) {
  dma_addr_t VAR_17;

  VAR_11->desc_table.virtual[VAR_14] =
   FUNC_4(VAR_5 | VAR_4);
  if (!VAR_11->desc_table.virtual[VAR_14]) {
   VAR_16 = -VAR_2;
   break;
  }

  VAR_17 =
   FUNC_2(((void*)0),
           (void *)VAR_11->desc_table.virtual[VAR_14],
           VAR_6, VAR_0);

  for (VAR_15 = 0; VAR_15 < VAR_9; VAR_15++) {
   VAR_11->desc_table.dma_cpu[VAR_9 * VAR_14 + VAR_15] =
    VAR_17 + VAR_10 * VAR_15;
  }

  FUNC_0(FUNC_9((void *)VAR_11->desc_table.virtual[VAR_14]));
 }



 VAR_11->desc_table.page_count = VAR_13;

 if (VAR_16) {


  FUNC_8(VAR_11, VAR_14);
  return VAR_16;
 }


 VAR_11->size = VAR_13 * VAR_6;
 VAR_11->data_format = VAR_7;


 VAR_11->desc_table.dma_cpu[VAR_9 * VAR_13] = VAR_8;
 return 0;

 out_free_virtual:
 FUNC_5(VAR_11->desc_table.virtual);
 return VAR_16;
}
