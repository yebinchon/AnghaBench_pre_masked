
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct cnic_local {int pfid; } ;
struct cnic_dev {int netdev; struct cnic_local* cnic_priv; } ;
struct bnx2x {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct cnic_dev*,scalar_t__,int ) ;
 int FUNC_1 (struct cnic_dev*,scalar_t__,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 struct bnx2x* FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct cnic_dev *VAR_5, int VAR_6)
{
 struct cnic_local *VAR_7 = VAR_5->cnic_priv;
 struct bnx2x *VAR_8 = FUNC_4(VAR_5->netdev);
 u8 VAR_9 = VAR_4;
 u16 VAR_10 = 0;

 if (VAR_6) {
  VAR_9 |= VAR_3;
  VAR_10 |= VAR_2;
 }

 FUNC_1(VAR_5, VAR_1 +
   FUNC_3(VAR_7->pfid), VAR_9);

 FUNC_0(VAR_5, VAR_0 +
    FUNC_2(VAR_7->pfid), VAR_10);
}
