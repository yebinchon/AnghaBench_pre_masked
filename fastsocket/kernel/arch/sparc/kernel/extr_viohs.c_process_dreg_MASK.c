
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vio_driver_state {int hs_state; } ;
struct TYPE_2__ {int stype; } ;
struct vio_dring_register {TYPE_1__ tag; } ;


 int VAR_0 ;



 int FUNC_0 (struct vio_driver_state*) ;
 int FUNC_1 (struct vio_driver_state*,struct vio_dring_register*) ;
 int FUNC_2 (struct vio_driver_state*,struct vio_dring_register*) ;
 int FUNC_3 (struct vio_driver_state*,struct vio_dring_register*) ;

__attribute__((used)) static int FUNC_4(struct vio_driver_state *VAR_1,
   struct vio_dring_register *VAR_2)
{
 if (!(VAR_1->hs_state & VAR_0))
  return FUNC_0(VAR_1);

 switch (VAR_2->tag.stype) {
 case 129:
  return FUNC_2(VAR_1, VAR_2);

 case 130:
  return FUNC_1(VAR_1, VAR_2);

 case 128:
  return FUNC_3(VAR_1, VAR_2);

 default:
  return FUNC_0(VAR_1);
 }
}
