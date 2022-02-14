
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {unsigned int count; scalar_t__ eof; int * fattr; } ;
struct TYPE_7__ {unsigned int count; int lock_context; int context; int pages; scalar_t__ pgbase; scalar_t__ offset; int fh; } ;
struct TYPE_6__ {int pagevec; } ;
struct nfs_read_data {int fattr; TYPE_4__ res; TYPE_3__ args; TYPE_2__ pages; TYPE_1__* header; } ;
struct nfs_page {int wb_lock_context; int wb_context; scalar_t__ wb_pgbase; } ;
struct TYPE_5__ {int inode; struct nfs_page* req; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct nfs_page*) ;

__attribute__((used)) static void FUNC_4(struct nfs_read_data *VAR_0,
  unsigned int VAR_1, unsigned int VAR_2)
{
 struct nfs_page *VAR_3 = VAR_0->header->req;

 VAR_0->args.fh = FUNC_0(VAR_0->header->inode);
 VAR_0->args.offset = FUNC_3(VAR_3) + VAR_2;
 VAR_0->args.pgbase = VAR_3->wb_pgbase + VAR_2;
 VAR_0->args.pages = VAR_0->pages.pagevec;
 VAR_0->args.count = VAR_1;
 VAR_0->args.context = FUNC_1(VAR_3->wb_context);
 VAR_0->args.lock_context = VAR_3->wb_lock_context;

 VAR_0->res.fattr = &VAR_0->fattr;
 VAR_0->res.count = VAR_1;
 VAR_0->res.eof = 0;
 FUNC_2(&VAR_0->fattr);
}
