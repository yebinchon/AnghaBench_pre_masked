
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct net_device {struct lbs_private* ml_priv; } ;
struct lbs_private {int lock; int radio_on; } ;
struct iw_request_info {int dummy; } ;
struct iw_point {int length; int flags; } ;
struct assoc_request {int ssid_len; int flags; int ssid; } ;
typedef int ssid ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct lbs_private*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (char*,...) ;
 struct assoc_request* FUNC_5 (struct lbs_private*) ;
 int FUNC_6 (struct lbs_private*) ;
 int FUNC_7 (int**,...) ;
 int FUNC_8 (int**,int ,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ,int*,int) ;
 int FUNC_12 (int ,int *) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_13(struct net_device *VAR_7, struct iw_request_info *VAR_8,
     struct iw_point *VAR_9, char *VAR_10)
{
 struct lbs_private *VAR_11 = VAR_7->ml_priv;
 int VAR_12 = 0;
 u8 VAR_13[VAR_4];
 u8 VAR_14 = 0;
 struct assoc_request * VAR_15;
 int VAR_16 = VAR_9->length;
 FUNC_0(VAR_6);

 FUNC_2(VAR_5);

 if (!VAR_11->radio_on) {
  VAR_12 = -VAR_2;
  goto out;
 }


 if (VAR_16 > VAR_4) {
  VAR_12 = -VAR_1;
  goto out;
 }

 FUNC_8(&VAR_13, 0, sizeof(VAR_13));

 if (!VAR_9->flags || !VAR_16) {

 } else {

  FUNC_7(&VAR_13, VAR_10, VAR_16);
  VAR_14 = VAR_16;
 }

 if (!VAR_14) {
  FUNC_4("requested any SSID\n");
 } else {
  FUNC_4("requested SSID '%s'\n",
               FUNC_11(VAR_6, VAR_13, VAR_14));
 }

out:
 FUNC_9(&VAR_11->lock);
 if (VAR_12 == 0) {

  VAR_15 = FUNC_5(VAR_11);
  if (!VAR_15) {
   VAR_12 = -VAR_3;
  } else {

   FUNC_7(&VAR_15->ssid, &VAR_13, VAR_4);
   VAR_15->ssid_len = VAR_14;
   FUNC_12(VAR_0, &VAR_15->flags);
   FUNC_6(VAR_11);
  }
 }


 if (VAR_12 != 0) {
  FUNC_1(VAR_11);
 }

 FUNC_10(&VAR_11->lock);

 FUNC_3(VAR_5, "ret %d", VAR_12);
 return VAR_12;
}
