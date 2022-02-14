
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int rflags; } ;
struct TYPE_7__ {TYPE_1__ isf; } ;
typedef TYPE_2__ x86_saved_state64_t ;
struct TYPE_8__ {scalar_t__ cs; int efl; } ;
typedef TYPE_3__ x86_saved_state32_t ;
typedef int thread_t ;
typedef int kern_return_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_3__* FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ) ;

kern_return_t
FUNC_4(thread_t VAR_5, int VAR_6)
{
 FUNC_2(VAR_5, VAR_0);
 if (FUNC_3(VAR_5)) {
  x86_saved_state64_t *VAR_7;

  VAR_7 = FUNC_1(VAR_5);

  if (VAR_6)
   VAR_7->isf.rflags |= VAR_1;
  else
   VAR_7->isf.rflags &= ~VAR_1;
 } else {
  x86_saved_state32_t *VAR_8;

  VAR_8 = FUNC_0(VAR_5);

  if (VAR_6) {
   VAR_8->efl |= VAR_1;

   if (VAR_8->cs == VAR_3)
    VAR_8->cs = VAR_4;
  }
  else
   VAR_8->efl &= ~VAR_1;
 }

 return (VAR_2);
}
