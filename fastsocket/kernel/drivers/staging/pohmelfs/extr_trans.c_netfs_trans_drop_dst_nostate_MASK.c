
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netfs_trans_dst {int trans_entry; struct netfs_trans* trans; } ;
struct netfs_trans {int dst_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct netfs_trans_dst*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct netfs_trans_dst *VAR_0)
{
 struct netfs_trans *VAR_1 = VAR_0->trans;

 FUNC_2(&VAR_1->dst_lock);
 FUNC_0(&VAR_0->trans_entry);
 FUNC_3(&VAR_1->dst_lock);

 FUNC_1(VAR_0);
}
