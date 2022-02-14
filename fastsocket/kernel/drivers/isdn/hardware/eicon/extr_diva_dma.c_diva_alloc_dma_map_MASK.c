
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _diva_dma_map_entry {int dummy; } ;
typedef struct _diva_dma_map_entry diva_dma_map_entry_t ;


 struct _diva_dma_map_entry* FUNC_0 (int ,int) ;
 int FUNC_1 (struct _diva_dma_map_entry*,int ,int) ;

struct _diva_dma_map_entry* FUNC_2 (void* VAR_0, int VAR_1) {
  diva_dma_map_entry_t* VAR_2 = FUNC_0(0, sizeof(*VAR_2)*(VAR_1+1));
  if (VAR_2)
   FUNC_1 (VAR_2, 0, sizeof(*VAR_2)*(VAR_1+1));
  return VAR_2;
}
