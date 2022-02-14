
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int page_count; int * dma_cpu; } ;
struct vino_framebuffer {TYPE_1__ desc_table; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int ,int ) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void FUNC_2(struct vino_framebuffer *VAR_3)
{
 int VAR_4;

 FUNC_1("vino_sync_buffer():\n");

 for (VAR_4 = 0; VAR_4 < VAR_3->desc_table.page_count; VAR_4++)
  FUNC_0(((void*)0),
     VAR_3->desc_table.dma_cpu[VAR_2 * VAR_4],
     VAR_1, VAR_0);
}
