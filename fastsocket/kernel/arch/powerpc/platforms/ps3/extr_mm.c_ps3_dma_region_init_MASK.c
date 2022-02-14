
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ps3_system_bus_device {int dev_type; } ;
struct ps3_dma_region {int page_size; int region_type; unsigned long offset; unsigned long len; int * region_ops; struct ps3_system_bus_device* dev; } ;
typedef enum ps3_dma_region_type { ____Placeholder_ps3_dma_region_type } ps3_dma_region_type ;
typedef enum ps3_dma_page_size { ____Placeholder_ps3_dma_page_size } ps3_dma_page_size ;
struct TYPE_5__ {scalar_t__ offset; } ;
struct TYPE_4__ {unsigned long size; } ;
struct TYPE_6__ {int total; TYPE_2__ r1; TYPE_1__ rm; } ;


 int FUNC_0 () ;
 int VAR_0 ;


 int VAR_1 ;
 unsigned long FUNC_1 (int ,int) ;
 int FUNC_2 (void*) ;
 TYPE_3__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned long FUNC_3 (int ) ;

int FUNC_4(struct ps3_system_bus_device *VAR_6,
 struct ps3_dma_region *VAR_7, enum ps3_dma_page_size VAR_8,
 enum ps3_dma_region_type VAR_9, void *VAR_10, unsigned long VAR_11)
{
 unsigned long VAR_12;

 VAR_12 = VAR_10 ? FUNC_3(FUNC_2(VAR_10)) : 0;

 VAR_7->dev = VAR_6;
 VAR_7->page_size = VAR_8;
 VAR_7->region_type = VAR_9;
 VAR_7->offset = VAR_12;
 if (VAR_7->offset >= VAR_2.rm.size)
  VAR_7->offset -= VAR_2.r1.offset;
 VAR_7->len = VAR_11 ? VAR_11 : FUNC_1(VAR_2.total, 1 << VAR_7->page_size);

 switch (VAR_6->dev_type) {
 case 128:
  VAR_7->region_ops = (VAR_1)
   ? &VAR_5
   : &VAR_4;
  break;
 case 129:
  VAR_7->region_ops = &VAR_3;
  break;
 default:
  FUNC_0();
  return -VAR_0;
 }
 return 0;
}
