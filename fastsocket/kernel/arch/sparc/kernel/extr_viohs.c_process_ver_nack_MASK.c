
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vio_version {int minor; int major; } ;
struct vio_ver_info {scalar_t__ major; scalar_t__ minor; int dev_class; } ;
struct vio_driver_state {int dummy; } ;


 int VAR_0 ;
 struct vio_version* FUNC_0 (struct vio_driver_state*,scalar_t__) ;
 int FUNC_1 (struct vio_driver_state*) ;
 scalar_t__ FUNC_2 (struct vio_driver_state*,int ,int ) ;
 int FUNC_3 (int ,char*,scalar_t__,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_4(struct vio_driver_state *VAR_1,
       struct vio_ver_info *VAR_2)
{
 struct vio_version *VAR_3;

 FUNC_3(VAR_0, "GOT VERSION NACK maj[%u] min[%u] devclass[%u]\n",
        VAR_2->major, VAR_2->minor, VAR_2->dev_class);

 if (VAR_2->major == 0 && VAR_2->minor == 0)
  return FUNC_1(VAR_1);
 VAR_3 = FUNC_0(VAR_1, VAR_2->major);
 if (!VAR_3)
  return FUNC_1(VAR_1);

 if (FUNC_2(VAR_1, VAR_3->major, VAR_3->minor) < 0)
  return FUNC_1(VAR_1);

 return 0;
}
