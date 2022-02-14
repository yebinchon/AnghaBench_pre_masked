
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
typedef int DMA_MemMap_t ;


 int FUNC_0 (int *,void*,size_t) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ) ;

int FUNC_3(DMA_MemMap_t *VAR_0,
  void *VAR_1,
  size_t VAR_2,
  enum dma_data_direction VAR_3
    ) {
 int VAR_4;

 VAR_4 = FUNC_1(VAR_0, VAR_3);
 if (VAR_4 == 0) {
  VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2);
  if (VAR_4 < 0) {



   FUNC_2(VAR_0, 0);
  }
 }

 return VAR_4;
}
