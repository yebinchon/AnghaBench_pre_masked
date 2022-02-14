
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct wbsoft_priv {int sHwData; } ;
struct ieee80211_hw {struct wbsoft_priv* priv; } ;
struct TYPE_3__ {int band; int ChanNo; } ;
typedef TYPE_1__ ChanInfo ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,TYPE_1__) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (char*) ;

__attribute__((used)) static int FUNC_7(struct ieee80211_hw *VAR_0, u32 VAR_1)
{
 struct wbsoft_priv *VAR_2 = VAR_0->priv;
 ChanInfo VAR_3;

 FUNC_6("wbsoft_config called\n");


 VAR_3.band = 1;
 VAR_3.ChanNo = 1;

 FUNC_4(&VAR_2->sHwData, VAR_3);
 FUNC_1(&VAR_2->sHwData, 1);
 FUNC_3(&VAR_2->sHwData, 1);
 FUNC_2(&VAR_2->sHwData, 1);
 FUNC_0(&VAR_2->sHwData, 1);
 FUNC_5(&VAR_2->sHwData, 0);

 return 0;
}
