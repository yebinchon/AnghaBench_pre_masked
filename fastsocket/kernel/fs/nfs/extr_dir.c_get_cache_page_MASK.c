
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct page {int dummy; } ;
struct TYPE_12__ {int page_index; TYPE_4__* file; } ;
typedef TYPE_5__ nfs_readdir_descriptor_t ;
typedef int filler_t ;
struct TYPE_10__ {TYPE_2__* dentry; } ;
struct TYPE_11__ {TYPE_3__ f_path; } ;
struct TYPE_9__ {TYPE_1__* d_inode; } ;
struct TYPE_8__ {int i_mapping; } ;


 scalar_t__ VAR_0 ;
 struct page* FUNC_0 (int ,int ,int *,TYPE_5__*) ;

__attribute__((used)) static
struct page *FUNC_1(nfs_readdir_descriptor_t *VAR_1)
{
 return FUNC_0(VAR_1->file->f_path.dentry->d_inode->i_mapping,
   VAR_1->page_index, (filler_t *)VAR_0, VAR_1);
}
