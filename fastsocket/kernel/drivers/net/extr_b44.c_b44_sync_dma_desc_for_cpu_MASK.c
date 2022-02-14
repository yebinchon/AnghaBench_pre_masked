
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssb_device {int dma_dev; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
typedef scalar_t__ dma_addr_t ;


 int VAR_0 ;
 int FUNC_0 (int ,scalar_t__,int ,int) ;

__attribute__((used)) static inline void FUNC_1(struct ssb_device *VAR_1,
          dma_addr_t VAR_2,
          unsigned long VAR_3,
          enum dma_data_direction VAR_4)
{
 FUNC_0(VAR_1->dma_dev, VAR_2 + VAR_3,
    VAR_0, VAR_4);
}
