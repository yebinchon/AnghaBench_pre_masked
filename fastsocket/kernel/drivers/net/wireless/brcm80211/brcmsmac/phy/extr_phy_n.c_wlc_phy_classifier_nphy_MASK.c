
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct brcms_phy {TYPE_1__* sh; int d11core; } ;
struct TYPE_2__ {int physhim; int corerev; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ) ;
 int VAR_1 ;
 int FUNC_3 (struct brcms_phy*,int,int,int) ;
 int FUNC_4 (struct brcms_phy*,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

u16 FUNC_7(struct brcms_phy *VAR_2, u16 VAR_3, u16 VAR_4)
{
 u16 VAR_5, VAR_6;
 bool VAR_7 = 0;

 if (FUNC_1(VAR_2->sh->corerev, 16)) {
  VAR_7 = (FUNC_2(VAR_2->d11core, FUNC_0(VAR_1)) &
        VAR_0) ? 0 : 1;
  if (!VAR_7)
   FUNC_6(VAR_2->sh->physhim);
 }

 VAR_5 = FUNC_4(VAR_2, 0xb0) & (0x7 << 0);

 VAR_6 = (VAR_5 & (~VAR_3)) | (VAR_4 & VAR_3);

 FUNC_3(VAR_2, 0xb0, (0x7 << 0), VAR_6);

 if (FUNC_1(VAR_2->sh->corerev, 16) && !VAR_7)
  FUNC_5(VAR_2->sh->physhim);

 return VAR_6;
}
