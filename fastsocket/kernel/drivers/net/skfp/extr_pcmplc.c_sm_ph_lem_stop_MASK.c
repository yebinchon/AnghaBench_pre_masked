
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s_smc {TYPE_1__* y; } ;
struct lem_counter {scalar_t__ lem_on; } ;
struct TYPE_2__ {struct lem_counter lem; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_2(struct s_smc *VAR_2, int VAR_3)
{
 struct lem_counter *VAR_4 = &VAR_2->y[VAR_3].lem ;

 VAR_4->lem_on = 0 ;
 FUNC_0(FUNC_1(VAR_3,VAR_0),VAR_1) ;
}
