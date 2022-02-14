
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct drm_device {TYPE_2__* dev_private; } ;
struct TYPE_5__ {TYPE_1__* status_page_dmah; } ;
typedef TYPE_2__ drm_i915_private_t ;
struct TYPE_6__ {int gen; } ;
struct TYPE_4__ {int busaddr; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 TYPE_3__* FUNC_1 (struct drm_device*) ;

__attribute__((used)) static void FUNC_2(struct drm_device *VAR_1)
{
 drm_i915_private_t *VAR_2 = VAR_1->dev_private;
 u32 VAR_3;

 VAR_3 = VAR_2->status_page_dmah->busaddr;
 if (FUNC_1(VAR_1)->gen >= 4)
  VAR_3 |= (VAR_2->status_page_dmah->busaddr >> 28) & 0xf0;
 FUNC_0(VAR_0, VAR_3);
}
