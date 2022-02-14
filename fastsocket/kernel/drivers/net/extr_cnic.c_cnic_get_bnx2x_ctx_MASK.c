
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct regpair {int lo; int hi; } ;
struct cnic_local {int cids_per_blk; int ctx_align; TYPE_1__* ctx_arr; struct cnic_eth_dev* ethdev; } ;
struct cnic_eth_dev {int starting_cid; } ;
struct cnic_dev {struct cnic_local* cnic_priv; } ;
typedef int dma_addr_t ;
struct TYPE_2__ {unsigned long mapping; void* ctx; } ;


 int VAR_0 ;
 int FUNC_0 (void*,int ,int) ;

__attribute__((used)) static void *FUNC_1(struct cnic_dev *VAR_1, u32 VAR_2, int VAR_3,
    struct regpair *VAR_4)
{
 struct cnic_local *VAR_5 = VAR_1->cnic_priv;
 struct cnic_eth_dev *VAR_6 = VAR_5->ethdev;
 int VAR_7 = (VAR_2 - VAR_6->starting_cid) / VAR_5->cids_per_blk;
 int VAR_8 = (VAR_2 - VAR_6->starting_cid) % VAR_5->cids_per_blk;
 unsigned long VAR_9 = 0;
 dma_addr_t VAR_10;
 void *VAR_11;

 if (VAR_5->ctx_align) {
  unsigned long VAR_12 = VAR_5->ctx_align - 1;

  if (VAR_5->ctx_arr[VAR_7].mapping & VAR_12)
   VAR_9 = VAR_5->ctx_align -
        (VAR_5->ctx_arr[VAR_7].mapping & VAR_12);
 }
 VAR_10 = VAR_5->ctx_arr[VAR_7].mapping + VAR_9 +
  (VAR_8 * VAR_0);
 VAR_11 = VAR_5->ctx_arr[VAR_7].ctx + VAR_9 +
       (VAR_8 * VAR_0);
 if (VAR_3)
  FUNC_0(VAR_11, 0, VAR_0);

 VAR_4->lo = VAR_10 & 0xffffffff;
 VAR_4->hi = (u64) VAR_10 >> 32;
 return VAR_11;
}
