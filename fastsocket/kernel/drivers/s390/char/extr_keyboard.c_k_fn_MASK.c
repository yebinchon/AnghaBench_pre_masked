
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kbd_data {scalar_t__* func_table; int tty; } ;


 int FUNC_0 (int ,scalar_t__) ;

__attribute__((used)) static void
FUNC_1(struct kbd_data *VAR_0, unsigned char VAR_1)
{
 if (VAR_0->func_table[VAR_1])
  FUNC_0(VAR_0->tty, VAR_0->func_table[VAR_1]);
}
