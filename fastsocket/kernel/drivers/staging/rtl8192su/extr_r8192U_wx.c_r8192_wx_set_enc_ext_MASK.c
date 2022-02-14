
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iw_point {int flags; } ;
union iwreq_data {struct iw_point encoding; } ;
typedef int u8 ;
typedef int u32 ;
struct r8192_priv {int wx_sem; struct ieee80211_device* ieee80211; } ;
struct net_device {int dummy; } ;
struct iw_request_info {int dummy; } ;
struct iw_encode_ext {scalar_t__ alg; int ext_flags; int key_len; int key; } ;
struct ieee80211_device {int pairwise_key_type; int group_key_type; scalar_t__ iw_mode; int auth_mode; scalar_t__ ap_mac_addr; } ;


 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int *) ;
 struct r8192_priv* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct ieee80211_device*,struct iw_request_info*,union iwreq_data*,char*) ;
 int FUNC_5 (int*,int ,int) ;
 int FUNC_6 (struct net_device*,int,int,int,int*,int ,int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_10,
                                        struct iw_request_info *VAR_11,
                                        union iwreq_data *VAR_12, char *VAR_13)
{
 int VAR_14=0;
 struct r8192_priv *VAR_15 = FUNC_3(VAR_10);
 struct ieee80211_device* VAR_16 = VAR_15->ieee80211;



 FUNC_2(&VAR_15->wx_sem);
 VAR_14 = FUNC_4(VAR_15->ieee80211, VAR_11, VAR_12, VAR_13);

 {
  u8 VAR_17[6] = {0xff,0xff,0xff,0xff,0xff,0xff};
  u8 VAR_18[6] = {0};
  u32 VAR_19[4] = {0};
  struct iw_encode_ext *VAR_20 = (struct iw_encode_ext *)VAR_13;
  struct iw_point *VAR_21 = &VAR_12->encoding;
  u8 VAR_22 = 0, VAR_23 = 0, VAR_24 = 0;
  if ((VAR_21->flags & VAR_2) ||
  VAR_20->alg == VAR_1)
  {
   VAR_16->pairwise_key_type = VAR_16->group_key_type = VAR_7;
   FUNC_0(VAR_10);
   goto end_hw_sec;
  }
  VAR_23 = (VAR_20->alg == VAR_0)?VAR_6:VAR_20->alg;
  VAR_22 = VAR_21->flags & VAR_4;
  if (VAR_22)
   VAR_22 --;
  VAR_24 = VAR_20->ext_flags & VAR_3;

  if ((!VAR_24) || (VAR_5 == VAR_16->iw_mode) || (VAR_23 == VAR_9))
  {
   if ((VAR_20->key_len == 13) && (VAR_23 == VAR_9) )
    VAR_23 = VAR_8;
   VAR_16->pairwise_key_type = VAR_23;
   FUNC_1(VAR_10);
  }
  FUNC_5((u8*)VAR_19, VAR_20->key, 16);

  if ((VAR_23 & VAR_9) && (VAR_16->auth_mode !=2) )
  {

   FUNC_6( VAR_10,
     VAR_22,
     VAR_22,
     VAR_23,
     VAR_18,
     0,
     VAR_19);
  }
  else if (VAR_24)
  {
   VAR_16->group_key_type = VAR_23;
   FUNC_6( VAR_10,
     VAR_22,
     VAR_22,
     VAR_23,
     VAR_17,
     0,
     VAR_19);
  }
  else
  {
   FUNC_6( VAR_10,
     4,
     VAR_22,
     VAR_23,
     (u8*)VAR_16->ap_mac_addr,
     0,
     VAR_19);
  }


 }

end_hw_sec:

 FUNC_7(&VAR_15->wx_sem);
 return VAR_14;
}
