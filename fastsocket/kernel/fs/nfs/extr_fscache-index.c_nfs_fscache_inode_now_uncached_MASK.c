
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pagevec {int nr; TYPE_2__** pages; } ;
struct TYPE_3__ {int i_mapping; } ;
struct nfs_inode {TYPE_1__ vfs_inode; } ;
typedef scalar_t__ pgoff_t ;
struct TYPE_4__ {scalar_t__ index; } ;


 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (char*,struct nfs_inode*) ;
 scalar_t__ FUNC_3 (struct pagevec*) ;
 int FUNC_4 (struct pagevec*,int ) ;
 int FUNC_5 (struct pagevec*,int ,scalar_t__,scalar_t__) ;
 int FUNC_6 (struct pagevec*) ;

__attribute__((used)) static void FUNC_7(void *VAR_1)
{
 struct nfs_inode *VAR_2 = VAR_1;
 struct pagevec VAR_3;
 pgoff_t VAR_4;
 int VAR_5, VAR_6;

 FUNC_4(&VAR_3, 0);
 VAR_4 = 0;

 FUNC_2("NFS: nfs_inode_now_uncached: nfs_inode 0x%p\n", VAR_2);

 for (;;) {

  VAR_6 = FUNC_5(&VAR_3,
       VAR_2->vfs_inode.i_mapping,
       VAR_4,
       VAR_0 - FUNC_3(&VAR_3));
  if (!VAR_6)
   break;

  for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++)
   FUNC_0(VAR_3.pages[VAR_5]);

  VAR_4 = VAR_3.pages[VAR_6 - 1]->index + 1;

  VAR_3.nr = VAR_6;
  FUNC_6(&VAR_3);
  FUNC_1();
 }
}
