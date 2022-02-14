
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vnop_read_args {TYPE_1__* a_vp; } ;
struct TYPE_2__ {scalar_t__ v_type; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*) ;

int
FUNC_2(struct vnop_read_args *VAR_2)
{

 if (FUNC_0(VAR_2->a_vp))
  FUNC_1("dead_read: lock");



 if (VAR_2->a_vp->v_type != VAR_1)
  return (VAR_0);
 return (0);
}
