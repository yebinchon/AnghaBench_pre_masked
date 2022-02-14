
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
typedef int dma_addr_t ;




 int FUNC_0 (int ,size_t) ;
 int FUNC_1 (int ,size_t) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 () ;

void FUNC_4(struct device *VAR_0, dma_addr_t VAR_1,
    size_t VAR_2, enum dma_data_direction VAR_3)
{
 switch (VAR_3) {
 case 128:
  FUNC_1(VAR_1, VAR_2);
  break;
 case 129:
  FUNC_0(VAR_1, VAR_2);
  break;
 default:
  if (FUNC_3())
   FUNC_2("dma_sync_single_for_device: unsupported dir %u\n", VAR_3);
  break;
 }
}
