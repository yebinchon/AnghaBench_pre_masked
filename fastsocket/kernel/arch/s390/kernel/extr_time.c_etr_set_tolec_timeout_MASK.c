
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int p1; int p0; } ;


 unsigned long VAR_0 ;
 TYPE_1__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 unsigned long long VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int *,scalar_t__) ;

__attribute__((used)) static void FUNC_1(unsigned long long VAR_7)
{
 unsigned long VAR_8;

 if ((!VAR_1.p0 || VAR_2) &&
     (!VAR_1.p1 || VAR_3))
  return;
 VAR_8 = (VAR_7 > VAR_5) ? ((VAR_7 - VAR_5) >> 12) : 0;
 VAR_8 = (VAR_8 > 1600000) ? 0 : 1600000 - VAR_8;
 FUNC_0(&VAR_4, VAR_6 + (VAR_8 * VAR_0) / 1000000 + 1);
}
