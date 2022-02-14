
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct page {TYPE_4__* mapping; } ;
struct nfs_page {struct nfs_open_context* wb_context; struct page* wb_page; struct nfs_lock_context* wb_lock_context; } ;
struct nfs_open_context {TYPE_2__* dentry; } ;
struct TYPE_8__ {scalar_t__ l_owner; scalar_t__ l_pid; } ;
struct nfs_lock_context {TYPE_3__ lockowner; } ;
struct file {int dummy; } ;
struct TYPE_10__ {scalar_t__ files; scalar_t__ tgid; } ;
struct TYPE_9__ {int host; } ;
struct TYPE_7__ {TYPE_1__* d_inode; } ;
struct TYPE_6__ {int * i_flock; } ;


 TYPE_5__* VAR_0 ;
 struct nfs_open_context* FUNC_0 (struct file*) ;
 struct nfs_page* FUNC_1 (struct page*) ;
 int FUNC_2 (struct nfs_page*) ;
 int FUNC_3 (int ,struct page*) ;

int FUNC_4(struct file *VAR_1, struct page *VAR_2)
{
 struct nfs_open_context *VAR_3 = FUNC_0(VAR_1);
 struct nfs_lock_context *VAR_4;
 struct nfs_page *VAR_5;
 int VAR_6, VAR_7;
 do {
  VAR_5 = FUNC_1(VAR_2);
  if (VAR_5 == ((void*)0))
   return 0;
  VAR_4 = VAR_5->wb_lock_context;
  VAR_6 = VAR_5->wb_page != VAR_2 || VAR_5->wb_context != VAR_3;
  if (VAR_4 && VAR_3->dentry->d_inode->i_flock != ((void*)0)) {
   VAR_6 |= VAR_4->lockowner.l_owner != VAR_0->files
    || VAR_4->lockowner.l_pid != VAR_0->tgid;
  }
  FUNC_2(VAR_5);
  if (!VAR_6)
   return 0;
  VAR_7 = FUNC_3(VAR_2->mapping->host, VAR_2);
 } while (VAR_7 == 0);
 return VAR_7;
}
