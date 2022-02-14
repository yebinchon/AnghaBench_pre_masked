
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vio_driver_state {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* send_attr ) (struct vio_driver_state*) ;} ;


 int FUNC_0 (struct vio_driver_state*) ;

__attribute__((used)) static int FUNC_1(struct vio_driver_state *VAR_0)
{
 return VAR_0->ops->send_attr(VAR_0);
}
