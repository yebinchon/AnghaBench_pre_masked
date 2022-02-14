
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uresp ;
struct TYPE_5__ {int max_cnt; int len; int pa; int dbid; } ;
struct ocrdma_srq {TYPE_4__* pd; TYPE_3__* dev; TYPE_1__ rq; } ;
struct ocrdma_create_srq_uresp {int num_rq_pages; int db_page_size; int db_shift; int rq_page_size; int * rq_page_addr; int db_rq_offset; int num_rqe_allocated; scalar_t__ db_page_addr; int rq_dbid; } ;
struct ib_udata {int dummy; } ;
struct TYPE_8__ {int id; int uctx; } ;
struct TYPE_6__ {int db_page_size; scalar_t__ dev_family; scalar_t__ unmapped_db; } ;
struct TYPE_7__ {TYPE_2__ nic_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct ib_udata*,struct ocrdma_create_srq_uresp*,int) ;
 int FUNC_1 (struct ocrdma_create_srq_uresp*,int ,int) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct ocrdma_srq *VAR_3, struct ib_udata *VAR_4)
{
 int VAR_5;
 struct ocrdma_create_srq_uresp VAR_6;

 FUNC_1(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.rq_dbid = VAR_3->rq.dbid;
 VAR_6.num_rq_pages = 1;
 VAR_6.rq_page_addr[0] = VAR_3->rq.pa;
 VAR_6.rq_page_size = VAR_3->rq.len;
 VAR_6.db_page_addr = VAR_3->dev->nic_info.unmapped_db +
     (VAR_3->pd->id * VAR_3->dev->nic_info.db_page_size);
 VAR_6.db_page_size = VAR_3->dev->nic_info.db_page_size;
 VAR_6.num_rqe_allocated = VAR_3->rq.max_cnt;
 if (VAR_3->dev->nic_info.dev_family == VAR_2) {
  VAR_6.db_rq_offset = VAR_0;
  VAR_6.db_shift = 24;
 } else {
  VAR_6.db_rq_offset = VAR_1;
  VAR_6.db_shift = 16;
 }

 VAR_5 = FUNC_0(VAR_4, &VAR_6, sizeof(VAR_6));
 if (VAR_5)
  return VAR_5;
 VAR_5 = FUNC_2(VAR_3->pd->uctx, VAR_6.rq_page_addr[0],
     VAR_6.rq_page_size);
 if (VAR_5)
  return VAR_5;
 return VAR_5;
}
