
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int minor; int major; } ;
struct agp_kern_info {int mode; unsigned long page_mask; int vm_ops; int cant_use_aperture; int current_memory; int max_memory; int aper_size; int aper_base; int device; int chipset; TYPE_1__ version; } ;
struct agp_bridge_data {int mode; int vm_ops; TYPE_3__* driver; int current_memory_agp; int max_memory_agp; int gart_bus_addr; int dev; TYPE_2__* version; } ;
struct TYPE_6__ {int cant_use_aperture; } ;
struct TYPE_5__ {int minor; int major; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct agp_kern_info*,int ,int) ;

int FUNC_3(struct agp_bridge_data *VAR_6, struct agp_kern_info *VAR_7)
{
 FUNC_2(VAR_7, 0, sizeof(struct agp_kern_info));
 if (!VAR_6) {
  VAR_7->chipset = VAR_4;
  return -VAR_3;
 }

 VAR_7->version.major = VAR_6->version->major;
 VAR_7->version.minor = VAR_6->version->minor;
 VAR_7->chipset = VAR_5;
 VAR_7->device = VAR_6->dev;
 if (VAR_6->mode & VAR_2)
  VAR_7->mode = VAR_6->mode & ~VAR_1;
 else
  VAR_7->mode = VAR_6->mode & ~VAR_0;
 VAR_7->aper_base = VAR_6->gart_bus_addr;
 VAR_7->aper_size = FUNC_0();
 VAR_7->max_memory = VAR_6->max_memory_agp;
 VAR_7->current_memory = FUNC_1(&VAR_6->current_memory_agp);
 VAR_7->cant_use_aperture = VAR_6->driver->cant_use_aperture;
 VAR_7->vm_ops = VAR_6->vm_ops;
 VAR_7->page_mask = ~0UL;
 return 0;
}
