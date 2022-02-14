
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct drm_device {TYPE_1__* dev_private; } ;
struct TYPE_4__ {scalar_t__ pci_buf; } ;
typedef TYPE_1__ drm_via_private_t ;
struct TYPE_5__ {int size; int buf; } ;
typedef TYPE_2__ drm_via_cmdbuffer_t ;


 scalar_t__ FUNC_0 (scalar_t__,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct drm_device*,int const*,int ) ;
 int FUNC_2 (int *,int ,struct drm_device*,int ) ;

__attribute__((used)) static int FUNC_3(struct drm_device *VAR_3,
          drm_via_cmdbuffer_t *VAR_4)
{
 drm_via_private_t *VAR_5 = VAR_3->dev_private;
 int VAR_6;

 if (VAR_4->size > VAR_2)
  return -VAR_1;
 if (FUNC_0(VAR_5->pci_buf, VAR_4->buf, VAR_4->size))
  return -VAR_0;

 if ((VAR_6 =
      FUNC_2((uint32_t *) VAR_5->pci_buf,
           VAR_4->size, VAR_3, 0))) {
  return VAR_6;
 }

 VAR_6 =
     FUNC_1(VAR_3, (const uint32_t *)VAR_5->pci_buf,
         VAR_4->size);
 return VAR_6;
}
