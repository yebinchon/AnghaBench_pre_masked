
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned int num_counters; } ;
struct TYPE_3__ {int * counter; } ;


 TYPE_2__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(void *VAR_2)
{
 unsigned int VAR_3 = VAR_0.num_counters;

 switch (VAR_3) {
 case 4:
  FUNC_7(0);
  FUNC_3(VAR_1.counter[3]);
 case 3:
  FUNC_6(0);
  FUNC_2(VAR_1.counter[2]);
 case 2:
  FUNC_5(0);
  FUNC_1(VAR_1.counter[1]);
 case 1:
  FUNC_4(0);
  FUNC_0(VAR_1.counter[0]);
 }
}
