
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spu_gov_info_struct {int work; TYPE_1__* policy; int poll_int; } ;
struct TYPE_2__ {int cpu; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int *,int) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct spu_gov_info_struct *VAR_2)
{
 int VAR_3 = FUNC_2(VAR_2->poll_int);
 FUNC_0(&VAR_2->work, VAR_1);
 FUNC_1(VAR_2->policy->cpu, VAR_0, &VAR_2->work, VAR_3);
}
