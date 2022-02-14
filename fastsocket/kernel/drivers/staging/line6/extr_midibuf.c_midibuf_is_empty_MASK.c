
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct MidiBuffer {scalar_t__ pos_read; scalar_t__ pos_write; int full; } ;



__attribute__((used)) static int FUNC_0(struct MidiBuffer *VAR_0)
{
 return (VAR_0->pos_read == VAR_0->pos_write) && !VAR_0->full;
}
