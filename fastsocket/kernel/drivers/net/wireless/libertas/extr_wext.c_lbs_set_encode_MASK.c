
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct net_device {struct lbs_private* ml_priv; } ;
struct lbs_private {int lock; } ;
struct iw_request_info {int dummy; } ;
struct iw_point {int flags; scalar_t__ length; } ;
struct TYPE_2__ {int auth_mode; int wep_enabled; } ;
struct assoc_request {int flags; TYPE_1__ secinfo; int wep_tx_keyidx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (struct assoc_request*) ;
 int FUNC_1 (struct assoc_request*) ;
 int FUNC_2 (struct lbs_private*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int) ;
 struct assoc_request* FUNC_5 (struct lbs_private*) ;
 int FUNC_6 (struct lbs_private*) ;
 int FUNC_7 (struct assoc_request*,char*,scalar_t__,int,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 (int ,int,int*,int*) ;

__attribute__((used)) static int FUNC_12(struct net_device *VAR_12,
      struct iw_request_info *VAR_13,
      struct iw_point *VAR_14, char *VAR_15)
{
 int VAR_16 = 0;
 struct lbs_private *VAR_17 = VAR_12->ml_priv;
 struct assoc_request * VAR_18;
 u16 VAR_19 = 0, VAR_20 = 0, VAR_21 = 0;

 FUNC_3(VAR_11);

 FUNC_8(&VAR_17->lock);
 VAR_18 = FUNC_5(VAR_17);
 if (!VAR_18) {
  VAR_16 = -VAR_4;
  goto out;
 }

 if (VAR_14->flags & VAR_7) {
  FUNC_0 (VAR_18);
  FUNC_1 (VAR_18);
  goto out;
 }

 VAR_16 = FUNC_11(VAR_18->wep_tx_keyidx,
                          (VAR_14->flags & VAR_8),
                          &VAR_20, &VAR_19);
 if (VAR_16) {
  VAR_16 = -VAR_3;
  goto out;
 }




 if (!VAR_18->secinfo.wep_enabled || (VAR_14->length == 0 && !VAR_19))
  VAR_21 = 1;

 VAR_16 = FUNC_7(VAR_18, VAR_15, VAR_14->length, VAR_20, VAR_21);
 if (VAR_16)
  goto out;

 if (VAR_14->length)
  FUNC_10(VAR_1, &VAR_18->flags);
 if (VAR_21)
  FUNC_10(VAR_2, &VAR_18->flags);

 if (VAR_14->flags & VAR_10) {
  VAR_18->secinfo.auth_mode = VAR_6;
 } else if (VAR_14->flags & VAR_9) {
  VAR_18->secinfo.auth_mode = VAR_5;
 }

out:
 if (VAR_16 == 0) {
  FUNC_10(VAR_0, &VAR_18->flags);
  FUNC_6(VAR_17);
 } else {
  FUNC_2(VAR_17);
 }
 FUNC_9(&VAR_17->lock);

 FUNC_4(VAR_11, "ret %d", VAR_16);
 return VAR_16;
}
