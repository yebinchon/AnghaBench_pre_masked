
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cnic_local {int pfid; } ;
struct cnic_dev {int netdev; struct cnic_local* cnic_priv; } ;
struct bnx2x {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct cnic_local*) ;
 int FUNC_1 (struct cnic_dev*,scalar_t__,int) ;
 int FUNC_2 (struct cnic_dev*,scalar_t__,int ) ;
 int FUNC_3 (struct cnic_dev*,scalar_t__,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (struct cnic_dev*,int) ;
 int FUNC_13 (struct cnic_dev*) ;
 struct bnx2x* FUNC_14 (int ) ;

__attribute__((used)) static int FUNC_15(struct cnic_dev *VAR_7)
{
 struct cnic_local *VAR_8 = VAR_7->cnic_priv;
 struct bnx2x *VAR_9 = FUNC_14(VAR_7->netdev);
 u32 VAR_10 = VAR_8->pfid;
 u32 VAR_11 = FUNC_0(VAR_8);

 FUNC_13(VAR_7);
 FUNC_12(VAR_7, 1);

 FUNC_2(VAR_7, VAR_1 +
    FUNC_5(VAR_10), 0);

 FUNC_1(VAR_7, VAR_1 +
  FUNC_9(VAR_11), 1);
 FUNC_1(VAR_7, VAR_1 +
  FUNC_10(VAR_11),
  VAR_3);

 FUNC_3(VAR_7, VAR_1 +
   FUNC_8(VAR_10), VAR_6);
 FUNC_3(VAR_7, VAR_1 +
   FUNC_7(VAR_10), VAR_5);
 FUNC_3(VAR_7, VAR_1 +
   FUNC_6(VAR_10), 2);
 FUNC_1(VAR_7, VAR_1 +
  FUNC_11(VAR_10), VAR_4);

 FUNC_1(VAR_7, VAR_0 + FUNC_4(VAR_10),
  VAR_2);
 return 0;
}
