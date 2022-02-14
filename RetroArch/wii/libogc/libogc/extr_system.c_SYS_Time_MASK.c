
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_3__ {scalar_t__ counter_bias; } ;
typedef TYPE_1__ syssram ;


 scalar_t__ FUNC_0 (int*) ;
 int VAR_0 ;
 int FUNC_1 (int*) ;
 TYPE_1__* FUNC_2 () ;
 int FUNC_3 (int ) ;

u64 FUNC_4()
{
 u64 VAR_1 = 0;
    u32 VAR_2 =0;
    FUNC_1(&VAR_2);
    VAR_1 = VAR_2;





 syssram* VAR_3 = FUNC_2();
 VAR_1 += VAR_3->counter_bias;
 FUNC_3(0);

 return (VAR_0 * 1000) * VAR_1;
}
