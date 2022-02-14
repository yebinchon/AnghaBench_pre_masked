
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct MidiBuffer {int pos_read; int size; scalar_t__ full; } ;


 int FUNC_0 (struct MidiBuffer*) ;

int FUNC_1(struct MidiBuffer *VAR_0, int VAR_1)
{
 int VAR_2 = FUNC_0(VAR_0);

 if (VAR_1 > VAR_2)
  VAR_1 = VAR_2;

 VAR_0->pos_read = (VAR_0->pos_read + VAR_1) % VAR_0->size;
 VAR_0->full = 0;
 return VAR_1;
}
