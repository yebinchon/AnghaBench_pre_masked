
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ lbr_format; } ;
struct TYPE_4__ {TYPE_1__ intel_cap; int lbr_nr; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 TYPE_2__ VAR_1 ;

void FUNC_2(void)
{
 if (!VAR_1.lbr_nr)
  return;

 if (VAR_1.intel_cap.lbr_format == VAR_0)
  FUNC_0();
 else
  FUNC_1();
}
