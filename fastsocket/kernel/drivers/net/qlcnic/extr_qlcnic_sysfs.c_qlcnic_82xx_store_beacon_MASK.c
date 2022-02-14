
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u16 ;
struct qlcnic_hardware_context {int capabilities2; int beacon_state; } ;
struct qlcnic_adapter {int max_sds_rings; int state; int netdev; TYPE_1__* pdev; struct qlcnic_hardware_context* ahw; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char const*,int) ;
 int FUNC_3 (struct qlcnic_adapter*,scalar_t__,scalar_t__) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (struct qlcnic_adapter*,scalar_t__*) ;
 int FUNC_7 (struct qlcnic_adapter*,int ,scalar_t__*,scalar_t__*) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (int ,int *) ;
 scalar_t__ FUNC_11 (int ,int *) ;
 scalar_t__ FUNC_12 (int ,int *) ;
 scalar_t__ FUNC_13 (int ,int *) ;

__attribute__((used)) static int FUNC_14(struct qlcnic_adapter *VAR_11,
        const char *VAR_12, size_t VAR_13)
{
 struct qlcnic_hardware_context *VAR_14 = VAR_11->ahw;
 int VAR_15, VAR_16 = VAR_11->max_sds_rings;
 u16 VAR_17;
 u8 VAR_18, VAR_19, VAR_20;

 if (VAR_13 != sizeof(u16))
  return VAR_6;

 FUNC_2(&VAR_17, VAR_12, sizeof(u16));
 VAR_15 = FUNC_7(VAR_11, VAR_17, &VAR_19, &VAR_20);
 if (VAR_15)
  return VAR_15;

 if ((VAR_14->capabilities2 & VAR_4)) {
  VAR_15 = FUNC_6(VAR_11, &VAR_18);
  if (!VAR_15) {
   FUNC_1(&VAR_11->pdev->dev,
     "Failed to get current beacon state\n");
  } else {
   if (VAR_18 == VAR_2)
    VAR_14->beacon_state = 0;
   else if (VAR_18 == VAR_3)
    VAR_14->beacon_state = 2;
  }
 }

 if (VAR_14->beacon_state == VAR_19)
  return VAR_13;

 FUNC_8();
 if (!VAR_14->beacon_state) {
  if (FUNC_12(VAR_9, &VAR_11->state)) {
   FUNC_9();
   return -VAR_0;
  }
 }

 if (FUNC_13(VAR_10, &VAR_11->state)) {
  VAR_15 = -VAR_1;
  goto out;
 }

 if (!FUNC_13(VAR_7, &VAR_11->state)) {
  VAR_15 = FUNC_4(VAR_11->netdev, VAR_5);
  if (VAR_15)
   goto out;
  FUNC_10(VAR_8, &VAR_11->state);
 }

 VAR_15 = FUNC_3(VAR_11, VAR_19, VAR_20);
 if (!VAR_15) {
  VAR_15 = VAR_13;
  VAR_14->beacon_state = VAR_19;
 }

 if (FUNC_11(VAR_8, &VAR_11->state))
  FUNC_5(VAR_11->netdev, VAR_16);

out:
 if (!VAR_14->beacon_state)
  FUNC_0(VAR_9, &VAR_11->state);
 FUNC_9();

 return VAR_15;
}
