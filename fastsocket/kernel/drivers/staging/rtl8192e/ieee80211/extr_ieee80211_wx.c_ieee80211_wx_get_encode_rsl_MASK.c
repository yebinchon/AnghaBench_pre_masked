
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iw_point {int flags; int length; } ;
union iwreq_data {struct iw_point encoding; } ;
struct iw_request_info {int dummy; } ;
struct ieee80211_device {scalar_t__ iw_mode; int tx_keyidx; scalar_t__ open_wep; struct ieee80211_crypt_data** crypt; } ;
struct ieee80211_crypt_data {int priv; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* get_key ) (char*,int ,int *,int ) ;int name; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_1 (int ,char*) ;
 int FUNC_2 (char*,int ,int *,int ) ;

int FUNC_3(struct ieee80211_device *VAR_9,
       struct iw_request_info *VAR_10,
       union iwreq_data *VAR_11, char *VAR_12)
{
 struct iw_point *VAR_13 = &(VAR_11->encoding);
 int VAR_14, VAR_15;
 struct ieee80211_crypt_data *VAR_16;

 FUNC_0("GET_ENCODE\n");

 if(VAR_9->iw_mode == VAR_6)
  return -1;

 VAR_15 = VAR_13->flags & VAR_3;
 if (VAR_15) {
  if (VAR_15 > VAR_8)
   return -VAR_0;
  VAR_15--;
 } else
  VAR_15 = VAR_9->tx_keyidx;

 VAR_16 = VAR_9->crypt[VAR_15];
 VAR_13->flags = VAR_15 + 1;

 if (VAR_16 == ((void*)0) || VAR_16->ops == ((void*)0)) {
  VAR_13->length = 0;
  VAR_13->flags |= VAR_1;
  return 0;
 }
 VAR_14 = VAR_16->ops->get_key(VAR_12, VAR_7, ((void*)0), VAR_16->priv);
 VAR_13->length = (VAR_14 >= 0 ? VAR_14 : 0);

 VAR_13->flags |= VAR_2;

 if (VAR_9->open_wep)
  VAR_13->flags |= VAR_4;
 else
  VAR_13->flags |= VAR_5;

 return 0;
}
