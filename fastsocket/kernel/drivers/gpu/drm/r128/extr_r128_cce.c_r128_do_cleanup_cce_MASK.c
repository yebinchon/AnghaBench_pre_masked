
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct drm_device {TYPE_1__* dev_private; int * agp_buffer_map; scalar_t__ irq_enabled; } ;
struct TYPE_5__ {scalar_t__ bus_addr; } ;
struct TYPE_4__ {TYPE_3__ gart_info; int * ring_rptr; int * cce_ring; int is_pci; } ;
typedef TYPE_1__ drm_r128_private_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct drm_device*,TYPE_3__*) ;
 int FUNC_2 (int *,struct drm_device*) ;
 int FUNC_3 (struct drm_device*) ;
 int FUNC_4 (TYPE_1__*) ;

int FUNC_5(struct drm_device *VAR_0)
{





 if (VAR_0->irq_enabled)
  FUNC_3(VAR_0);

 if (VAR_0->dev_private) {
  drm_r128_private_t *VAR_1 = VAR_0->dev_private;
  {
   if (VAR_1->gart_info.bus_addr)
    if (!FUNC_1(VAR_0,
       &VAR_1->gart_info))
     FUNC_0
         ("failed to cleanup PCI GART!\n");
  }

  FUNC_4(VAR_0->dev_private);
  VAR_0->dev_private = ((void*)0);
 }

 return 0;
}
