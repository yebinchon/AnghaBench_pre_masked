
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pohmelfs_name {int sync_create_entry; scalar_t__ len; } ;
struct pohmelfs_inode {int sync_create_list; int total_len; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 struct pohmelfs_name* FUNC_1 (struct pohmelfs_inode*,struct pohmelfs_name*) ;

__attribute__((used)) static int FUNC_2(struct pohmelfs_inode *VAR_1, struct pohmelfs_name *VAR_2)
{
 struct pohmelfs_name *VAR_3;

 VAR_3 = FUNC_1(VAR_1, VAR_2);
 if (VAR_3)
  return -VAR_0;

 VAR_1->total_len += VAR_2->len;
 FUNC_0(&VAR_2->sync_create_entry, &VAR_1->sync_create_list);

 return 0;
}
