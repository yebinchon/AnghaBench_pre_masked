
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int advertising; scalar_t__ active_duplex; int flowctrl; } ;
struct tg3 {int phy_flags; TYPE_1__ link_config; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct tg3*) ;
 scalar_t__ FUNC_4 (struct tg3*,int ,int*) ;

__attribute__((used)) static bool FUNC_5(struct tg3 *VAR_13, u32 *VAR_14)
{
 u32 VAR_15, VAR_16, VAR_17;

 VAR_17 = VAR_13->link_config.advertising;
 VAR_16 = FUNC_0(VAR_17) & VAR_2;

 VAR_15 = VAR_2;
 if (VAR_13->link_config.active_duplex == VAR_9) {
  VAR_16 |= FUNC_2(VAR_13->link_config.flowctrl);
  VAR_15 |= VAR_4 | VAR_3;
 }

 if (FUNC_4(VAR_13, VAR_10, VAR_14))
  return 0;

 if ((*VAR_14 & VAR_15) != VAR_16)
  return 0;

 if (!(VAR_13->phy_flags & VAR_12)) {
  u32 VAR_18;

  VAR_16 = FUNC_1(VAR_17);

  if (FUNC_4(VAR_13, VAR_11, &VAR_18))
   return 0;

  if (VAR_16 &&
      (FUNC_3(VAR_13) == VAR_5 ||
       FUNC_3(VAR_13) == VAR_6)) {
   VAR_16 |= VAR_7 | VAR_8;
   VAR_18 &= (VAR_1 | VAR_0 |
         VAR_7 | VAR_8);
  } else {
   VAR_18 &= (VAR_1 | VAR_0);
  }

  if (VAR_18 != VAR_16)
   return 0;
 }

 return 1;
}
