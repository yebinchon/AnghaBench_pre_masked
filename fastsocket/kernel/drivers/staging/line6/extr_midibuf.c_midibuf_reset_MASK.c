
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct MidiBuffer {int command_prev; scalar_t__ full; scalar_t__ pos_write; scalar_t__ pos_read; } ;



void FUNC_0(struct MidiBuffer *VAR_0)
{
 VAR_0->pos_read = VAR_0->pos_write = VAR_0->full = 0;
 VAR_0->command_prev = -1;
}
