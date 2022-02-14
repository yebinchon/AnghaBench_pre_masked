
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned int num_counters; } ;
struct TYPE_3__ {int ctrl; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ) ;
 TYPE_2__ VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static void FUNC_2(void *VAR_2)
{
 unsigned int VAR_3 = VAR_0.num_counters;
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
  FUNC_1(VAR_1[VAR_4].ctrl, FUNC_0(VAR_4));
}
