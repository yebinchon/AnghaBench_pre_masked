
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netfs_trans {int page_num; int total_size; int dst_list; int dst_lock; int refcnt; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct netfs_trans *VAR_0, int VAR_1, int VAR_2)
{
 VAR_0->page_num = VAR_1;
 VAR_0->total_size = VAR_2;
 FUNC_1(&VAR_0->refcnt, 1);

 FUNC_2(&VAR_0->dst_lock);
 FUNC_0(&VAR_0->dst_list);
}
