
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int bench_pattern_len; scalar_t__ bench_pattern; TYPE_1__* current_func; int num_failed; } ;
struct TYPE_3__ {int name; } ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (int ,scalar_t__,int ) ;

int FUNC_1(void)
{
    return !VAR_0.num_failed && VAR_0.bench_pattern &&
           !FUNC_0(VAR_0.current_func->name, VAR_0.bench_pattern, VAR_0.bench_pattern_len);
}
