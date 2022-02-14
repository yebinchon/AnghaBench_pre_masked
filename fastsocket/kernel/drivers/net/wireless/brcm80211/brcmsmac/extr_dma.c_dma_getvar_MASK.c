
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dma_pub {int dummy; } ;
struct TYPE_2__ {int txavail; } ;
struct dma_info {TYPE_1__ dma; } ;


 int FUNC_0 (char const*,char*) ;

unsigned long FUNC_1(struct dma_pub *VAR_0, const char *VAR_1)
{
 struct dma_info *VAR_2 = (struct dma_info *)VAR_0;

 if (!FUNC_0(VAR_1, "&txavail"))
  return (unsigned long)&(VAR_2->dma.txavail);
 return 0;
}
