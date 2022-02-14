
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_10__ {int chan; } ;
struct TYPE_6__ {TYPE_5__ chandef; } ;
struct ieee80211_hw {TYPE_1__ conf; struct ar9170* priv; } ;
struct ar9170 {int mutex; TYPE_4__* hw; } ;
typedef enum nl80211_channel_type { ____Placeholder_nl80211_channel_type } nl80211_channel_type ;
struct TYPE_7__ {int chan; } ;
struct TYPE_8__ {TYPE_2__ chandef; } ;
struct TYPE_9__ {TYPE_3__ conf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ar9170*) ;
 int FUNC_1 (struct ar9170*,int ,int) ;
 int FUNC_2 (struct ar9170*) ;
 int FUNC_3 (struct ar9170*,int ) ;
 int FUNC_4 (struct ar9170*) ;
 int FUNC_5 (struct ar9170*) ;
 int FUNC_6 (struct ar9170*,int,int) ;
 int FUNC_7 (TYPE_5__*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct ieee80211_hw *VAR_5, u32 VAR_6)
{
 struct ar9170 *VAR_7 = VAR_5->priv;
 int VAR_8 = 0;

 FUNC_8(&VAR_7->mutex);
 if (VAR_6 & VAR_1) {

  VAR_8 = 0;
 }

 if (VAR_6 & VAR_3) {
  VAR_8 = FUNC_0(VAR_7);
  if (VAR_8)
   goto out;
 }

 if (VAR_6 & VAR_4) {

  VAR_8 = 0;
 }

 if (VAR_6 & VAR_0) {
  enum nl80211_channel_type VAR_9 =
   FUNC_7(&VAR_5->conf.chandef);


  VAR_8 = FUNC_5(VAR_7);
  if (VAR_8)
   goto out;

  VAR_8 = FUNC_6(VAR_7, 1, 0);
  if (VAR_8)
   goto out;

  VAR_8 = FUNC_1(VAR_7, VAR_5->conf.chandef.chan,
        VAR_9);
  if (VAR_8)
   goto out;

  VAR_8 = FUNC_6(VAR_7, 0, 1);
  if (VAR_8)
   goto out;

  VAR_8 = FUNC_2(VAR_7);
  if (VAR_8)
   goto out;

  VAR_8 = FUNC_4(VAR_7);
  if (VAR_8)
   goto out;
 }

 if (VAR_6 & VAR_2) {
  VAR_8 = FUNC_3(VAR_7, VAR_7->hw->conf.chandef.chan);
  if (VAR_8)
   goto out;
 }

out:
 FUNC_9(&VAR_7->mutex);
 return VAR_8;
}
