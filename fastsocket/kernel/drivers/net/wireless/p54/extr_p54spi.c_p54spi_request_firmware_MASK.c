
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct p54s_priv {int firmware; TYPE_1__* spi; } ;
struct ieee80211_hw {struct p54s_priv* priv; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct ieee80211_hw*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*,int *) ;

__attribute__((used)) static int FUNC_4(struct ieee80211_hw *VAR_0)
{
 struct p54s_priv *VAR_1 = VAR_0->priv;
 int VAR_2;


 VAR_2 = FUNC_3(&VAR_1->firmware, "3826.arm", &VAR_1->spi->dev);

 if (VAR_2 < 0) {
  FUNC_0(&VAR_1->spi->dev, "request_firmware() failed: %d", VAR_2);
  return VAR_2;
 }

 VAR_2 = FUNC_1(VAR_0, VAR_1->firmware);
 if (VAR_2) {
  FUNC_2(VAR_1->firmware);
  return VAR_2;
 }

 return 0;
}
