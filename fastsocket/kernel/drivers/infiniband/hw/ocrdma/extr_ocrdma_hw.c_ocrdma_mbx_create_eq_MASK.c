
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int id; int created; int dma; } ;
struct ocrdma_eq {int vector; TYPE_3__ q; } ;
struct TYPE_5__ {int start_vector; } ;
struct TYPE_6__ {scalar_t__ dev_family; TYPE_1__ msix; int netdev; } ;
struct ocrdma_dev {TYPE_2__ nic_info; struct ocrdma_create_eq_rsp* mbx_cmd; } ;
struct TYPE_8__ {int rsvd_version; } ;
struct ocrdma_create_eq_rsp {int num_pages; int cnt; int vector_eqid; int * pa; int valid; TYPE_4__ req; } ;
struct ocrdma_create_eq_req {int num_pages; int cnt; int vector_eqid; int * pa; int valid; TYPE_4__ req; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,struct ocrdma_create_eq_rsp*,int,int *,int *) ;
 int FUNC_1 (struct ocrdma_create_eq_rsp*,int ,int) ;
 int FUNC_2 (struct ocrdma_dev*,struct ocrdma_eq*) ;
 int FUNC_3 (int *,int,int ,int ) ;
 int FUNC_4 (TYPE_4__*,int ,int ,int) ;

__attribute__((used)) static int FUNC_5(struct ocrdma_dev *VAR_6, struct ocrdma_eq *VAR_7)
{
 int VAR_8;
 struct ocrdma_create_eq_req *VAR_9 = VAR_6->mbx_cmd;
 struct ocrdma_create_eq_rsp *VAR_10 = VAR_6->mbx_cmd;

 FUNC_1(VAR_9, 0, sizeof(*VAR_9));
 FUNC_4(&VAR_9->req, VAR_0, VAR_4,
   sizeof(*VAR_9));
 if (VAR_6->nic_info.dev_family == VAR_3)
  VAR_9->req.rsvd_version = 0;
 else
  VAR_9->req.rsvd_version = 2;

 VAR_9->num_pages = 4;
 VAR_9->valid = VAR_2;
 VAR_9->cnt = 4 << VAR_1;

 FUNC_3(&VAR_9->pa[0], VAR_9->num_pages, VAR_7->q.dma,
        VAR_5);
 VAR_8 = FUNC_0(VAR_6->nic_info.netdev, VAR_9, sizeof(*VAR_9), ((void*)0),
     ((void*)0));
 if (!VAR_8) {
  VAR_7->q.id = VAR_10->vector_eqid & 0xffff;
  if (VAR_6->nic_info.dev_family == VAR_3)
   FUNC_2(VAR_6, VAR_7);
  else {
   VAR_7->vector = (VAR_10->vector_eqid >> 16) & 0xffff;
   VAR_6->nic_info.msix.start_vector += 1;
  }
  VAR_7->q.created = 1;
 }
 return VAR_8;
}
