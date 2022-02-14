
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {int (* free_coherent ) (struct device*,size_t,void*,int ) ;} ;


 int FUNC_0 (struct device*) ;
 TYPE_1__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int ,size_t,void*,int ) ;
 int FUNC_2 (struct device*,size_t,void*,int ) ;

__attribute__((used)) static void FUNC_3(struct device *VAR_2, size_t VAR_3,
        void *VAR_4, dma_addr_t VAR_5)
{
 if (VAR_1)
  FUNC_1(FUNC_0(VAR_2), VAR_3, VAR_4,
        VAR_5);
 else
  VAR_0.free_coherent(VAR_2, VAR_3, VAR_4, VAR_5);
}
