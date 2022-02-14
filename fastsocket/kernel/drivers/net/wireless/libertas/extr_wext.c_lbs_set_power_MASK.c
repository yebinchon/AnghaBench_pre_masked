
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {struct lbs_private* ml_priv; } ;
struct lbs_private {int fwcapinfo; scalar_t__ psmode; scalar_t__ psstate; scalar_t__ connect_status; } ;
struct iw_request_info {int dummy; } ;
struct iw_param {int flags; scalar_t__ disabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (struct lbs_private*,int ) ;
 int FUNC_4 (struct lbs_private*,int ) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_11, struct iw_request_info *VAR_12,
     struct iw_param *VAR_13, char *VAR_14)
{
 struct lbs_private *VAR_15 = VAR_11->ml_priv;

 FUNC_0(VAR_9);

 if (!(VAR_15->fwcapinfo & VAR_2)) {
  if (VAR_13->disabled)
   return 0;
  else
   return -VAR_1;
 }





 if (VAR_13->disabled) {
  VAR_15->psmode = VAR_6;
  if (VAR_15->psstate != VAR_10) {
   FUNC_4(VAR_15, VAR_0);
  }

  return 0;
 }

 if ((VAR_13->flags & VAR_5) == VAR_4) {
  FUNC_2(
         "setting power timeout is not supported\n");
  return -VAR_1;
 } else if ((VAR_13->flags & VAR_5) == VAR_3) {
  FUNC_2("setting power period not supported\n");
  return -VAR_1;
 }

 if (VAR_15->psmode != VAR_6) {
  return 0;
 }

 VAR_15->psmode = VAR_7;

 if (VAR_15->connect_status == VAR_8) {
  FUNC_3(VAR_15, VAR_0);
 }

 FUNC_1(VAR_9);
 return 0;
}
