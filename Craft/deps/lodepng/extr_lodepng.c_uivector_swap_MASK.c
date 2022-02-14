
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t size; size_t allocsize; unsigned int* data; } ;
typedef TYPE_1__ uivector ;



__attribute__((used)) static void FUNC_0(uivector* VAR_0, uivector* VAR_1)
{
  size_t VAR_2;
  unsigned* VAR_3;
  VAR_2 = VAR_0->size; VAR_0->size = VAR_1->size; VAR_1->size = VAR_2;
  VAR_2 = VAR_0->allocsize; VAR_0->allocsize = VAR_1->allocsize; VAR_1->allocsize = VAR_2;
  VAR_3 = VAR_0->data; VAR_0->data = VAR_1->data; VAR_1->data = VAR_3;
}
