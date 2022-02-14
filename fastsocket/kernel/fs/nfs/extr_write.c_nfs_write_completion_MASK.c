
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int next; } ;
struct nfs_pgio_header {unsigned long good_bytes; int (* release ) (struct nfs_pgio_header*) ;int lseg; int verf; int flags; int error; TYPE_1__ pages; int inode; } ;
struct nfs_page {int wb_page; int wb_verf; int wb_context; scalar_t__ wb_bytes; } ;
struct nfs_commit_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct nfs_commit_info*,int ) ;
 int FUNC_5 (struct nfs_page*) ;
 struct nfs_page* FUNC_6 (int ) ;
 int FUNC_7 (struct nfs_page*) ;
 int FUNC_8 (struct nfs_page*,int ,struct nfs_commit_info*) ;
 int FUNC_9 (struct nfs_page*) ;
 int FUNC_10 (struct nfs_page*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct nfs_page*) ;
 int FUNC_13 (struct nfs_pgio_header*) ;
 scalar_t__ FUNC_14 (int ,int *) ;

__attribute__((used)) static void FUNC_15(struct nfs_pgio_header *VAR_4)
{
 struct nfs_commit_info VAR_5;
 unsigned long VAR_6 = 0;

 if (FUNC_14(VAR_3, &VAR_4->flags))
  goto out;
 FUNC_4(&VAR_5, VAR_4->inode);
 while (!FUNC_0(&VAR_4->pages)) {
  struct nfs_page *VAR_7 = FUNC_6(VAR_4->pages.next);

  VAR_6 += VAR_7->wb_bytes;
  FUNC_7(VAR_7);
  if (FUNC_14(VAR_0, &VAR_4->flags) &&
      (VAR_4->good_bytes < VAR_6)) {
   FUNC_11(VAR_7->wb_page);
   FUNC_2(VAR_7->wb_context, VAR_4->error);
   goto remove_req;
  }
  if (FUNC_14(VAR_2, &VAR_4->flags)) {
   FUNC_9(VAR_7);
   goto next;
  }
  if (FUNC_14(VAR_1, &VAR_4->flags)) {
   FUNC_1(&VAR_7->wb_verf, VAR_4->verf, sizeof(VAR_7->wb_verf));
   FUNC_8(VAR_7, VAR_4->lseg, &VAR_5);
   goto next;
  }
remove_req:
  FUNC_5(VAR_7);
next:
  FUNC_12(VAR_7);
  FUNC_3(VAR_7->wb_page);
  FUNC_10(VAR_7);
 }
out:
 VAR_4->release(VAR_4);
}
