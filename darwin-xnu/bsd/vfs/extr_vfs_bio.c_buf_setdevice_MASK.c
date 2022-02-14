
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* vnode_t ;
typedef int errno_t ;
typedef TYPE_2__* buf_t ;
struct TYPE_6__ {int b_dev; } ;
struct TYPE_5__ {scalar_t__ v_type; int v_rdev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

errno_t
FUNC_0(buf_t VAR_3, vnode_t VAR_4) {

        if ((VAR_4->v_type != VAR_1) && (VAR_4->v_type != VAR_2))
         return VAR_0;
 VAR_3->b_dev = VAR_4->v_rdev;

 return 0;
}
