
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mutex; } ;
struct nouveau_drm {TYPE_1__ client; } ;
struct nouveau_cli {int head; scalar_t__ abi16; } ;
struct drm_file {int dummy; } ;
struct drm_device {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__) ;
 struct nouveau_cli* FUNC_4 (struct drm_file*) ;
 struct nouveau_drm* FUNC_5 (struct drm_device*) ;

__attribute__((used)) static void
FUNC_6(struct drm_device *VAR_0, struct drm_file *VAR_1)
{
 struct nouveau_cli *VAR_2 = FUNC_4(VAR_1);
 struct nouveau_drm *VAR_3 = FUNC_5(VAR_0);

 if (VAR_2->abi16)
  FUNC_3(VAR_2->abi16);

 FUNC_1(&VAR_3->client.mutex);
 FUNC_0(&VAR_2->head);
 FUNC_2(&VAR_3->client.mutex);
}
