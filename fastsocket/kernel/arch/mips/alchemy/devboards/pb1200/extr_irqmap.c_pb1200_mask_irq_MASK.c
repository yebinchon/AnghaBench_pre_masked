
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int intclr_mask; int intclr; } ;


 unsigned int VAR_0 ;
 int FUNC_0 () ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static void FUNC_1(unsigned int VAR_2)
{
 VAR_1->intclr_mask = 1 << (VAR_2 - VAR_0);
 VAR_1->intclr = 1 << (VAR_2 - VAR_0);
 FUNC_0();
}
