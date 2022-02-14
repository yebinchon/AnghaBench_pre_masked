
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long data; scalar_t__ huge_delay; scalar_t__ data_reversed; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned long) ;
 unsigned long FUNC_2 () ;
 int FUNC_3 (unsigned long) ;

__attribute__((used)) static void FUNC_4(unsigned int VAR_1)
{
 unsigned long VAR_2 = FUNC_2();
 if (VAR_0->data_reversed)
  VAR_1 = !VAR_1;
 if (VAR_1)
  VAR_2 |= VAR_0->data;
 else
  VAR_2 &= ~VAR_0->data;

 FUNC_3(VAR_2);
 FUNC_0(50 + VAR_0->huge_delay);
 FUNC_1(VAR_2);
}
