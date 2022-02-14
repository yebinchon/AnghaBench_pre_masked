
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr {scalar_t__ sa_family; int sa_data; } ;
struct net_device {struct lbs_private* ml_priv; } ;
struct lbs_private {int lock; int radio_on; } ;
struct iw_request_info {int dummy; } ;
struct assoc_request {int flags; int bssid; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct lbs_private*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ) ;
 struct assoc_request* FUNC_3 (struct lbs_private*) ;
 int FUNC_4 (struct lbs_private*) ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int *) ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_6, struct iw_request_info *VAR_7,
   struct sockaddr *VAR_8, char *VAR_9)
{
 struct lbs_private *VAR_10 = VAR_6->ml_priv;
 struct assoc_request * VAR_11;
 int VAR_12 = 0;

 FUNC_1(VAR_5);

 if (!VAR_10->radio_on)
  return -VAR_2;

 if (VAR_8->sa_family != VAR_0)
  return -VAR_2;

 FUNC_2("ASSOC: WAP: sa_data %pM\n", VAR_8->sa_data);

 FUNC_6(&VAR_10->lock);


 VAR_11 = FUNC_3(VAR_10);
 if (!VAR_11) {
  FUNC_0(VAR_10);
  VAR_12 = -VAR_3;
 } else {

  FUNC_5(&VAR_11->bssid, VAR_8->sa_data, VAR_4);
  FUNC_8(VAR_1, &VAR_11->flags);
  FUNC_4(VAR_10);
 }

 FUNC_7(&VAR_10->lock);

 return VAR_12;
}
