
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef void* u64 ;
typedef int u32 ;
struct ocrdma_pd {int id; struct ocrdma_dev* dev; } ;
struct TYPE_9__ {int remote_wr; int remote_rd; int local_wr; int local_rd; int remote_atomic; int lkey; void* len; void* va; int fbo; int pbe_size; struct ocrdma_dev* dev; } ;
struct ib_mr {int rkey; int lkey; } ;
struct ocrdma_mr {TYPE_2__ hwmr; struct ib_mr ibmr; struct ocrdma_pd* pd; TYPE_5__* umem; } ;
struct ocrdma_dev {int dummy; } ;
struct ib_udata {int dummy; } ;
struct ib_pd {TYPE_1__* uobject; } ;
struct TYPE_10__ {int offset; int page_size; } ;
struct TYPE_8__ {int context; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ib_mr* FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (struct ocrdma_dev*,struct ocrdma_mr*,int ) ;
 struct ocrdma_pd* FUNC_3 (struct ib_pd*) ;
 TYPE_5__* FUNC_4 (int ,void*,void*,int,int ) ;
 int FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (struct ocrdma_mr*) ;
 struct ocrdma_mr* FUNC_7 (int,int ) ;
 int FUNC_8 (struct ocrdma_dev*,TYPE_2__*) ;
 int FUNC_9 (struct ocrdma_dev*,TYPE_2__*) ;
 int FUNC_10 (struct ocrdma_mr*,int ) ;
 int FUNC_11 (struct ocrdma_dev*,TYPE_2__*,int ,int) ;

struct ib_mr *FUNC_12(struct ib_pd *VAR_8, u64 VAR_9, u64 VAR_10,
     u64 VAR_11, int VAR_12, struct ib_udata *VAR_13)
{
 int VAR_14 = -VAR_2;
 struct ocrdma_dev *VAR_15;
 struct ocrdma_mr *VAR_16;
 struct ocrdma_pd *VAR_17;
 u32 VAR_18;

 VAR_17 = FUNC_3(VAR_8);
 VAR_15 = VAR_17->dev;

 if (VAR_12 & VAR_7 && !(VAR_12 & VAR_4))
  return FUNC_0(-VAR_1);

 VAR_16 = FUNC_7(sizeof(*VAR_16), VAR_3);
 if (!VAR_16)
  return FUNC_0(VAR_14);
 VAR_16->hwmr.dev = VAR_15;
 VAR_16->umem = FUNC_4(VAR_8->uobject->context, VAR_9, VAR_10, VAR_12, 0);
 if (FUNC_1(VAR_16->umem)) {
  VAR_14 = -VAR_0;
  goto umem_err;
 }
 VAR_18 = FUNC_5(VAR_16->umem);
 VAR_14 = FUNC_10(VAR_16, VAR_18);
 if (VAR_14)
  goto umem_err;

 VAR_16->hwmr.pbe_size = VAR_16->umem->page_size;
 VAR_16->hwmr.fbo = VAR_16->umem->offset;
 VAR_16->hwmr.va = VAR_11;
 VAR_16->hwmr.len = VAR_10;
 VAR_16->hwmr.remote_wr = (VAR_12 & VAR_7) ? 1 : 0;
 VAR_16->hwmr.remote_rd = (VAR_12 & VAR_6) ? 1 : 0;
 VAR_16->hwmr.local_wr = (VAR_12 & VAR_4) ? 1 : 0;
 VAR_16->hwmr.local_rd = 1;
 VAR_16->hwmr.remote_atomic = (VAR_12 & VAR_5) ? 1 : 0;
 VAR_14 = FUNC_8(VAR_15, &VAR_16->hwmr);
 if (VAR_14)
  goto umem_err;
 FUNC_2(VAR_15, VAR_16, VAR_18);
 VAR_14 = FUNC_11(VAR_15, &VAR_16->hwmr, VAR_17->id, VAR_12);
 if (VAR_14)
  goto mbx_err;
 VAR_16->pd = VAR_17;
 VAR_16->ibmr.lkey = VAR_16->hwmr.lkey;
 if (VAR_16->hwmr.remote_wr || VAR_16->hwmr.remote_rd)
  VAR_16->ibmr.rkey = VAR_16->hwmr.lkey;

 return &VAR_16->ibmr;

mbx_err:
 FUNC_9(VAR_15, &VAR_16->hwmr);
umem_err:
 FUNC_6(VAR_16);
 return FUNC_0(VAR_14);
}
