
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netfs_trans_dst {struct netfs_state* state; } ;
struct netfs_state {int trans_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct netfs_trans_dst*,struct netfs_state*) ;

__attribute__((used)) static int FUNC_3(struct netfs_trans_dst *VAR_0)
{
 int VAR_1;
 struct netfs_state *VAR_2 = VAR_0->state;

 FUNC_0(&VAR_2->trans_lock);
 VAR_1 = FUNC_2(VAR_0, VAR_2);
 FUNC_1(&VAR_2->trans_lock);

 return VAR_1;
}
