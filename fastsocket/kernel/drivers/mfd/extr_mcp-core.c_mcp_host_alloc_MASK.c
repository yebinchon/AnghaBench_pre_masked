
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int release; int dma_mask; int * bus; struct device* parent; } ;
struct mcp {TYPE_1__ attached_device; int lock; } ;
struct device {int dma_mask; } ;


 int VAR_0 ;
 struct mcp* FUNC_0 (int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;

struct mcp *FUNC_2(struct device *VAR_3, size_t VAR_4)
{
 struct mcp *VAR_5;

 VAR_5 = FUNC_0(sizeof(struct mcp) + VAR_4, VAR_0);
 if (VAR_5) {
  FUNC_1(&VAR_5->lock);
  VAR_5->attached_device.parent = VAR_3;
  VAR_5->attached_device.bus = &VAR_1;
  VAR_5->attached_device.dma_mask = VAR_3->dma_mask;
  VAR_5->attached_device.release = VAR_2;
 }
 return VAR_5;
}
