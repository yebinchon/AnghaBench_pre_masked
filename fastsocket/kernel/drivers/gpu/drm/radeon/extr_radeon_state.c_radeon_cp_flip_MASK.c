
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct drm_file {int master; } ;
struct drm_device {TYPE_1__* dev_private; } ;
struct TYPE_3__ {int page_flipping; } ;
typedef TYPE_1__ drm_radeon_private_t ;


 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct drm_device*,struct drm_file*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct drm_device*,int ) ;
 int FUNC_5 (struct drm_device*,int ) ;

__attribute__((used)) static int FUNC_6(struct drm_device *VAR_0, void *VAR_1, struct drm_file *VAR_2)
{
 drm_radeon_private_t *VAR_3 = VAR_0->dev_private;
 FUNC_1("\n");

 FUNC_2(VAR_0, VAR_2);

 FUNC_3(VAR_3);

 if (!VAR_3->page_flipping)
  FUNC_5(VAR_0, VAR_2->master);

 FUNC_4(VAR_0, VAR_2->master);

 FUNC_0();
 return 0;
}
