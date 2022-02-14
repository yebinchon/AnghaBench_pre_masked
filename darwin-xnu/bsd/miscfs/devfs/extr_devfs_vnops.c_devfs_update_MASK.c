
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vnode {TYPE_1__* v_mount; } ;
struct timeval {int dummy; } ;
struct TYPE_6__ {scalar_t__ dn_update; scalar_t__ dn_change; scalar_t__ dn_access; } ;
typedef TYPE_2__ devnode_t ;
struct TYPE_5__ {int mnt_flag; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_2 (struct vnode*) ;
 int FUNC_3 (TYPE_2__*,struct timeval*,struct timeval*,struct timeval*,int) ;
 int FUNC_4 (struct timeval*) ;

__attribute__((used)) static int
FUNC_5(struct vnode *VAR_3, struct timeval *VAR_4, struct timeval *VAR_5)
{
 devnode_t * VAR_6;
 struct timeval VAR_7;

 VAR_6 = FUNC_2(VAR_3);
 if (VAR_3->v_mount->mnt_flag & VAR_2) {
         VAR_6->dn_access = 0;
         VAR_6->dn_change = 0;
         VAR_6->dn_update = 0;

  return (0);
 }

 FUNC_0();
 FUNC_4(&VAR_7);
 FUNC_3(VAR_6, VAR_4, VAR_5, &VAR_7, VAR_0 | VAR_1);
 FUNC_1();

 return (0);
}
