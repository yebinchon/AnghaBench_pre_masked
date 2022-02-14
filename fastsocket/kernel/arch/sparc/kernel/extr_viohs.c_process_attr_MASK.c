
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vio_driver_state {int hs_state; int dr_state; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* handle_attr ) (struct vio_driver_state*,void*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct vio_driver_state*) ;
 scalar_t__ FUNC_1 (struct vio_driver_state*) ;
 int FUNC_2 (struct vio_driver_state*,void*) ;

__attribute__((used)) static int FUNC_3(struct vio_driver_state *VAR_4, void *VAR_5)
{
 int VAR_6;

 if (!(VAR_4->hs_state & VAR_1))
  return FUNC_0(VAR_4);

 VAR_6 = VAR_4->ops->handle_attr(VAR_4, VAR_5);
 if (VAR_6 < 0) {
  return FUNC_0(VAR_4);
 } else {
  VAR_4->hs_state |= VAR_2;

  if ((VAR_4->dr_state & VAR_0) &&
      !(VAR_4->hs_state & VAR_3)) {
   if (FUNC_1(VAR_4) < 0)
    return FUNC_0(VAR_4);

   VAR_4->hs_state |= VAR_3;
  }
 }
 return 0;
}
