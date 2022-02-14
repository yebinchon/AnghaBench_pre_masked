
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_device {int dummy; } ;
struct drm_buf {int idx; TYPE_1__* dev_private; } ;
struct TYPE_2__ {int in_use; } ;
typedef TYPE_1__ drm_i810_buf_priv_t ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int,int ) ;

__attribute__((used)) static int FUNC_2(struct drm_device *VAR_3, struct drm_buf *VAR_4)
{
 drm_i810_buf_priv_t *VAR_5 = VAR_4->dev_private;
 int VAR_6;


 VAR_6 = FUNC_1(VAR_5->in_use, VAR_1, VAR_2);
 if (VAR_6 != VAR_1) {
  FUNC_0("Freeing buffer thats not in use : %d\n", VAR_4->idx);
  return -VAR_0;
 }

 return 0;
}
