
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ vnode_t ;
typedef TYPE_2__* buf_t ;
struct TYPE_5__ {scalar_t__ le_next; } ;
struct TYPE_6__ {scalar_t__ b_vp; TYPE_1__ b_vnbufs; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_1(buf_t VAR_1)
{



 if (VAR_1->b_vnbufs.le_next != VAR_0)
  FUNC_0(VAR_1);

 VAR_1->b_vp = (vnode_t)((void*)0);
}
