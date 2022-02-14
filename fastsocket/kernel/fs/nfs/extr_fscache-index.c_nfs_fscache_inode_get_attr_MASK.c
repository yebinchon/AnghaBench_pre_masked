
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_2__ {int i_size; } ;
struct nfs_inode {TYPE_1__ vfs_inode; } ;



__attribute__((used)) static void FUNC_0(const void *VAR_0,
           uint64_t *VAR_1)
{
 const struct nfs_inode *VAR_2 = VAR_0;

 *VAR_1 = VAR_2->vfs_inode.i_size;
}
