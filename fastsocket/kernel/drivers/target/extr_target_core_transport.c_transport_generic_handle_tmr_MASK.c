
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct se_cmd {int work; TYPE_1__* se_dev; } ;
struct TYPE_2__ {int tmr_wq; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,int *) ;
 int VAR_0 ;

int FUNC_2(
 struct se_cmd *VAR_1)
{
 FUNC_0(&VAR_1->work, VAR_0);
 FUNC_1(VAR_1->se_dev->tmr_wq, &VAR_1->work);
 return 0;
}
