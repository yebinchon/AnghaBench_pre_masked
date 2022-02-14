
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ampdu_info {TYPE_1__* wlc; } ;
struct TYPE_2__ {int band; } ;


 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static bool FUNC_1(struct ampdu_info *VAR_0)
{
 if (FUNC_0(VAR_0->wlc->band))
  return 1;
 else
  return 0;
}
