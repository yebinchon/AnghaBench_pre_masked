
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_devres {size_t member_0; void* member_1; int member_2; } ;
struct device {int dummy; } ;
typedef int dma_addr_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct device*,int ,int ,struct dma_devres*) ;
 int FUNC_2 (struct device*,size_t,void*,int ) ;
 int VAR_0 ;
 int VAR_1 ;

void FUNC_3(struct device *VAR_2, size_t VAR_3, void *VAR_4,
   dma_addr_t VAR_5)
{
 struct dma_devres VAR_6 = { VAR_3, VAR_4, VAR_5 };

 FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5);
 FUNC_0(FUNC_1(VAR_2, VAR_0, VAR_1,
          &VAR_6));
}
