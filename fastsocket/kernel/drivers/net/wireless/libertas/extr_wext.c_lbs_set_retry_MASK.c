
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct net_device {struct lbs_private* ml_priv; } ;
struct lbs_private {scalar_t__ txretrycount; } ;
struct iw_request_info {int dummy; } ;
struct iw_param {int flags; scalar_t__ value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct lbs_private*,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_11, struct iw_request_info *VAR_12,
     struct iw_param *VAR_13, char *VAR_14)
{
 struct lbs_private *VAR_15 = VAR_11->ml_priv;
 int VAR_16 = 0;
 u16 VAR_17 = 0, VAR_18 = 0;

 FUNC_0(VAR_6);

        if ((VAR_13->flags & VAR_5) != VAR_2)
                return -VAR_1;





 if (VAR_13->value < 0 || VAR_13->value > 14)
  return -VAR_0;


 if (VAR_13->flags & VAR_4)
  VAR_17 = (u16) (VAR_13->value + 1);
 else if (VAR_13->flags & VAR_3)
  VAR_18 = (u16) (VAR_13->value + 1);
 else
  VAR_17 = VAR_18 = (u16) (VAR_13->value + 1);

 if (VAR_18) {
  VAR_16 = FUNC_2(VAR_15, VAR_7,
           VAR_18);
  if (VAR_16)
   goto out;
 }

 if (VAR_17) {

  VAR_15->txretrycount = VAR_17;
  VAR_16 = FUNC_2(VAR_15, VAR_8,
           VAR_17);
  if (VAR_16)
   goto out;
 }

out:
 FUNC_1(VAR_6, "ret %d", VAR_16);
 return VAR_16;
}
