
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ieee80211_hw {struct adm8211_priv* priv; } ;
struct adm8211_priv {TYPE_1__* pdev; } ;
struct TYPE_2__ {scalar_t__ revision; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int) ;

__attribute__((used)) static inline void FUNC_3(struct ieee80211_hw *VAR_5,
          u32 VAR_6, u32 VAR_7)
{
 struct adm8211_priv *VAR_8 = VAR_5->priv;

 FUNC_1(VAR_3, VAR_6 | VAR_2 |
     (VAR_8->pdev->revision < VAR_0 ?
      0 : VAR_1 ));
 FUNC_0(VAR_3);
 FUNC_2(1);

 FUNC_1(VAR_4, VAR_7);
 FUNC_0(VAR_4);
 FUNC_2(1);
}
