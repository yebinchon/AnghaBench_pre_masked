
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct islpci_acl {int policy; scalar_t__ size; int mac_list; int lock; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;

void
FUNC_2(struct islpci_acl *VAR_1)
{
 FUNC_1(&VAR_1->lock);
 FUNC_0(&VAR_1->mac_list);
 VAR_1->size = 0;
 VAR_1->policy = VAR_0;
}
