
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* vnode_t ;
typedef TYPE_2__* buf_t ;
struct TYPE_7__ {int b_dev; TYPE_1__* b_vp; } ;
struct TYPE_6__ {scalar_t__ v_type; int v_cleanblkhd; int v_rdev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_2__*,int *) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void
FUNC_2(vnode_t VAR_3, buf_t VAR_4)
{

 if (VAR_4->b_vp != VAR_3)
  FUNC_1("bgetvp_locked: not free");

 if (VAR_3->v_type == VAR_1 || VAR_3->v_type == VAR_2)
  VAR_4->b_dev = VAR_3->v_rdev;
 else
  VAR_4->b_dev = VAR_0;



 FUNC_0(VAR_4, &VAR_3->v_cleanblkhd);
}
