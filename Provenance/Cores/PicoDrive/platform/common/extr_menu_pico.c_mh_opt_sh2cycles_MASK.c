
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int msh2_khz; int ssh2_khz; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__ VAR_5 ;

__attribute__((used)) static int FUNC_0(int VAR_6, int VAR_7)
{
 int *VAR_8 = (VAR_6 == VAR_0) ?
  &VAR_5.msh2_khz : &VAR_5.ssh2_khz;

 if (VAR_7 & (VAR_2|VAR_4))
  *VAR_8 += (VAR_7 & VAR_2) ? -50 : 50;
 if (VAR_7 & (VAR_1|VAR_3))
  *VAR_8 += (VAR_7 & VAR_1) ? -500 : 500;

 if (*VAR_8 < 1)
  *VAR_8 = 1;
 else if (*VAR_8 > 0x7fffffff / 1000)
  *VAR_8 = 0x7fffffff / 1000;

 return 0;
}
