
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ql_adapter {int flags; int ndev; } ;
struct net_device {int flags; scalar_t__ mc_count; struct dev_mc_list* mc_list; } ;
struct dev_mc_list {scalar_t__ dmi_addr; struct dev_mc_list* next; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int ,int *) ;
 int VAR_14 ;
 struct ql_adapter* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct ql_adapter*,int ,int ,char*) ;
 int FUNC_3 (struct ql_adapter*,int ) ;
 int FUNC_4 (struct ql_adapter*,int ) ;
 scalar_t__ FUNC_5 (struct ql_adapter*,int *,int ,int) ;
 scalar_t__ FUNC_6 (struct ql_adapter*,int ,int ,int) ;
 int FUNC_7 (int ,int *) ;
 scalar_t__ FUNC_8 (int ,int *) ;

void FUNC_9(struct net_device *VAR_15)
{
 struct ql_adapter *VAR_16 = FUNC_1(VAR_15);
 struct dev_mc_list *VAR_17;
 int VAR_18, VAR_19;

 VAR_19 = FUNC_3(VAR_16, VAR_13);
 if (VAR_19)
  return;




 if (VAR_15->flags & VAR_1) {
  if (!FUNC_8(VAR_5, &VAR_16->flags)) {
   if (FUNC_6
       (VAR_16, VAR_10, VAR_11, 1)) {
    FUNC_2(VAR_16, VAR_14, VAR_16->ndev,
       "Failed to set promiscous mode.\n");
   } else {
    FUNC_7(VAR_5, &VAR_16->flags);
   }
  }
 } else {
  if (FUNC_8(VAR_5, &VAR_16->flags)) {
   if (FUNC_6
       (VAR_16, VAR_10, VAR_11, 0)) {
    FUNC_2(VAR_16, VAR_14, VAR_16->ndev,
       "Failed to clear promiscous mode.\n");
   } else {
    FUNC_0(VAR_5, &VAR_16->flags);
   }
  }
 }





 if ((VAR_15->flags & VAR_0) ||
     (VAR_15->mc_count > VAR_3)) {
  if (!FUNC_8(VAR_4, &VAR_16->flags)) {
   if (FUNC_6
       (VAR_16, VAR_6, VAR_7, 1)) {
    FUNC_2(VAR_16, VAR_14, VAR_16->ndev,
       "Failed to set all-multi mode.\n");
   } else {
    FUNC_7(VAR_4, &VAR_16->flags);
   }
  }
 } else {
  if (FUNC_8(VAR_4, &VAR_16->flags)) {
   if (FUNC_6
       (VAR_16, VAR_6, VAR_7, 0)) {
    FUNC_2(VAR_16, VAR_14, VAR_16->ndev,
       "Failed to clear all-multi mode.\n");
   } else {
    FUNC_0(VAR_4, &VAR_16->flags);
   }
  }
 }

 if (VAR_15->mc_count) {
  VAR_19 = FUNC_3(VAR_16, VAR_12);
  if (VAR_19)
   goto exit;
  for (VAR_18 = 0, VAR_17 = VAR_15->mc_list; VAR_17;
       VAR_18++, VAR_17 = VAR_17->next)
   if (FUNC_5(VAR_16, (u8 *) VAR_17->dmi_addr,
      VAR_2, VAR_18)) {
    FUNC_2(VAR_16, VAR_14, VAR_16->ndev,
       "Failed to loadmulticast address.\n");
    FUNC_4(VAR_16, VAR_12);
    goto exit;
   }
  FUNC_4(VAR_16, VAR_12);
  if (FUNC_6
      (VAR_16, VAR_9, VAR_8, 1)) {
   FUNC_2(VAR_16, VAR_14, VAR_16->ndev,
      "Failed to set multicast match mode.\n");
  } else {
   FUNC_7(VAR_4, &VAR_16->flags);
  }
 }
exit:
 FUNC_4(VAR_16, VAR_13);
}
