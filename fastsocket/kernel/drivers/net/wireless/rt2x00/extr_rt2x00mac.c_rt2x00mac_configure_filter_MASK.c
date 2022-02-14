
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct rt2x00_dev {unsigned int packet_filter; TYPE_2__* ops; int cap_flags; } ;
struct ieee80211_hw {struct rt2x00_dev* priv; } ;
struct TYPE_4__ {TYPE_1__* lib; } ;
struct TYPE_3__ {int (* config_filter ) (struct rt2x00_dev*,unsigned int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 int FUNC_0 (struct rt2x00_dev*,unsigned int) ;
 int FUNC_1 (int ,int *) ;

void FUNC_2(struct ieee80211_hw *VAR_9,
    unsigned int VAR_10,
    unsigned int *VAR_11,
    u64 VAR_12)
{
 struct rt2x00_dev *VAR_13 = VAR_9->priv;





 *VAR_11 &=
     VAR_2 |
     VAR_4 |
     VAR_6 |
     VAR_3 |
     VAR_8 |
     VAR_5 |
     VAR_7;







 *VAR_11 |= VAR_2;
 if (*VAR_11 & VAR_5 ||
     *VAR_11 & VAR_7)
  *VAR_11 |= VAR_7 | VAR_5;
 if (!FUNC_1(VAR_0, &VAR_13->cap_flags)) {
  if (*VAR_11 & VAR_3 || *VAR_11 & VAR_8)
   *VAR_11 |= VAR_3 | VAR_8;
 }
 if (!FUNC_1(VAR_1, &VAR_13->cap_flags)) {
  if (*VAR_11 & VAR_3)
   *VAR_11 |= VAR_8;
 }




 if (VAR_13->packet_filter == *VAR_11)
  return;
 VAR_13->packet_filter = *VAR_11;

 VAR_13->ops->lib->config_filter(VAR_13, *VAR_11);
}
