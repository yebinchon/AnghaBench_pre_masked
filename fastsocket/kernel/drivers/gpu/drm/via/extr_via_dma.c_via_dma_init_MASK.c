
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct drm_file {int dummy; } ;
struct drm_device {scalar_t__ dev_private; } ;
struct TYPE_6__ {int * virtual_start; } ;
struct TYPE_7__ {TYPE_1__ ring; } ;
typedef TYPE_2__ drm_via_private_t ;
struct TYPE_8__ {int func; } ;
typedef TYPE_3__ drm_via_dma_init_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int FUNC_1 (struct drm_device*) ;
 int FUNC_2 (struct drm_device*,TYPE_2__*,TYPE_3__*) ;

__attribute__((used)) static int FUNC_3(struct drm_device *VAR_4, void *VAR_5, struct drm_file *VAR_6)
{
 drm_via_private_t *VAR_7 = (drm_via_private_t *) VAR_4->dev_private;
 drm_via_dma_init_t *VAR_8 = VAR_5;
 int VAR_9 = 0;

 switch (VAR_8->func) {
 case 128:
  if (!FUNC_0(VAR_0))
   VAR_9 = -VAR_3;
  else
   VAR_9 = FUNC_2(VAR_4, VAR_7, VAR_8);
  break;
 case 130:
  if (!FUNC_0(VAR_0))
   VAR_9 = -VAR_3;
  else
   VAR_9 = FUNC_1(VAR_4);
  break;
 case 129:
  VAR_9 = (VAR_7->ring.virtual_start != ((void*)0)) ?
   0 : -VAR_1;
  break;
 default:
  VAR_9 = -VAR_2;
  break;
 }

 return VAR_9;
}
