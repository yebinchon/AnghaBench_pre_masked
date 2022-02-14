
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {unsigned int nChildren; } ;
typedef TYPE_1__* RealDTEntry ;


 TYPE_1__* FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static RealDTEntry
FUNC_1(RealDTEntry VAR_0)
{
 RealDTEntry VAR_1;
 unsigned int VAR_2;

 VAR_1 = FUNC_0(VAR_0);
 if (VAR_1 == ((void*)0)) {
  return ((void*)0);
 }
 for (VAR_2 = 0; VAR_2 < VAR_0->nChildren; VAR_2++) {
  VAR_1 = FUNC_1(VAR_1);
 }
 return VAR_1;
}
