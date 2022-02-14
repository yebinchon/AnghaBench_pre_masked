
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ixgbe_q_vector {int napi; } ;
struct TYPE_2__ {int type; } ;
struct ixgbe_hw {TYPE_1__ mac; } ;
struct ixgbe_adapter {int state; struct ixgbe_q_vector** q_vector; struct ixgbe_hw hw; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int FUNC_1 (struct ixgbe_hw*,int ,int ) ;
 int VAR_8 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct ixgbe_adapter*,int) ;
 int FUNC_4 (struct ixgbe_adapter*) ;
 int FUNC_5 (struct ixgbe_adapter*,int) ;
 int FUNC_6 (struct ixgbe_adapter*,int) ;
 int FUNC_7 (struct ixgbe_adapter*,int,int) ;


 int FUNC_8 (struct ixgbe_adapter*,int) ;
 int VAR_9 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,int *) ;
 scalar_t__ FUNC_11 (int) ;

__attribute__((used)) static irqreturn_t FUNC_12(int VAR_10, void *VAR_11)
{
 struct ixgbe_adapter *VAR_12 = VAR_11;
 struct ixgbe_hw *VAR_13 = &VAR_12->hw;
 struct ixgbe_q_vector *VAR_14 = VAR_12->q_vector[0];
 u32 VAR_15;





 FUNC_1(VAR_13, VAR_6, VAR_7);



 VAR_15 = FUNC_0(VAR_13, VAR_2);
 if (!VAR_15) {







  if (!FUNC_10(VAR_8, &VAR_12->state))
   FUNC_7(VAR_12, 1, 1);
  return VAR_1;
 }

 if (VAR_15 & VAR_4)
  FUNC_4(VAR_12);

 switch (VAR_13->mac.type) {
 case 129:
  FUNC_6(VAR_12, VAR_15);

 case 128:
  if (VAR_15 & VAR_3)
   FUNC_2(VAR_9, "Received unrecoverable ECC err, please "
         "reboot\n");
  FUNC_5(VAR_12, VAR_15);
  break;
 default:
  break;
 }

 FUNC_3(VAR_12, VAR_15);






 FUNC_9(&VAR_14->napi);





 if (!FUNC_10(VAR_8, &VAR_12->state))
  FUNC_7(VAR_12, 0, 0);

 return VAR_0;
}
