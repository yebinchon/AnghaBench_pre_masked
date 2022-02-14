
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kbd_data {int diacr; int accent_table_size; int tty; TYPE_1__* accent_table; } ;
struct TYPE_2__ {int diacr; unsigned int base; unsigned int result; } ;


 int FUNC_0 (int ,int) ;

__attribute__((used)) static unsigned int
FUNC_1(struct kbd_data *VAR_0, unsigned int VAR_1)
{
 int VAR_2, VAR_3;

 VAR_3 = VAR_0->diacr;
 VAR_0->diacr = 0;

 for (VAR_2 = 0; VAR_2 < VAR_0->accent_table_size; VAR_2++) {
  if (VAR_0->accent_table[VAR_2].diacr == VAR_3 &&
      VAR_0->accent_table[VAR_2].base == VAR_1)
   return VAR_0->accent_table[VAR_2].result;
 }

 if (VAR_1 == ' ' || VAR_1 == VAR_3)
  return VAR_3;

 FUNC_0(VAR_0->tty, VAR_3);
 return VAR_1;
}
