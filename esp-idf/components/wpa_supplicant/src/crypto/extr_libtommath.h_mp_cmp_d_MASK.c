
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ sign; int used; scalar_t__* dp; } ;
typedef TYPE_1__ mp_int ;
typedef scalar_t__ mp_digit ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int
FUNC_0(mp_int * VAR_4, mp_digit VAR_5)
{

  if (VAR_4->sign == VAR_3) {
    return VAR_2;
  }


  if (VAR_4->used > 1) {
    return VAR_1;
  }


  if (VAR_4->dp[0] > VAR_5) {
    return VAR_1;
  } else if (VAR_4->dp[0] < VAR_5) {
    return VAR_2;
  } else {
    return VAR_0;
  }
}
