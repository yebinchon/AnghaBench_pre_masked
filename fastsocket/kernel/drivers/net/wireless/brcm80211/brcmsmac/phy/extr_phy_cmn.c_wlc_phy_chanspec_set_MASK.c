
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct brcms_phy_pub {int dummy; } ;
struct TYPE_4__ {void (* chanset ) (struct brcms_phy*,int ) ;} ;
struct brcms_phy {TYPE_2__ pi_fptr; TYPE_1__* sh; } ;
struct TYPE_3__ {int physhim; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void FUNC_3 (struct brcms_phy*,int ) ;
 int FUNC_4 (int ,int ,int ) ;

void FUNC_5(struct brcms_phy_pub *VAR_3, u16 VAR_4)
{
 struct brcms_phy *VAR_5 = (struct brcms_phy *) VAR_3;
 u16 VAR_6;
 void (*VAR_7)(struct brcms_phy *, u16) = ((void*)0);
 VAR_6 = FUNC_0(VAR_4);
 if (FUNC_2(VAR_4))
  VAR_6 |= VAR_1;
 if (FUNC_1(VAR_4))
  VAR_6 |= VAR_0;
 FUNC_4(VAR_5->sh->physhim, VAR_2, VAR_6);

 VAR_7 = VAR_5->pi_fptr.chanset;
 if (VAR_7)
  (*VAR_7)(VAR_5, VAR_4);

}
