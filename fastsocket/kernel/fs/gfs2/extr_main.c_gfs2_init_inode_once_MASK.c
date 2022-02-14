
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gfs2_inode {int * i_hash_cache; int * i_res; int i_trunc_list; int i_rw_mutex; int i_inode; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(void *VAR_0)
{
 struct gfs2_inode *VAR_1 = VAR_0;

 FUNC_2(&VAR_1->i_inode);
 FUNC_1(&VAR_1->i_rw_mutex);
 FUNC_0(&VAR_1->i_trunc_list);
 VAR_1->i_res = ((void*)0);
 VAR_1->i_hash_cache = ((void*)0);
}
