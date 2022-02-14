
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t size; int * data; } ;
typedef TYPE_1__ uivector ;


 int FUNC_0 (TYPE_1__*,size_t) ;

__attribute__((used)) static unsigned FUNC_1(uivector* VAR_0, const uivector* VAR_1)
{
  size_t VAR_2;
  if(!FUNC_0(VAR_0, VAR_1->size)) return 0;
  for(VAR_2 = 0; VAR_2 < VAR_1->size; VAR_2++) VAR_0->data[VAR_2] = VAR_1->data[VAR_2];
  return 1;
}
