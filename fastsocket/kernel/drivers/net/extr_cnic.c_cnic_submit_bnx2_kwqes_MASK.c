
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct kwqe {int dummy; } ;
struct cnic_local {scalar_t__ kwq_prod_idx; int cnic_ulp_lock; int kwq_io_addr; struct kwqe** kwq; int cnic_local_flags; } ;
struct cnic_dev {int flags; struct cnic_local* cnic_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct cnic_dev*,int ,scalar_t__) ;
 int VAR_2 ;
 size_t FUNC_1 (scalar_t__) ;
 size_t FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (struct cnic_local*) ;
 int FUNC_5 (struct kwqe*,struct kwqe*,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int *) ;

__attribute__((used)) static int FUNC_9(struct cnic_dev *VAR_4, struct kwqe *VAR_5[],
      u32 VAR_6)
{
 struct cnic_local *VAR_7 = VAR_4->cnic_priv;
 struct kwqe *VAR_8;
 u16 VAR_9, VAR_10, VAR_11;

 if (!FUNC_8(VAR_0, &VAR_4->flags))
  return -VAR_2;

 FUNC_6(&VAR_7->cnic_ulp_lock);
 if (VAR_6 > FUNC_4(VAR_7) &&
     !FUNC_8(VAR_1, &VAR_7->cnic_local_flags)) {
  FUNC_7(&VAR_7->cnic_ulp_lock);
  return -VAR_2;
 }

 FUNC_3(VAR_1, &VAR_7->cnic_local_flags);

 VAR_9 = VAR_7->kwq_prod_idx;
 VAR_10 = VAR_9 & VAR_3;
 for (VAR_11 = 0; VAR_11 < VAR_6; VAR_11++) {
  VAR_8 = &VAR_7->kwq[FUNC_2(VAR_10)][FUNC_1(VAR_10)];
  FUNC_5(VAR_8, VAR_5[VAR_11], sizeof(struct kwqe));
  VAR_9++;
  VAR_10 = VAR_9 & VAR_3;
 }
 VAR_7->kwq_prod_idx = VAR_9;

 FUNC_0(VAR_4, VAR_7->kwq_io_addr, VAR_7->kwq_prod_idx);

 FUNC_7(&VAR_7->cnic_ulp_lock);
 return 0;
}
