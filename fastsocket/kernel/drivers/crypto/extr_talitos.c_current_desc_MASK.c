
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct talitos_private {int fifo_len; TYPE_2__* chan; scalar_t__ reg; } ;
struct talitos_desc {int dummy; } ;
struct device {int dummy; } ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_4__ {int tail; TYPE_1__* fifo; } ;
struct TYPE_3__ {scalar_t__ dma_desc; struct talitos_desc* desc; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct device*,char*) ;
 struct talitos_private* FUNC_2 (struct device*) ;
 scalar_t__ FUNC_3 (scalar_t__) ;

__attribute__((used)) static struct talitos_desc *FUNC_4(struct device *VAR_0, int VAR_1)
{
 struct talitos_private *VAR_2 = FUNC_2(VAR_0);
 int VAR_3 = VAR_2->chan[VAR_1].tail;
 dma_addr_t VAR_4;

 VAR_4 = FUNC_3(VAR_2->reg + FUNC_0(VAR_1));

 while (VAR_2->chan[VAR_1].fifo[VAR_3].dma_desc != VAR_4) {
  VAR_3 = (VAR_3 + 1) & (VAR_2->fifo_len - 1);
  if (VAR_3 == VAR_2->chan[VAR_1].tail) {
   FUNC_1(VAR_0, "couldn't locate current descriptor\n");
   return ((void*)0);
  }
 }

 return VAR_2->chan[VAR_1].fifo[VAR_3].desc;
}
