
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sep_device {scalar_t__ shared_bus; int shared_addr; TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,unsigned long,scalar_t__*,int ) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static int FUNC_2(struct sep_device *VAR_2,
       unsigned long VAR_3)
{

 VAR_2->shared_addr = FUNC_0(&VAR_2->pdev->dev, VAR_3,
     &VAR_2->shared_bus, VAR_1);

 if (!VAR_2->shared_addr) {
  FUNC_1("sep_driver :shared memory dma_alloc_coherent failed\n");
  return -VAR_0;
 }

 FUNC_1("sep: shared_addr %ld bytes @%p (bus %08llx)\n",
  VAR_3, VAR_2->shared_addr, (unsigned long long)VAR_2->shared_bus);
 return 0;
}
