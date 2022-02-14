
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct il_priv {int dummy; } ;
struct TYPE_3__ {int * variable; } ;
struct TYPE_4__ {TYPE_1__ probe_req; } ;
struct ieee80211_mgmt {TYPE_2__ u; scalar_t__ seq_ctrl; int bssid; int * sa; int da; int frame_control; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int const*,int) ;

u16
FUNC_4(struct il_priv *VAR_3, struct ieee80211_mgmt *VAR_4,
    const u8 *VAR_5, const u8 *VAR_6, int VAR_7, int VAR_8)
{
 int VAR_9 = 0;
 u8 *VAR_10 = ((void*)0);



 VAR_8 -= 24;
 if (VAR_8 < 0)
  return 0;

 VAR_4->frame_control = FUNC_1(VAR_1);
 FUNC_2(VAR_4->da);
 FUNC_3(VAR_4->sa, VAR_5, VAR_0);
 FUNC_2(VAR_4->bssid);
 VAR_4->seq_ctrl = 0;

 VAR_9 += 24;


 VAR_10 = &VAR_4->u.probe_req.variable[0];


 VAR_8 -= 2;
 if (VAR_8 < 0)
  return 0;
 *VAR_10++ = VAR_2;
 *VAR_10++ = 0;

 VAR_9 += 2;

 if (FUNC_0(VAR_8 < VAR_7))
  return VAR_9;

 if (VAR_6 && VAR_7) {
  FUNC_3(VAR_10, VAR_6, VAR_7);
  VAR_9 += VAR_7;
 }

 return (u16) VAR_9;
}
