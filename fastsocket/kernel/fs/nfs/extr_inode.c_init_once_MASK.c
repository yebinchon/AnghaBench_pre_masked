
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int rpcs_out; scalar_t__ ncommit; int list; } ;
struct nfs_inode {int waitqueue; int silly_list; int silly_count; TYPE_1__ commit_info; scalar_t__ npages; int access_cache_inode_lru; int access_cache_entry_lru; int open_files; int vfs_inode; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct nfs_inode*) ;

__attribute__((used)) static void FUNC_6(void *VAR_0)
{
 struct nfs_inode *VAR_1 = (struct nfs_inode *) VAR_0;

 FUNC_4(&VAR_1->vfs_inode);
 FUNC_1(&VAR_1->open_files);
 FUNC_1(&VAR_1->access_cache_entry_lru);
 FUNC_1(&VAR_1->access_cache_inode_lru);
 FUNC_1(&VAR_1->commit_info.list);
 VAR_1->npages = 0;
 VAR_1->commit_info.ncommit = 0;
 FUNC_2(&VAR_1->commit_info.rpcs_out, 0);
 FUNC_2(&VAR_1->silly_count, 1);
 FUNC_0(&VAR_1->silly_list);
 FUNC_3(&VAR_1->waitqueue);
 FUNC_5(VAR_1);
}
