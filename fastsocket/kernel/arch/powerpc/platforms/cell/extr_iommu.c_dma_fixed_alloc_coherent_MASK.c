
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
typedef int gfp_t ;
typedef int dma_addr_t ;
struct TYPE_2__ {void* (* alloc_coherent ) (struct device*,size_t,int *,int ) ;} ;


 int FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*) ;
 TYPE_1__ VAR_0 ;
 void* FUNC_3 (struct device*,int ,size_t,int *,int ,int ,int ) ;
 scalar_t__ VAR_1 ;
 void* FUNC_4 (struct device*,size_t,int *,int ) ;

__attribute__((used)) static void *FUNC_5(struct device *VAR_2, size_t VAR_3,
          dma_addr_t *VAR_4, gfp_t VAR_5)
{
 if (VAR_1)
  return FUNC_3(VAR_2, FUNC_0(VAR_2),
         VAR_3, VAR_4,
         FUNC_2(VAR_2), VAR_5,
         FUNC_1(VAR_2));
 else
  return VAR_0.alloc_coherent(VAR_2, VAR_3, VAR_4,
           VAR_5);
}
