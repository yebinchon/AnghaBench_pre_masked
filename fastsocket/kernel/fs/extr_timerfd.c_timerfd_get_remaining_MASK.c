
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct timerfd_ctx {int tmr; } ;
struct TYPE_5__ {scalar_t__ tv64; } ;
typedef TYPE_1__ ktime_t ;


 TYPE_1__ FUNC_0 (int *) ;
 TYPE_1__ FUNC_1 (int ,int ) ;

__attribute__((used)) static ktime_t FUNC_2(struct timerfd_ctx *VAR_0)
{
 ktime_t VAR_1;

 VAR_1 = FUNC_0(&VAR_0->tmr);
 return VAR_1.tv64 < 0 ? FUNC_1(0, 0): VAR_1;
}
