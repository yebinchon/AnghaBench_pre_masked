
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int stype; } ;
struct vio_ver_info {TYPE_1__ tag; } ;
struct vio_driver_state {int dummy; } ;





 int FUNC_0 (struct vio_driver_state*) ;
 int FUNC_1 (struct vio_driver_state*,struct vio_ver_info*) ;
 int FUNC_2 (struct vio_driver_state*,struct vio_ver_info*) ;
 int FUNC_3 (struct vio_driver_state*,struct vio_ver_info*) ;

__attribute__((used)) static int FUNC_4(struct vio_driver_state *VAR_0, struct vio_ver_info *VAR_1)
{
 switch (VAR_1->tag.stype) {
 case 129:
  return FUNC_2(VAR_0, VAR_1);

 case 130:
  return FUNC_1(VAR_0, VAR_1);

 case 128:
  return FUNC_3(VAR_0, VAR_1);

 default:
  return FUNC_0(VAR_0);
 };
}
