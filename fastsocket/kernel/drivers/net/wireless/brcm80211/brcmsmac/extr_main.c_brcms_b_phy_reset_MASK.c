
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct brcms_phy_pub {int dummy; } ;
struct brcms_hardware {TYPE_1__* band; int unit; int d11core; } ;
struct TYPE_2__ {int phyrev; struct brcms_phy_pub* pi; } ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 (int ,int) ;
 scalar_t__ FUNC_2 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct brcms_hardware*,int,int) ;
 int FUNC_4 (struct brcms_hardware*,int ) ;
 int FUNC_5 (struct brcms_hardware*) ;
 int FUNC_6 (int ,char*,int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct brcms_phy_pub*,int ) ;
 int FUNC_9 (struct brcms_phy_pub*) ;

void FUNC_10(struct brcms_hardware *VAR_4)
{
 struct brcms_phy_pub *VAR_5 = VAR_4->band->pi;
 u32 VAR_6;
 bool VAR_7 = 0;

 FUNC_6(VAR_4->d11core, "wl%d: reset phy\n", VAR_4->unit);

 if (VAR_5 == ((void*)0))
  return;

 VAR_6 = FUNC_9(VAR_4->band->pi);


 if (FUNC_0(VAR_4->band) && FUNC_1(VAR_4->band->phyrev, 3) &&
     FUNC_2(VAR_4->band->phyrev, 4)) {

  FUNC_3(VAR_4, VAR_1, VAR_6);

  FUNC_7(1);


  FUNC_5(VAR_4);


  FUNC_3(VAR_4, (VAR_3 | VAR_2),
       (VAR_3 | VAR_2));
  VAR_7 = 1;
 } else {
  FUNC_3(VAR_4,
       (VAR_3 | VAR_2 | VAR_1),
       (VAR_3 | VAR_2 | VAR_6));
 }

 FUNC_7(2);
 FUNC_4(VAR_4, VAR_0);

 if (VAR_5)
  FUNC_8(VAR_5, VAR_0);
}
