
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct vio_msg_tag {int stype_env; } ;
struct vio_driver_state {int hs_state; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* handshake_complete ) (struct vio_driver_state*) ;} ;





 int VAR_0 ;


 int FUNC_0 (struct vio_driver_state*,void*) ;
 int FUNC_1 (struct vio_driver_state*,void*) ;
 int FUNC_2 (struct vio_driver_state*,void*) ;
 int FUNC_3 (struct vio_driver_state*,void*) ;
 int FUNC_4 (struct vio_driver_state*,void*) ;
 int FUNC_5 (struct vio_driver_state*,void*) ;
 int FUNC_6 (struct vio_driver_state*) ;

int FUNC_7(struct vio_driver_state *VAR_1, void *VAR_2)
{
 struct vio_msg_tag *VAR_3 = VAR_2;
 u8 VAR_4 = VAR_1->hs_state;
 int VAR_5;

 switch (VAR_3->stype_env) {
 case 128:
  VAR_5 = FUNC_5(VAR_1, VAR_2);
  break;

 case 132:
  VAR_5 = FUNC_0(VAR_1, VAR_2);
  break;

 case 131:
  VAR_5 = FUNC_1(VAR_1, VAR_2);
  break;

 case 130:
  VAR_5 = FUNC_2(VAR_1, VAR_2);
  break;

 case 129:
  VAR_5 = FUNC_3(VAR_1, VAR_2);
  break;

 default:
  VAR_5 = FUNC_4(VAR_1, VAR_2);
  break;
 }
 if (!VAR_5 &&
     VAR_1->hs_state != VAR_4 &&
     (VAR_1->hs_state & VAR_0))
  VAR_1->ops->handshake_complete(VAR_1);

 return VAR_5;
}
