
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_file {int dummy; } ;
struct drm_dma {scalar_t__ send_count; scalar_t__ request_count; scalar_t__ granted_count; } ;
struct drm_device_dma {scalar_t__ buf_count; } ;
struct drm_device {scalar_t__ dev_private; struct drm_device_dma* dma; } ;
typedef int drm_mga_private_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,scalar_t__,...) ;
 int VAR_1 ;
 int FUNC_1 (struct drm_device*,struct drm_file*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct drm_device*,struct drm_file*,struct drm_dma*) ;

int FUNC_4(struct drm_device *VAR_2, void *VAR_3,
      struct drm_file *VAR_4)
{
 struct drm_device_dma *VAR_5 = VAR_2->dma;
 drm_mga_private_t *VAR_6 = (drm_mga_private_t *) VAR_2->dev_private;
 struct drm_dma *VAR_7 = VAR_3;
 int VAR_8 = 0;

 FUNC_1(VAR_2, VAR_4);



 if (VAR_7->send_count != 0) {
  FUNC_0("Process %d trying to send %d buffers via drmDMA\n",
     VAR_0, VAR_7->send_count);
  return -VAR_1;
 }



 if (VAR_7->request_count < 0 || VAR_7->request_count > VAR_5->buf_count) {
  FUNC_0("Process %d trying to get %d buffers (of %d max)\n",
     VAR_0, VAR_7->request_count, VAR_5->buf_count);
  return -VAR_1;
 }

 FUNC_2(VAR_6);

 VAR_7->granted_count = 0;

 if (VAR_7->request_count)
  VAR_8 = FUNC_3(VAR_2, VAR_4, VAR_7);

 return VAR_8;
}
