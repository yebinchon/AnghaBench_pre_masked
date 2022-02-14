
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int tk_status; } ;
struct nfs_write_data {TYPE_1__ task; struct nfs_pgio_header* header; } ;
struct nfs_pgio_header {int completion_ops; int pages; int inode; int flags; int pnfs_error; } ;
struct TYPE_8__ {int flags; } ;
struct TYPE_7__ {TYPE_2__* pnfs_curr_ld; } ;
struct TYPE_6__ {int flags; } ;


 TYPE_4__* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int *,int ) ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static void FUNC_7(struct nfs_write_data *VAR_3)
{
 struct nfs_pgio_header *VAR_4 = VAR_3->header;

 FUNC_3("pnfs write error = %d\n", VAR_4->pnfs_error);
 if (FUNC_1(VAR_4->inode)->pnfs_curr_ld->flags &
     VAR_2) {
  FUNC_2(VAR_0, &FUNC_0(VAR_4->inode)->flags);
  FUNC_4(VAR_4->inode);
 }
 if (!FUNC_6(VAR_1, &VAR_4->flags))
  VAR_3->task.tk_status = FUNC_5(VAR_4->inode,
       &VAR_4->pages,
       VAR_4->completion_ops);
}
