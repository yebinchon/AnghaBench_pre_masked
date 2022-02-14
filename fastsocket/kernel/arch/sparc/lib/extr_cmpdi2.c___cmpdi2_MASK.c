
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int word_type ;
struct TYPE_3__ {scalar_t__ high; scalar_t__ low; } ;
struct TYPE_4__ {long long ll; TYPE_1__ s; } ;
typedef TYPE_2__ DWunion ;



word_type FUNC_0(long long VAR_0, long long VAR_1)
{
 const DWunion VAR_2 = {
  .ll = VAR_0
 };
 const DWunion VAR_3 = {
  .ll = VAR_1
 };

 if (VAR_2.s.high < VAR_3.s.high)
  return 0;
 else if (VAR_2.s.high > VAR_3.s.high)
  return 2;

 if ((unsigned int) VAR_2.s.low < (unsigned int) VAR_3.s.low)
  return 0;
 else if ((unsigned int) VAR_2.s.low > (unsigned int) VAR_3.s.low)
  return 2;

 return 1;
}
