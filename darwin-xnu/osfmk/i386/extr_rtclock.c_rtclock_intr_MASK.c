
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int x86_saved_state_t ;
struct TYPE_6__ {int cs; int rip; } ;
struct TYPE_7__ {TYPE_1__ isf; } ;
typedef TYPE_2__ x86_saved_state64_t ;
struct TYPE_8__ {int cs; int eip; } ;
typedef TYPE_3__ x86_saved_state32_t ;
typedef int uint64_t ;
typedef scalar_t__ boolean_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 () ;
 TYPE_3__* FUNC_4 (int *) ;
 TYPE_2__* FUNC_5 (int *) ;
 int FUNC_6 (scalar_t__,int ) ;

void
FUNC_7(
 x86_saved_state_t *VAR_2)
{
        uint64_t VAR_3;
 boolean_t VAR_4 = VAR_0;

 FUNC_0(FUNC_1() > 0);
 FUNC_0(!FUNC_3());

 if (FUNC_2(VAR_2) == VAR_1) {
         x86_saved_state64_t *VAR_5;

  VAR_5 = FUNC_5(VAR_2);

  if (VAR_5->isf.cs & 0x03)
   VAR_4 = VAR_1;
  VAR_3 = VAR_5->isf.rip;
 } else {
         x86_saved_state32_t *VAR_6;

  VAR_6 = FUNC_4(VAR_2);

  if (VAR_6->cs & 0x03)
          VAR_4 = VAR_1;
  VAR_3 = VAR_6->eip;
 }


 FUNC_6(VAR_4, VAR_3);
}
