
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_device {TYPE_1__* dev_private; } ;
struct TYPE_2__ {int swi_emitted; } ;
typedef TYPE_1__ drm_radeon_private_t ;


 int FUNC_0 () ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int *) ;
 unsigned int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct drm_device * VAR_4)
{
 drm_radeon_private_t *VAR_5 = VAR_4->dev_private;
 unsigned int VAR_6;
 VAR_3;

 FUNC_4(&VAR_5->swi_emitted);
 VAR_6 = FUNC_5(&VAR_5->swi_emitted);

 FUNC_1(4);
 FUNC_3(VAR_1, VAR_6);
 FUNC_3(VAR_0, VAR_2);
 FUNC_0();
 FUNC_2();

 return VAR_6;
}
