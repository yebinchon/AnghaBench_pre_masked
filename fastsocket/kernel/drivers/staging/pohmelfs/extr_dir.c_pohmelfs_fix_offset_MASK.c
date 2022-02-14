
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pohmelfs_name {scalar_t__ len; } ;
struct pohmelfs_inode {int total_len; } ;



__attribute__((used)) static void FUNC_0(struct pohmelfs_inode *VAR_0, struct pohmelfs_name *VAR_1)
{
 VAR_0->total_len -= VAR_1->len;
}
