
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int user_cs; scalar_t__ exec_limit; } ;
struct mm_struct {TYPE_1__ context; } ;


 int FUNC_0 (int *,int ) ;

void FUNC_1(struct mm_struct *VAR_0)
{
 VAR_0->context.exec_limit = 0;
 FUNC_0(&VAR_0->context.user_cs, 0);
}
