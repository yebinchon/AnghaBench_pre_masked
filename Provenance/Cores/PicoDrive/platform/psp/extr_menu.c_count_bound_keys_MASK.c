
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* KeyBinds; } ;


 TYPE_1__ VAR_0 ;

__attribute__((used)) static int FUNC_0(int VAR_1, int VAR_2)
{
 int VAR_3, VAR_4 = 0;

 for (VAR_3 = 0; VAR_3 < 32; VAR_3++)
 {
  if (VAR_2 >= 0 && (VAR_0.KeyBinds[VAR_3]&0x30000) != (VAR_2<<16)) continue;
  if (VAR_0.KeyBinds[VAR_3] & VAR_1) VAR_4++;
 }

 return VAR_4;
}
