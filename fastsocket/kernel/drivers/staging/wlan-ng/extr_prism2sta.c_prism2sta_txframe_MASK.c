
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int hostwep; scalar_t__ priv; } ;
typedef TYPE_2__ wlandevice_t ;
struct sk_buff {int dummy; } ;
typedef int p80211_metawep_t ;
struct TYPE_7__ {int fc; } ;
struct TYPE_9__ {TYPE_1__ a3; } ;
typedef TYPE_3__ p80211_hdr_t ;
typedef int hfa384x_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,struct sk_buff*,TYPE_3__*,int *) ;

__attribute__((used)) static int FUNC_3(wlandevice_t *VAR_2, struct sk_buff *VAR_3,
        p80211_hdr_t *VAR_4,
        p80211_metawep_t *VAR_5)
{
 hfa384x_t *VAR_6 = (hfa384x_t *) VAR_2->priv;
 int VAR_7;


 if ((VAR_2->hostwep & (VAR_1 | VAR_0)) ==
     VAR_1) {
  VAR_4->a3.fc |= FUNC_1(FUNC_0(1));
 }

 VAR_7 = FUNC_2(VAR_6, VAR_3, VAR_4, VAR_5);

 return VAR_7;
}
