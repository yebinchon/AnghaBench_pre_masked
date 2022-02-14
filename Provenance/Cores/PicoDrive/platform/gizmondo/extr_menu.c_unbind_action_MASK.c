
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* KeyBinds; } ;


 TYPE_1__ VAR_0 ;

__attribute__((used)) static void FUNC_0(int VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < 32; VAR_2++)
  VAR_0.KeyBinds[VAR_2] &= ~VAR_1;
}
