
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct brcms_phy {scalar_t__ phy_init_por; TYPE_1__* sh; } ;
struct TYPE_2__ {int boardflags2; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct brcms_phy*,int ,int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct brcms_phy*) ;

__attribute__((used)) static void FUNC_3(struct brcms_phy *VAR_7)
{
 FUNC_0(VAR_7, VAR_2, 0xb, 0xb);

 FUNC_0(VAR_7, VAR_3, 0x2, 0x2);
 FUNC_0(VAR_7, VAR_4, 0x2, 0x2);
 FUNC_1(1000);
 FUNC_0(VAR_7, VAR_4, 0x2, 0x0);

 if ((VAR_7->sh->boardflags2 & VAR_0)
     || (VAR_7->sh->boardflags2 & VAR_1))
  FUNC_0(VAR_7, VAR_5, 0xf4, 0x0);
 else
  FUNC_0(VAR_7, VAR_5, 0xfc, 0x0);

 FUNC_0(VAR_7, VAR_6, 0x1, 0x0);

 if (VAR_7->phy_init_por)
  FUNC_2(VAR_7);
}
