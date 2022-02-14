
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ncached_max; } ;
typedef TYPE_1__ tcache_bin_info_t ;
struct TYPE_5__ {int nregs; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_3__* VAR_5 ;
 scalar_t__ FUNC_0 (int) ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 int FUNC_1 (unsigned int) ;
 scalar_t__ VAR_9 ;
 TYPE_1__* VAR_10 ;
 unsigned int VAR_11 ;

bool
FUNC_2(void)
{
 unsigned VAR_12;





 if (VAR_8 < 0 || (1U << VAR_8) < VAR_1)
  VAR_11 = VAR_1;
 else if ((1U << VAR_8) > VAR_6)
  VAR_11 = VAR_6;
 else
  VAR_11 = (1U << VAR_8);

 VAR_7 = FUNC_1(VAR_11) + 1;


 VAR_10 = (tcache_bin_info_t *)FUNC_0(VAR_7 *
     sizeof(tcache_bin_info_t));
 if (VAR_10 == ((void*)0))
  return (1);
 VAR_9 = 0;
 for (VAR_12 = 0; VAR_12 < VAR_0; VAR_12++) {
  if ((VAR_5[VAR_12].nregs << 1) <= VAR_4) {
   VAR_10[VAR_12].ncached_max =
       VAR_4;
  } else if ((VAR_5[VAR_12].nregs << 1) <=
      VAR_3) {
   VAR_10[VAR_12].ncached_max =
       (VAR_5[VAR_12].nregs << 1);
  } else {
   VAR_10[VAR_12].ncached_max =
       VAR_3;
  }
  VAR_9 += VAR_10[VAR_12].ncached_max;
 }
 for (; VAR_12 < VAR_7; VAR_12++) {
  VAR_10[VAR_12].ncached_max = VAR_2;
  VAR_9 += VAR_10[VAR_12].ncached_max;
 }

 return (0);
}
