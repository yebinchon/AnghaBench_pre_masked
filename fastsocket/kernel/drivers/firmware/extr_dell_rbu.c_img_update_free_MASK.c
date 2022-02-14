
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dma_alloc; int image_update_ordernum; scalar_t__ bios_image_size; scalar_t__ image_update_buffer_size; int * image_update_buffer; } ;


 int VAR_0 ;
 int FUNC_0 (int *,scalar_t__,int *,int ) ;
 int FUNC_1 (unsigned long,int) ;
 int FUNC_2 (int *,int ,scalar_t__) ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static void FUNC_3(void)
{
 if (!VAR_1.image_update_buffer)
  return;




 FUNC_2(VAR_1.image_update_buffer, 0,
  VAR_1.image_update_buffer_size);
 if (VAR_1.dma_alloc == 1)
  FUNC_0(((void*)0), VAR_1.bios_image_size,
   VAR_1.image_update_buffer, VAR_0);
 else
  FUNC_1((unsigned long) VAR_1.image_update_buffer,
   VAR_1.image_update_ordernum);




 VAR_1.image_update_ordernum = -1;
 VAR_1.image_update_buffer = ((void*)0);
 VAR_1.image_update_buffer_size = 0;
 VAR_1.bios_image_size = 0;
 VAR_1.dma_alloc = 0;
}
