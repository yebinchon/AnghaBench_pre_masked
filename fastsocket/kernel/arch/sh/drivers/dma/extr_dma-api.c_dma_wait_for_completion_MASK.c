
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dma_info {TYPE_1__* ops; } ;
struct dma_channel {int flags; int wait_queue; } ;
struct TYPE_2__ {scalar_t__ (* get_residue ) (struct dma_channel*) ;} ;


 int VAR_0 ;
 int FUNC_0 () ;
 struct dma_channel* FUNC_1 (unsigned int) ;
 struct dma_info* FUNC_2 (unsigned int) ;
 scalar_t__ FUNC_3 (struct dma_channel*) ;
 scalar_t__ FUNC_4 (struct dma_channel*) ;
 int FUNC_5 (int ,int) ;

void FUNC_6(unsigned int VAR_1)
{
 struct dma_info *VAR_2 = FUNC_2(VAR_1);
 struct dma_channel *VAR_3 = FUNC_1(VAR_1);

 if (VAR_3->flags & VAR_0) {
  FUNC_5(VAR_3->wait_queue,
      (VAR_2->ops->get_residue(VAR_3) == 0));
  return;
 }

 while (VAR_2->ops->get_residue(VAR_3))
  FUNC_0();
}
