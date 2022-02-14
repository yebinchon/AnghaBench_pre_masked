
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct MidiBuffer {int command_prev; } ;



int FUNC_0(struct MidiBuffer *VAR_0, unsigned short VAR_1)
{
 int VAR_2 = VAR_0->command_prev;

 if ((VAR_2 >= 0x80) && (VAR_2 < 0xf0))
  if ((VAR_1 & (1 << (VAR_2 & 0x0f))) == 0)
   return 1;

 return 0;
}
