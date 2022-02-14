
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {struct lbs_private* ml_priv; } ;
struct lbs_private {int fwrelease; scalar_t__ txpower_max; scalar_t__ txpower_min; int radio_on; } ;
struct iw_request_info {int dummy; } ;
struct iw_param {scalar_t__ fixed; int flags; scalar_t__ disabled; int value; } ;
typedef scalar_t__ s16 ;


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
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (char*,scalar_t__) ;
 int FUNC_3 (struct lbs_private*,int,int ,int ,int ) ;
 int FUNC_4 (struct lbs_private*,int ,int) ;
 int FUNC_5 (struct lbs_private*,int ,int ,int ,int ,int) ;
 int FUNC_6 (struct lbs_private*,scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_12, struct iw_request_info *VAR_13,
     struct iw_param *VAR_14, char *VAR_15)
{
 int VAR_16 = 0;
 struct lbs_private *VAR_17 = VAR_12->ml_priv;
 s16 VAR_18 = (s16) VAR_14->value;

 FUNC_0(VAR_4);

 if (VAR_14->disabled) {
  FUNC_4(VAR_17, VAR_8, 0);
  goto out;
 }

 if (VAR_14->fixed == 0) {



  if (VAR_17->fwrelease < 0x09000000) {
   VAR_16 = FUNC_3(VAR_17, 1,
     VAR_5,
     VAR_6,
     VAR_7);
   if (VAR_16)
    goto out;
  }
  VAR_16 = FUNC_5(VAR_17, 0, VAR_9, VAR_10,
    VAR_11, 1);
  if (VAR_16)
   goto out;
  VAR_18 = VAR_17->txpower_max;
 } else {


  if ((VAR_14->flags & VAR_3) != VAR_2) {
   VAR_16 = -VAR_1;
   goto out;
  }



  if (VAR_17->txpower_min && (VAR_18 < VAR_17->txpower_min)) {
   VAR_16 = -VAR_0;
   goto out;
  }

  if (VAR_17->txpower_max && (VAR_18 > VAR_17->txpower_max)) {
   VAR_16 = -VAR_0;
   goto out;
  }
  if (VAR_17->fwrelease < 0x09000000) {
   VAR_16 = FUNC_3(VAR_17, 0,
     VAR_5,
     VAR_6,
     VAR_7);
   if (VAR_16)
    goto out;
  }
  VAR_16 = FUNC_5(VAR_17, 0, VAR_9, VAR_10,
    VAR_11, 1);
  if (VAR_16)
   goto out;
 }


 if (!VAR_17->radio_on) {
  VAR_16 = FUNC_4(VAR_17, VAR_8, 1);
  if (VAR_16)
   goto out;
 }

 FUNC_2("txpower set %d dBm\n", VAR_18);

 VAR_16 = FUNC_6(VAR_17, VAR_18);

out:
 FUNC_1(VAR_4, "ret %d", VAR_16);
 return VAR_16;
}
