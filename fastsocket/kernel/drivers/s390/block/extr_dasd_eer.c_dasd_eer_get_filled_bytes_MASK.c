
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct eerbuffer {scalar_t__ head; scalar_t__ tail; int buffersize; } ;



__attribute__((used)) static int FUNC_0(struct eerbuffer *VAR_0)
{

 if (VAR_0->head >= VAR_0->tail)
  return VAR_0->head - VAR_0->tail;
 return VAR_0->buffersize - VAR_0->tail + VAR_0->head;
}
