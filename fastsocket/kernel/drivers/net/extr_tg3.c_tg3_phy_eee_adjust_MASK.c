
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {scalar_t__ eee_active; } ;
struct TYPE_3__ {scalar_t__ autoneg; scalar_t__ active_duplex; scalar_t__ active_speed; } ;
struct tg3 {int phy_flags; int setlpicnt; TYPE_2__ eee; TYPE_1__ link_config; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (struct tg3*,int *) ;
 int FUNC_1 (struct tg3*,int) ;
 int FUNC_2 (struct tg3*,int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static void FUNC_5(struct tg3 *VAR_11, bool VAR_12)
{
 u32 VAR_13;

 if (!(VAR_11->phy_flags & VAR_10))
  return;

 VAR_11->setlpicnt = 0;

 if (VAR_11->link_config.autoneg == VAR_0 &&
     VAR_12 &&
     VAR_11->link_config.active_duplex == VAR_1 &&
     (VAR_11->link_config.active_speed == VAR_3 ||
      VAR_11->link_config.active_speed == VAR_4)) {
  u32 VAR_14;

  if (VAR_11->link_config.active_speed == VAR_4)
   VAR_14 = VAR_7;
  else
   VAR_14 = VAR_8;

  FUNC_4(VAR_6, VAR_14);

  FUNC_0(VAR_11, ((void*)0));
  if (VAR_11->eee.eee_active)
   VAR_11->setlpicnt = 2;
 }

 if (!VAR_11->setlpicnt) {
  if (VAR_12 &&
     !FUNC_1(VAR_11, 1)) {
   FUNC_2(VAR_11, VAR_2, 0x0000);
   FUNC_1(VAR_11, 0);
  }

  VAR_13 = FUNC_3(VAR_9);
  FUNC_4(VAR_9, VAR_13 & ~VAR_5);
 }
}
