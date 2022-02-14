
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dma_info {struct dma_channel* channels; } ;
struct dma_channel {int wait_queue; } ;
typedef int irqreturn_t ;
struct TYPE_4__ {TYPE_1__* status; } ;
struct TYPE_3__ {int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int FUNC_0 (int) ;
 TYPE_2__* VAR_3 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_4, void *VAR_5)
{
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  if (VAR_3->status[VAR_6].status & 0x20000000) {
   unsigned int VAR_7 = FUNC_0(VAR_6);

   if (FUNC_1(VAR_7 == 0)) {
    struct dma_info *VAR_8 = VAR_5;
    struct dma_channel *VAR_9 = VAR_8->channels + VAR_6;

    FUNC_2(&VAR_9->wait_queue);

    return VAR_1;
   }
  }
 }

 return VAR_2;
}
