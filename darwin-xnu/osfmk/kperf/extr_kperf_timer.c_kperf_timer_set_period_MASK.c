
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_2__ {scalar_t__ period; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 unsigned int VAR_1 ;
 TYPE_1__* VAR_2 ;
 unsigned int VAR_3 ;

int
FUNC_2(unsigned int VAR_4, uint64_t VAR_5)
{
 uint64_t VAR_6;

 if (VAR_4 >= VAR_1) {
  return VAR_0;
 }

 if (VAR_3 == VAR_4) {
  VAR_6 = FUNC_1();
 } else {
  VAR_6 = FUNC_0();
 }

 if (VAR_5 > 0 && VAR_5 < VAR_6) {
  VAR_5 = VAR_6;
 }

 VAR_2[VAR_4].period = VAR_5;



 return 0;
}
