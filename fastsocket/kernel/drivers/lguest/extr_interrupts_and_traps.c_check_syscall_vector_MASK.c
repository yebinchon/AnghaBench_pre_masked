
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct lguest {TYPE_1__* lguest_data; } ;
struct TYPE_2__ {int syscall_vec; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int *) ;

bool FUNC_2(struct lguest *VAR_0)
{
 u32 VAR_1;

 if (FUNC_1(VAR_1, &VAR_0->lguest_data->syscall_vec))
  return 0;

 return FUNC_0(VAR_1);
}
