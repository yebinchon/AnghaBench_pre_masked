
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct nfs_pgio_header {void (* release ) (struct nfs_pgio_header*) ;TYPE_3__* completion_ops; int dreq; int good_bytes; TYPE_4__* req; int io_start; int cred; int inode; } ;
struct TYPE_6__ {int next; } ;
struct nfs_pageio_descriptor {TYPE_3__* pg_completion_ops; int pg_dreq; int pg_count; int pg_inode; TYPE_1__ pg_list; } ;
struct TYPE_9__ {TYPE_2__* wb_context; } ;
struct TYPE_8__ {int (* init_hdr ) (struct nfs_pgio_header*) ;} ;
struct TYPE_7__ {int cred; } ;


 TYPE_4__* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (struct nfs_pgio_header*) ;

void FUNC_3(struct nfs_pageio_descriptor *VAR_0,
         struct nfs_pgio_header *VAR_1,
         void (*VAR_2)(struct nfs_pgio_header *VAR_3))
{
 VAR_1->req = FUNC_0(VAR_0->pg_list.next);
 VAR_1->inode = VAR_0->pg_inode;
 VAR_1->cred = VAR_1->req->wb_context->cred;
 VAR_1->io_start = FUNC_1(VAR_1->req);
 VAR_1->good_bytes = VAR_0->pg_count;
 VAR_1->dreq = VAR_0->pg_dreq;
 VAR_1->release = VAR_2;
 VAR_1->completion_ops = VAR_0->pg_completion_ops;
 if (VAR_1->completion_ops->init_hdr)
  VAR_1->completion_ops->init_hdr(VAR_1);
}
