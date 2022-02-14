
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ dn_refcount; int dn_lflags; } ;
typedef TYPE_1__ devnode_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*) ;

void
FUNC_2(devnode_t *VAR_1)
{
 VAR_1->dn_refcount--;
 if (VAR_1->dn_refcount < 0) {
  FUNC_1("devfs_rele_node: devnode with a negative refcount!\n");
 } else if ((VAR_1->dn_refcount == 0) && (VAR_1->dn_lflags & VAR_0)) {
  FUNC_0(VAR_1);
 }

}
