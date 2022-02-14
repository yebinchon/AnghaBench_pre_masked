
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tremolo_core {int index; int maxindex; float* wavetable; } ;



float FUNC_0(struct tremolo_core *VAR_0,float VAR_1)
{
      VAR_0->index = VAR_0->index % VAR_0->maxindex;
      return VAR_1 * VAR_0->wavetable[VAR_0->index++];
}
