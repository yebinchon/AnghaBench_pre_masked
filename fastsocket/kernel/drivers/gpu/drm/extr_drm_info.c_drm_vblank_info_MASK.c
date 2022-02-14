
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {scalar_t__ private; } ;
struct drm_info_node {TYPE_1__* minor; } ;
struct drm_device {int num_crtcs; int struct_mutex; int * vblank_inmodeset; int * last_vblank_wait; int * vblank_refcount; } ;
struct TYPE_2__ {struct drm_device* dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct drm_device*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct seq_file*,char*,int,int ) ;

int FUNC_5(struct seq_file *VAR_0, void *VAR_1)
{
 struct drm_info_node *VAR_2 = (struct drm_info_node *) VAR_0->private;
 struct drm_device *VAR_3 = VAR_2->minor->dev;
 int VAR_4;

 FUNC_2(&VAR_3->struct_mutex);
 for (VAR_4 = 0; VAR_4 < VAR_3->num_crtcs; VAR_4++) {
  FUNC_4(VAR_0, "CRTC %d enable:     %d\n",
      VAR_4, FUNC_0(&VAR_3->vblank_refcount[VAR_4]));
  FUNC_4(VAR_0, "CRTC %d counter:    %d\n",
      VAR_4, FUNC_1(VAR_3, VAR_4));
  FUNC_4(VAR_0, "CRTC %d last wait:  %d\n",
      VAR_4, VAR_3->last_vblank_wait[VAR_4]);
  FUNC_4(VAR_0, "CRTC %d in modeset: %d\n",
      VAR_4, VAR_3->vblank_inmodeset[VAR_4]);
 }
 FUNC_3(&VAR_3->struct_mutex);
 return 0;
}
