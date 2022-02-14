
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct iw_freq {scalar_t__ m; int e; } ;
union iwreq_data {struct iw_freq freq; } ;
typedef scalar_t__ u8 ;
struct net_device {int dummy; } ;
struct libipw_geo {TYPE_2__* a; TYPE_1__* bg; } ;
struct iw_request_info {int dummy; } ;
struct ipw_priv {int mutex; TYPE_3__* ieee; } ;
struct TYPE_9__ {scalar_t__ iw_mode; } ;
struct TYPE_8__ {scalar_t__ flags; } ;
struct TYPE_7__ {scalar_t__ flags; } ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (struct ipw_priv*,scalar_t__) ;
 int FUNC_2 (TYPE_3__*,scalar_t__) ;
 scalar_t__ FUNC_3 (TYPE_3__*,scalar_t__) ;
 struct libipw_geo* FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*,scalar_t__) ;
 struct ipw_priv* FUNC_6 (struct net_device*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_4,
      struct iw_request_info *VAR_5,
      union iwreq_data *VAR_6, char *VAR_7)
{
 struct ipw_priv *VAR_8 = FUNC_6(VAR_4);
 const struct libipw_geo *VAR_9 = FUNC_4(VAR_8->ieee);
 struct iw_freq *VAR_10 = &VAR_6->freq;
 int VAR_11 = 0, VAR_12;
 u8 VAR_13, VAR_14;
 int VAR_15;

 if (VAR_10->m == 0) {
  FUNC_0("SET Freq/Channel -> any\n");
  FUNC_7(&VAR_8->mutex);
  VAR_11 = FUNC_1(VAR_8, 0);
  FUNC_8(&VAR_8->mutex);
  return VAR_11;
 }

 if (VAR_10->e == 1) {
  VAR_13 = FUNC_3(VAR_8->ieee, VAR_10->m);
  if (VAR_13 == 0)
   return -VAR_0;
 } else
  VAR_13 = VAR_10->m;

 if (!(VAR_15 = FUNC_5(VAR_8->ieee, VAR_13)))
  return -VAR_0;

 if (VAR_8->ieee->iw_mode == VAR_1) {
  VAR_12 = FUNC_2(VAR_8->ieee, VAR_13);
  if (VAR_12 == -1)
   return -VAR_0;

  VAR_14 = (VAR_15 == VAR_2) ?
      VAR_9->bg[VAR_12].flags : VAR_9->a[VAR_12].flags;
  if (VAR_14 & VAR_3) {
   FUNC_0("Invalid Ad-Hoc channel for 802.11a\n");
   return -VAR_0;
  }
 }

 FUNC_0("SET Freq/Channel -> %d\n", VAR_10->m);
 FUNC_7(&VAR_8->mutex);
 VAR_11 = FUNC_1(VAR_8, VAR_13);
 FUNC_8(&VAR_8->mutex);
 return VAR_11;
}
