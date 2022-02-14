
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vm_area_struct {int vm_flags; int vm_page_prot; scalar_t__ vm_start; scalar_t__ vm_end; int vm_pgoff; } ;
struct file {struct drm_file* private_data; } ;
struct drm_file {TYPE_1__* minor; } ;
struct drm_device {TYPE_2__* dev_private; } ;
struct drm_buf {TYPE_3__* dev_private; } ;
struct TYPE_5__ {struct drm_buf* mmap_buffer; } ;
typedef TYPE_2__ drm_i810_private_t ;
struct TYPE_6__ {int currently_mapped; } ;
typedef TYPE_3__ drm_i810_buf_priv_t ;
struct TYPE_4__ {struct drm_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct vm_area_struct*,scalar_t__,int ,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_4, struct vm_area_struct *VAR_5)
{
 struct drm_file *VAR_6 = VAR_4->private_data;
 struct drm_device *VAR_7;
 drm_i810_private_t *VAR_8;
 struct drm_buf *VAR_9;
 drm_i810_buf_priv_t *VAR_10;

 VAR_7 = VAR_6->minor->dev;
 VAR_8 = VAR_7->dev_private;
 VAR_9 = VAR_8->mmap_buffer;
 VAR_10 = VAR_9->dev_private;

 VAR_5->vm_flags |= (VAR_3 | VAR_2);

 VAR_10->currently_mapped = VAR_1;

 if (FUNC_0(VAR_5, VAR_5->vm_start,
          VAR_5->vm_pgoff,
          VAR_5->vm_end - VAR_5->vm_start, VAR_5->vm_page_prot))
  return -VAR_0;
 return 0;
}
