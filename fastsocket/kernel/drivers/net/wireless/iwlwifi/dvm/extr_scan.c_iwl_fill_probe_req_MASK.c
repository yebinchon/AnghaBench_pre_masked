
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct TYPE_3__ {int* variable; } ;
struct TYPE_4__ {TYPE_1__ probe_req; } ;
struct ieee80211_mgmt {int* sa; TYPE_2__ u; scalar_t__ seq_ctrl; int bssid; int da; int frame_control; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int*,int const*,int) ;

__attribute__((used)) static u16 FUNC_4(struct ieee80211_mgmt *VAR_3, const u8 *VAR_4,
         const u8 *VAR_5, int VAR_6, const u8 *VAR_7,
         u8 VAR_8, int VAR_9)
{
 int VAR_10 = 0;
 u8 *VAR_11 = ((void*)0);



 VAR_9 -= 24;
 if (VAR_9 < 0)
  return 0;

 VAR_3->frame_control = FUNC_1(VAR_1);
 FUNC_2(VAR_3->da);
 FUNC_3(VAR_3->sa, VAR_4, VAR_0);
 FUNC_2(VAR_3->bssid);
 VAR_3->seq_ctrl = 0;

 VAR_10 += 24;


 VAR_11 = &VAR_3->u.probe_req.variable[0];


 VAR_9 -= VAR_8 + 2;
 if (VAR_9 < 0)
  return 0;
 *VAR_11++ = VAR_2;
 *VAR_11++ = VAR_8;
 if (VAR_7 && VAR_8) {
  FUNC_3(VAR_11, VAR_7, VAR_8);
  VAR_11 += VAR_8;
 }

 VAR_10 += VAR_8 + 2;

 if (FUNC_0(VAR_9 < VAR_6))
  return VAR_10;

 if (VAR_5 && VAR_6) {
  FUNC_3(VAR_11, VAR_5, VAR_6);
  VAR_10 += VAR_6;
 }

 return (u16)VAR_10;
}
