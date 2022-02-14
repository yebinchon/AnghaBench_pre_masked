
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_2__ {scalar_t__ clock_comparator; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 TYPE_1__ VAR_3 ;
 int FUNC_0 (unsigned long) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (scalar_t__) ;
 unsigned long VAR_4 ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 () ;

__attribute__((used)) static void FUNC_7(unsigned long long VAR_5)
{
 unsigned long VAR_6;
 u64 VAR_7;
 u64 VAR_8;

 VAR_6 = VAR_4 | VAR_2 | VAR_0 | VAR_1;
 VAR_8 = FUNC_1() + (VAR_5 << 12);
 do {
  VAR_7 = 0;
  if (VAR_8 < VAR_3.clock_comparator) {
   VAR_7 = FUNC_3();
   FUNC_5(VAR_8);
  }
  FUNC_6();
  FUNC_0(VAR_6);
  FUNC_2();
  if (VAR_7)
   FUNC_4(VAR_7);
 } while (FUNC_1() < VAR_8);
 FUNC_5(VAR_3.clock_comparator);
}
