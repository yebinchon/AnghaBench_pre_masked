
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ath_hw {TYPE_1__* caldata; } ;
struct TYPE_2__ {int nfcal_pending; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ath_hw*,int ,int ) ;
 int FUNC_1 (struct ath_hw*,int ,int ) ;

void FUNC_2(struct ath_hw *VAR_4, bool VAR_5)
{
 if (VAR_4->caldata)
  VAR_4->caldata->nfcal_pending = 1;

 FUNC_1(VAR_4, VAR_0,
      VAR_1);

 if (VAR_5)
  FUNC_0(VAR_4, VAR_0,
      VAR_3);
 else
  FUNC_1(VAR_4, VAR_0,
      VAR_3);

 FUNC_1(VAR_4, VAR_0, VAR_2);
}
