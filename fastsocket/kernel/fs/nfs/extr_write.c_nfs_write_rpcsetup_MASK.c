
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {unsigned int count; int * verf; int * fattr; } ;
struct TYPE_7__ {unsigned int count; int stable; int lock_context; int context; int pages; scalar_t__ pgbase; scalar_t__ offset; int fh; } ;
struct TYPE_6__ {int pagevec; } ;
struct nfs_write_data {int fattr; int verf; TYPE_4__ res; TYPE_3__ args; TYPE_2__ pages; scalar_t__ mds_offset; TYPE_1__* header; } ;
struct nfs_page {int wb_lock_context; int wb_context; scalar_t__ wb_pgbase; } ;
struct nfs_commit_info {int dummy; } ;
struct TYPE_5__ {int inode; struct nfs_page* req; } ;



 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct nfs_commit_info*) ;
 scalar_t__ FUNC_4 (struct nfs_page*) ;

__attribute__((used)) static void FUNC_5(struct nfs_write_data *VAR_3,
  unsigned int VAR_4, unsigned int VAR_5,
  int VAR_6, struct nfs_commit_info *VAR_7)
{
 struct nfs_page *VAR_8 = VAR_3->header->req;




 VAR_3->args.fh = FUNC_0(VAR_3->header->inode);
 VAR_3->args.offset = FUNC_4(VAR_8) + VAR_5;

 VAR_3->mds_offset = VAR_3->args.offset;
 VAR_3->args.pgbase = VAR_8->wb_pgbase + VAR_5;
 VAR_3->args.pages = VAR_3->pages.pagevec;
 VAR_3->args.count = VAR_4;
 VAR_3->args.context = FUNC_1(VAR_8->wb_context);
 VAR_3->args.lock_context = VAR_8->wb_lock_context;
 VAR_3->args.stable = VAR_2;
 switch (VAR_6 & (VAR_0 | 128)) {
 case 0:
  break;
 case 128:
  if (FUNC_3(VAR_7))
   break;
 default:
  VAR_3->args.stable = VAR_1;
 }

 VAR_3->res.fattr = &VAR_3->fattr;
 VAR_3->res.count = VAR_4;
 VAR_3->res.verf = &VAR_3->verf;
 FUNC_2(&VAR_3->fattr);
}
