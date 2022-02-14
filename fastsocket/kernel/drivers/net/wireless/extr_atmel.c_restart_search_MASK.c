
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct atmel_private {scalar_t__ current_BSS; TYPE_1__* BSSinfo; int connect_to_any_BSS; } ;
struct TYPE_2__ {int channel; } ;


 int FUNC_0 (struct atmel_private*,int) ;
 int FUNC_1 (struct atmel_private*,int) ;
 int FUNC_2 (struct atmel_private*) ;

__attribute__((used)) static void FUNC_3(struct atmel_private *VAR_0)
{
 int VAR_1;

 if (!VAR_0->connect_to_any_BSS) {
  FUNC_1(VAR_0, 1);
 } else {
  VAR_0->BSSinfo[(int)(VAR_0->current_BSS)].channel |= 0x80;

  if ((VAR_1 = FUNC_2(VAR_0)) != -1)
   FUNC_0(VAR_0, VAR_1);
  else
   FUNC_1(VAR_0, 0);
 }
}
