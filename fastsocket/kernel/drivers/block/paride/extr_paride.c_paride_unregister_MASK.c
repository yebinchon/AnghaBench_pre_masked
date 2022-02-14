
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t index; int name; } ;
typedef TYPE_1__ PIP ;


 int FUNC_0 (char*,int ) ;
 TYPE_1__** VAR_0 ;

void FUNC_1(PIP * VAR_1)
{
 if (!VAR_1)
  return;
 if (VAR_0[VAR_1->index] != VAR_1) {
  FUNC_0("paride: %s not registered\n", VAR_1->name);
  return;
 }
 VAR_0[VAR_1->index] = ((void*)0);
}
