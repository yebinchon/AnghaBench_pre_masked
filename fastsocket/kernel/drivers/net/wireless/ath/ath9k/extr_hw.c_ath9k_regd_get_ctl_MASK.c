
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ath_regulatory {int dummy; } ;
struct ath9k_channel {TYPE_1__* chan; } ;
struct TYPE_2__ {int band; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct ath9k_channel*) ;
 scalar_t__ FUNC_1 (struct ath9k_channel*) ;
 int FUNC_2 (struct ath_regulatory*,int ) ;

u32 FUNC_3(struct ath_regulatory *VAR_3, struct ath9k_channel *VAR_4)
{
 u32 VAR_5 = FUNC_2(VAR_3, VAR_4->chan->band);

 if (FUNC_0(VAR_4))
  VAR_5 |= VAR_1;
 else if (FUNC_1(VAR_4))
  VAR_5 |= VAR_2;
 else
  VAR_5 |= VAR_0;

 return VAR_5;
}
