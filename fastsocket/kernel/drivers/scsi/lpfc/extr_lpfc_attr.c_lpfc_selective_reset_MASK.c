
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lpfc_hba {TYPE_1__* pport; int cfg_enable_hba_reset; } ;
struct completion {int dummy; } ;
struct TYPE_2__ {int fc_flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct completion*) ;
 int FUNC_1 (struct lpfc_hba*,int ) ;
 int FUNC_2 (struct lpfc_hba*,int*,struct completion*,int ) ;
 int FUNC_3 (struct completion*) ;

int
FUNC_4(struct lpfc_hba *VAR_6)
{
 struct completion VAR_7;
 int VAR_8 = 0;
 int VAR_9;

 if ((!VAR_6->cfg_enable_hba_reset) ||
     (VAR_6->pport->fc_flag & VAR_3))
  return -VAR_0;

 VAR_8 = FUNC_1(VAR_6, VAR_4);

 if (VAR_8 != 0)
  return VAR_8;

 FUNC_0(&VAR_7);
 VAR_9 = FUNC_2(VAR_6, &VAR_8, &VAR_7,
         VAR_5);
 if (VAR_9 == 0)
  return -VAR_2;

 FUNC_3(&VAR_7);

 if (VAR_8 != 0)
  return -VAR_1;

 return 0;
}
