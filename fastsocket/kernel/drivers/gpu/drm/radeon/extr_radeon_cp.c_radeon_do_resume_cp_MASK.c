
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct drm_file {int dummy; } ;
struct drm_device {TYPE_1__* dev_private; } ;
struct TYPE_5__ {int flags; scalar_t__ have_z_offset; } ;
typedef TYPE_1__ drm_radeon_private_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct drm_device*,TYPE_1__*,struct drm_file*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct drm_device*) ;
 int FUNC_5 (struct drm_device*,int ,int) ;
 int FUNC_6 (TYPE_1__*,int) ;

__attribute__((used)) static int FUNC_7(struct drm_device *VAR_3, struct drm_file *VAR_4)
{
 drm_radeon_private_t *VAR_5 = VAR_3->dev_private;

 if (!VAR_5) {
  FUNC_1("Called with no initialization\n");
  return -VAR_0;
 }

 FUNC_0("Starting radeon_do_resume_cp()\n");







 {

  FUNC_6(VAR_5, 1);
 }

 FUNC_3(VAR_5);
 FUNC_2(VAR_3, VAR_5, VAR_4);

 VAR_5->have_z_offset = 0;
 FUNC_4(VAR_3);
 FUNC_5(VAR_3, VAR_2, 1);

 FUNC_0("radeon_do_resume_cp() complete\n");

 return 0;
}
