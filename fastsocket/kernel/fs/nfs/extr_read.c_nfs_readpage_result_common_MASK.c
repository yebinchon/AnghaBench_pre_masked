
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rpc_task {int tk_status; } ;
struct TYPE_4__ {scalar_t__ offset; scalar_t__ count; } ;
struct TYPE_3__ {scalar_t__ count; scalar_t__ eof; } ;
struct nfs_read_data {TYPE_2__ args; TYPE_1__ res; struct nfs_pgio_header* header; } ;
struct nfs_pgio_header {scalar_t__ io_start; scalar_t__ good_bytes; int lock; int flags; } ;
typedef scalar_t__ loff_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (struct rpc_task*,struct nfs_read_data*) ;
 int FUNC_2 (struct rpc_task*,struct nfs_read_data*) ;
 int FUNC_3 (struct nfs_pgio_header*,int ,scalar_t__) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct rpc_task *VAR_2, void *VAR_3)
{
 struct nfs_read_data *VAR_4 = VAR_3;
 struct nfs_pgio_header *VAR_5 = VAR_4->header;


 if (FUNC_1(VAR_2, VAR_4) != 0)
  return;
 if (VAR_2->tk_status < 0)
  FUNC_3(VAR_5, VAR_2->tk_status, VAR_4->args.offset);
 else if (VAR_4->res.eof) {
  loff_t VAR_6;

  VAR_6 = VAR_4->args.offset + VAR_4->res.count;
  FUNC_5(&VAR_5->lock);
  if (VAR_6 < VAR_5->io_start + VAR_5->good_bytes) {
   FUNC_4(VAR_0, &VAR_5->flags);
   FUNC_0(VAR_1, &VAR_5->flags);
   VAR_5->good_bytes = VAR_6 - VAR_5->io_start;
  }
  FUNC_6(&VAR_5->lock);
 } else if (VAR_4->res.count != VAR_4->args.count)
  FUNC_2(VAR_2, VAR_4);
}
