
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int clock; } ;
struct TYPE_4__ {TYPE_1__ mmtimer; } ;
struct k_itimer {TYPE_2__ it; } ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct k_itimer *VAR_1)
{

 VAR_1->it.mmtimer.clock = VAR_0;
 return 0;
}
