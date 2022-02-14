
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_trans {int dev; } ;
struct iwl_dma_ptr {size_t size; int addr; int dma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,size_t,int *,int ) ;

__attribute__((used)) static int FUNC_2(struct iwl_trans *VAR_3,
      struct iwl_dma_ptr *VAR_4, size_t VAR_5)
{
 if (FUNC_0(VAR_4->addr))
  return -VAR_0;

 VAR_4->addr = FUNC_1(VAR_3->dev, VAR_5,
           &VAR_4->dma, VAR_2);
 if (!VAR_4->addr)
  return -VAR_1;
 VAR_4->size = VAR_5;
 return 0;
}
