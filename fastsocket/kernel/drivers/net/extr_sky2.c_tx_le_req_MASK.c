
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {scalar_t__ ip_summed; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {int nr_frags; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct sk_buff const*) ;
 TYPE_1__* FUNC_1 (struct sk_buff const*) ;

__attribute__((used)) static unsigned FUNC_2(const struct sk_buff *VAR_1)
{
 unsigned VAR_2;

 VAR_2 = (FUNC_1(VAR_1)->nr_frags + 1)
  * (sizeof(dma_addr_t) / sizeof(u32));

 if (FUNC_0(VAR_1))
  ++VAR_2;
 else if (sizeof(dma_addr_t) == sizeof(u32))
  ++VAR_2;

 if (VAR_1->ip_summed == VAR_0)
  ++VAR_2;

 return VAR_2;
}
