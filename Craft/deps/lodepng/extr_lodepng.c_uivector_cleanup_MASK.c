
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * data; scalar_t__ allocsize; scalar_t__ size; } ;
typedef TYPE_1__ uivector ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(void* VAR_0)
{
  ((uivector*)VAR_0)->size = ((uivector*)VAR_0)->allocsize = 0;
  FUNC_0(((uivector*)VAR_0)->data);
  ((uivector*)VAR_0)->data = ((void*)0);
}
