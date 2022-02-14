
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct drm_file {int dummy; } ;
struct drm_device {int * dev_private; } ;
typedef int drm_radeon_private_t ;
struct TYPE_4__ {int buffer; } ;
typedef TYPE_1__ drm_radeon_kcmd_buffer_t ;


 int FUNC_0 () ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,unsigned int) ;
 int VAR_0 ;
 int FUNC_5 (int *,struct drm_file*,TYPE_1__*,unsigned int*) ;

__attribute__((used)) static int FUNC_6(struct drm_device * VAR_1,
          struct drm_file *VAR_2,
          drm_radeon_kcmd_buffer_t *VAR_3)
{
 drm_radeon_private_t *VAR_4 = VAR_1->dev_private;
 unsigned int VAR_5;
 int VAR_6;
 VAR_0;

 FUNC_2("\n");

 if ((VAR_6 = FUNC_5(VAR_4, VAR_2,
        VAR_3, &VAR_5))) {
  FUNC_3("Packet verification failed\n");
  return VAR_6;
 }

 FUNC_1(VAR_5);
 FUNC_4(VAR_3->buffer, VAR_5);
 FUNC_0();

 return 0;
}
