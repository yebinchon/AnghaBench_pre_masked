
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct cnic_local {int ctx_blks; int cids_per_blk; TYPE_1__* ctx_arr; } ;
struct cnic_dev {struct cnic_local* cnic_priv; } ;
struct TYPE_2__ {int cid; int mapping; int ctx; } ;


 scalar_t__ FUNC_0 (struct cnic_local*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct cnic_dev*,int ) ;
 int FUNC_2 (struct cnic_dev*,int ,int) ;
 int VAR_7 ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct cnic_dev *VAR_8, int VAR_9)
{
 struct cnic_local *VAR_10 = VAR_8->cnic_priv;
 int VAR_11 = 0, VAR_12;
 u32 VAR_13 = VAR_9 ? VAR_4 : 0;

 if (FUNC_0(VAR_10) != VAR_0)
  return 0;

 for (VAR_12 = 0; VAR_12 < VAR_10->ctx_blks; VAR_12++) {
  int VAR_14;
  u32 VAR_15 = VAR_10->ctx_arr[VAR_12].cid / VAR_10->cids_per_blk;
  u32 VAR_16;

  FUNC_3(VAR_10->ctx_arr[VAR_12].ctx, 0, VAR_6);

  FUNC_2(VAR_8, VAR_3,
   (VAR_10->ctx_arr[VAR_12].mapping & 0xffffffff) | VAR_13);
  FUNC_2(VAR_8, VAR_5,
   (u64) VAR_10->ctx_arr[VAR_12].mapping >> 32);
  FUNC_2(VAR_8, VAR_1, VAR_15 |
   VAR_2);
  for (VAR_14 = 0; VAR_14 < 10; VAR_14++) {

   VAR_16 = FUNC_1(VAR_8, VAR_1);
   if (!(VAR_16 & VAR_2))
    break;
   FUNC_4(5);
  }
  if (VAR_16 & VAR_2) {
   VAR_11 = -VAR_7;
   break;
  }
 }
 return VAR_11;
}
