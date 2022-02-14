
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct brcms_phy {TYPE_1__* sh; } ;
struct TYPE_2__ {int physhim; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct brcms_phy*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct brcms_phy*,int ) ;
 int FUNC_4 (struct brcms_phy*,int,int) ;

__attribute__((used)) static void FUNC_5(struct brcms_phy *VAR_4)
{
 u16 VAR_5;

 FUNC_2(VAR_4->sh->physhim, VAR_3);

 VAR_5 = FUNC_0(VAR_4, 0x01);
 FUNC_4(VAR_4, 0x01, VAR_5 | VAR_0);
 FUNC_1(1);
 FUNC_4(VAR_4, 0x01, VAR_5 & (~VAR_0));

 FUNC_2(VAR_4->sh->physhim, VAR_2);

 FUNC_3(VAR_4, VAR_1);
}
