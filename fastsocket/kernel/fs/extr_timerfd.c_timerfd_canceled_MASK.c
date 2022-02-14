
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ tv64; } ;
struct timerfd_ctx {TYPE_1__ moffs; int might_cancel; } ;


 scalar_t__ VAR_0 ;
 TYPE_1__ FUNC_0 () ;

__attribute__((used)) static bool FUNC_1(struct timerfd_ctx *VAR_1)
{
 if (!VAR_1->might_cancel || VAR_1->moffs.tv64 != VAR_0)
  return 0;
 VAR_1->moffs = FUNC_0();
 return 1;
}
