
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {void* min_delta_ns; void* max_delta_ns; int mult; int cpumask; } ;
struct TYPE_6__ {int shift; int mult; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 TYPE_3__ VAR_4 ;
 void* FUNC_0 (int,TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,int) ;
 TYPE_1__ VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (scalar_t__,int *) ;
 int FUNC_7 () ;

void FUNC_8(void)
{
 VAR_4.cpumask = FUNC_4(FUNC_7());
 VAR_4.mult = FUNC_5(VAR_0, VAR_3, 32);
 VAR_4.max_delta_ns =
  FUNC_0(0xFFFF, &VAR_4);
 VAR_4.min_delta_ns =
  FUNC_0(0x3f, &VAR_4);
 FUNC_1(&VAR_4);

 FUNC_6(VAR_2 + VAR_1, &VAR_6);

 VAR_5.mult = FUNC_2(VAR_0, VAR_5.shift);
 FUNC_3(&VAR_5);
}
