
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct cnic_local {int max_cid_space; int ctx_blks; int ctx_blk_size; int ctx_align; int cids_per_blk; TYPE_3__* ctx_arr; TYPE_1__* ethdev; } ;
struct cnic_dev {TYPE_2__* pcidev; int netdev; struct cnic_local* cnic_priv; } ;
struct cnic_ctx {int dummy; } ;
struct bnx2x {int dummy; } ;
struct TYPE_6__ {int mapping; int * ctx; } ;
struct TYPE_5__ {int dev; } ;
struct TYPE_4__ {int ctx_blk_size; int ctx_tbl_len; } ;


 int VAR_0 ;
 int FUNC_0 (struct bnx2x*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct cnic_dev*) ;
 int * FUNC_2 (int *,int,int*,int ) ;
 TYPE_3__* FUNC_3 (int,int,int ) ;
 struct bnx2x* FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct cnic_dev *VAR_3)
{
 struct cnic_local *VAR_4 = VAR_3->cnic_priv;
 struct bnx2x *VAR_5 = FUNC_4(VAR_3->netdev);
 int VAR_6 = VAR_4->ethdev->ctx_blk_size;
 int VAR_7, VAR_8, VAR_9;

 VAR_7 = VAR_0 * VAR_4->max_cid_space;
 VAR_8 = VAR_7 / VAR_6;
 if (VAR_7 % VAR_6)
  VAR_8++;

 if (VAR_8 > VAR_4->ethdev->ctx_tbl_len)
  return -VAR_1;

 VAR_4->ctx_arr = FUNC_3(VAR_8, sizeof(struct cnic_ctx), VAR_2);
 if (VAR_4->ctx_arr == ((void*)0))
  return -VAR_1;

 VAR_4->ctx_blks = VAR_8;
 VAR_4->ctx_blk_size = VAR_6;
 if (!FUNC_0(VAR_5))
  VAR_4->ctx_align = 0;
 else
  VAR_4->ctx_align = VAR_6;

 VAR_4->cids_per_blk = VAR_6 / VAR_0;

 for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {
  VAR_4->ctx_arr[VAR_9].ctx =
   FUNC_2(&VAR_3->pcidev->dev, VAR_4->ctx_blk_size,
        &VAR_4->ctx_arr[VAR_9].mapping,
        VAR_2);
  if (VAR_4->ctx_arr[VAR_9].ctx == ((void*)0))
   return -VAR_1;

  if (VAR_4->ctx_align && VAR_4->ctx_blk_size == VAR_6) {
   if (VAR_4->ctx_arr[VAR_9].mapping & (VAR_4->ctx_align - 1)) {
    FUNC_1(VAR_3);
    VAR_4->ctx_blk_size += VAR_4->ctx_align;
    VAR_9 = -1;
    continue;
   }
  }
 }
 return 0;
}
