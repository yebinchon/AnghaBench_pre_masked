
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct corgi_ts {TYPE_1__* machinfo; } ;
struct TYPE_2__ {unsigned long (* get_hsync_invperiod ) () ;} ;


 int FUNC_0 (int ) ;
 unsigned long FUNC_1 () ;

__attribute__((used)) static unsigned long FUNC_2(struct corgi_ts *VAR_0)
{
 unsigned long VAR_1 = VAR_0->machinfo->get_hsync_invperiod();

 if (VAR_1)
  return FUNC_0(0)*1000/VAR_1;
 else
  return 0;
}
