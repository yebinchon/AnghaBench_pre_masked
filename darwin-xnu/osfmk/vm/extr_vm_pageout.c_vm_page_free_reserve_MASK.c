
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ vm_page_free_count_init; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 TYPE_1__ VAR_9 ;

void
FUNC_2(
 int VAR_10)
{
 int VAR_11;

 if (VAR_1) {

  if ((VAR_6 + VAR_10 + VAR_0) >= (VAR_3 + VAR_0))
   VAR_6 = VAR_3 + VAR_0;
  else
   VAR_6 += (VAR_10 + VAR_0);

 } else {
  if ((VAR_6 + VAR_10) >= VAR_3)
   VAR_6 = VAR_3;
  else
   VAR_6 += VAR_10;
 }
 VAR_11 = VAR_9.vm_page_free_count_init - VAR_6;

 VAR_5 = VAR_6 +
  FUNC_0(VAR_11);

 if (VAR_5 > VAR_2)
         VAR_5 = VAR_2;

 VAR_7 = VAR_6 +
  FUNC_1(VAR_11);

 if (VAR_7 > VAR_4)
         VAR_7 = VAR_4;

 if (VAR_7 < VAR_5 + 5)
  VAR_7 = VAR_5 + 5;

 VAR_8 = VAR_7 - (VAR_7 / 2);
}
