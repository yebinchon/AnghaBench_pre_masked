
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct pagevec {int nr; TYPE_4__** pages; } ;
struct TYPE_7__ {int i_mapping; } ;
struct TYPE_6__ {int data_version; } ;
struct TYPE_5__ {int unique; int vnode; } ;
struct afs_vnode {TYPE_3__ vfs_inode; TYPE_2__ status; TYPE_1__ fid; } ;
typedef scalar_t__ pgoff_t ;
struct TYPE_8__ {scalar_t__ index; } ;


 int FUNC_0 (TYPE_4__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (char*,int ,int ,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (struct pagevec*) ;
 int FUNC_5 (struct pagevec*,int ) ;
 int FUNC_6 (struct pagevec*,int ,scalar_t__,scalar_t__) ;
 int FUNC_7 (struct pagevec*) ;

__attribute__((used)) static void FUNC_8(void *VAR_1)
{
 struct afs_vnode *VAR_2 = VAR_1;
 struct pagevec VAR_3;
 pgoff_t VAR_4;
 int VAR_5, VAR_6;

 FUNC_1("{%x,%x,%Lx}",
        VAR_2->fid.vnode, VAR_2->fid.unique, VAR_2->status.data_version);

 FUNC_5(&VAR_3, 0);
 VAR_4 = 0;

 for (;;) {

  VAR_6 = FUNC_6(&VAR_3, VAR_2->vfs_inode.i_mapping,
       VAR_4,
       VAR_0 - FUNC_4(&VAR_3));
  if (!VAR_6)
   break;

  for (VAR_5 = 0; VAR_5 < VAR_6; VAR_5++)
   FUNC_0(VAR_3.pages[VAR_5]);

  VAR_4 = VAR_3.pages[VAR_6 - 1]->index + 1;

  VAR_3.nr = VAR_6;
  FUNC_7(&VAR_3);
  FUNC_3();
 }

 FUNC_2("");
}
