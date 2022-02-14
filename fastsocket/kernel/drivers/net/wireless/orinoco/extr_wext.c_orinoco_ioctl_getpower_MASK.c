
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct hermes {int dummy; } ;
struct orinoco_private {struct hermes hw; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct iw_param {int disabled; int flags; int value; } ;


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
 int FUNC_0 (struct hermes*,int ,int ,int*) ;
 struct orinoco_private* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct orinoco_private*,unsigned long*) ;
 int FUNC_3 (struct orinoco_private*,unsigned long*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_11,
      struct iw_request_info *VAR_12,
      struct iw_param *VAR_13,
      char *VAR_14)
{
 struct orinoco_private *VAR_15 = FUNC_1(VAR_11);
 struct hermes *VAR_16 = &VAR_15->hw;
 int VAR_17 = 0;
 u16 VAR_18, VAR_19, VAR_20, VAR_21;
 unsigned long VAR_22;

 if (FUNC_2(VAR_15, &VAR_22) != 0)
  return -VAR_0;

 VAR_17 = FUNC_0(VAR_16, VAR_10,
      VAR_3, &VAR_18);
 if (VAR_17)
  goto out;

 VAR_17 = FUNC_0(VAR_16, VAR_10,
      VAR_1, &VAR_19);
 if (VAR_17)
  goto out;

 VAR_17 = FUNC_0(VAR_16, VAR_10,
      VAR_4, &VAR_20);
 if (VAR_17)
  goto out;

 VAR_17 = FUNC_0(VAR_16, VAR_10,
      VAR_2, &VAR_21);
 if (VAR_17)
  goto out;

 VAR_13->disabled = !VAR_18;

 if ((VAR_13->flags & VAR_8) == VAR_7) {
  VAR_13->flags = VAR_7;
  VAR_13->value = VAR_20 * 1000;
 } else {
  VAR_13->flags = VAR_6;
  VAR_13->value = VAR_19 * 1000;
 }
 if (VAR_21)
  VAR_13->flags |= VAR_5;
 else
  VAR_13->flags |= VAR_9;

 out:
 FUNC_3(VAR_15, &VAR_22);

 return VAR_17;
}
