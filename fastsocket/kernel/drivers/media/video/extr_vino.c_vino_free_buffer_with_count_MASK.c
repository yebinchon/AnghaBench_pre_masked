
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int page_count; scalar_t__* virtual; int dma; int * dma_cpu; } ;
struct vino_framebuffer {TYPE_1__ desc_table; } ;
typedef int dma_addr_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_1 (int *,unsigned int,void*,int ) ;
 int FUNC_2 (int *,int ,int ,int ) ;
 int FUNC_3 (char*,unsigned int) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__*) ;
 int FUNC_6 (struct vino_framebuffer*,int ,int) ;
 int FUNC_7 (void*) ;

__attribute__((used)) static void FUNC_8(struct vino_framebuffer *VAR_3,
            unsigned int VAR_4)
{
 unsigned int VAR_5;

 FUNC_3("vino_free_buffer_with_count(): count = %d\n", VAR_4);

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  FUNC_0(FUNC_7((void *)VAR_3->desc_table.virtual[VAR_5]));
  FUNC_2(((void*)0),
     VAR_3->desc_table.dma_cpu[VAR_2 * VAR_5],
     VAR_1, VAR_0);
  FUNC_4(VAR_3->desc_table.virtual[VAR_5]);
 }

 FUNC_1(((void*)0),
     VAR_2 * (VAR_3->desc_table.page_count + 4) *
     sizeof(dma_addr_t), (void *)VAR_3->desc_table.dma_cpu,
     VAR_3->desc_table.dma);
 FUNC_5(VAR_3->desc_table.virtual);

 FUNC_6(VAR_3, 0, sizeof(struct vino_framebuffer));
}
