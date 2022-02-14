
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath9k_htc_priv {int dummy; } ;
struct ath9k_channel {int chanmode; } ;
typedef enum htc_phymode { ____Placeholder_htc_phymode } htc_phymode ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;

__attribute__((used)) static enum htc_phymode FUNC_1(struct ath9k_htc_priv *VAR_3,
           struct ath9k_channel *VAR_4)
{
 enum htc_phymode VAR_5;

 VAR_5 = -VAR_0;

 switch (VAR_4->chanmode) {
 case 131:
 case 130:
 case 128:
 case 129:
  VAR_5 = VAR_2;
  break;
 case 135:
 case 134:
 case 132:
 case 133:
  VAR_5 = VAR_1;
  break;
 default:
  break;
 }

 FUNC_0(VAR_5 < 0);

 return VAR_5;
}
