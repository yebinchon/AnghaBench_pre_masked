
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dtl {size_t cpu; } ;
struct TYPE_2__ {int dtl_enable_mask; } ;


 int FUNC_0 (size_t) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct dtl *VAR_1)
{
 int VAR_2 = FUNC_0(VAR_1->cpu);

 VAR_0[VAR_1->cpu].dtl_enable_mask = 0x0;

 FUNC_1(VAR_2);
}
