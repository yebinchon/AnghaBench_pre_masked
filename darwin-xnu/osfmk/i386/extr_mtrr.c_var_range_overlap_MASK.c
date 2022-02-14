
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
struct TYPE_3__ {int base; int mask; } ;
typedef TYPE_1__ mtrr_var_range_t ;
typedef int addr64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static int
FUNC_1(mtrr_var_range_t * VAR_4, addr64_t VAR_5,
    uint64_t VAR_6, uint32_t VAR_7)
{
 uint64_t VAR_8, VAR_9;
 uint32_t VAR_10;
 int VAR_11 = 0;

 VAR_8 = VAR_4->base & VAR_0;
 VAR_10 = (uint32_t)(VAR_4->base & VAR_1);
 VAR_9 = FUNC_0(VAR_4->mask);


 if ((VAR_8 >= VAR_5 && VAR_8 < (VAR_5 + VAR_6)) ||
     (VAR_5 >= VAR_8 && VAR_5 < (VAR_8 + VAR_9))) {

  if (VAR_8 == VAR_5 && VAR_9 == VAR_6 && VAR_10 == VAR_7)
   VAR_11 = 1;
  else if ( VAR_10 == VAR_2 &&
       VAR_7 == VAR_2 ) {

  }
  else if ((VAR_10 == VAR_2 &&
              VAR_7 == VAR_3) ||
    (VAR_10 == VAR_3 &&
       VAR_7 == VAR_2)) {

  }
  else {

   VAR_11 = -1;
  }
 }

 return VAR_11;
}
