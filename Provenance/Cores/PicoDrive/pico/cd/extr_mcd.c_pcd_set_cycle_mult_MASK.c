
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ pal; } ;
struct TYPE_4__ {TYPE_1__ m; } ;


 TYPE_2__ VAR_0 ;
 unsigned long long VAR_1 ;

__attribute__((used)) static void FUNC_0(void)
{

  if (VAR_0.m.pal)
    VAR_1 = ((12500000ull << 16) / (50*312*488));
  else
    VAR_1 = ((12500000ull << 16) / (60*262*488)) + 1;
}
