
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int imask; } ;


 unsigned int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;

__attribute__((used)) static inline void FUNC_1(unsigned int VAR_3)
{
 unsigned int VAR_4 = VAR_3 - VAR_0;

 VAR_2 &= ~(1 << VAR_4);
 VAR_1->imask = VAR_2;
 FUNC_0();
}
