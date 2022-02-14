
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {TYPE_1__* mapping; } ;
struct cifsInodeInfo {int vfs_inode; } ;
struct TYPE_2__ {int host; } ;


 struct cifsInodeInfo* FUNC_0 (int ) ;
 int FUNC_1 (struct page*,int *) ;

__attribute__((used)) static void FUNC_2(struct page *VAR_0, unsigned long VAR_1)
{
 struct cifsInodeInfo *VAR_2 = FUNC_0(VAR_0->mapping->host);

 if (VAR_1 == 0)
  FUNC_1(VAR_0, &VAR_2->vfs_inode);
}
