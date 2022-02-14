
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int DSPbase; } ;
typedef TYPE_1__ IXJ ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static IXJ *FUNC_0(void)
{
 int VAR_2;
 for(VAR_2=0; VAR_2<VAR_0; VAR_2++) {
  if(!VAR_1[VAR_2].DSPbase)
   return &VAR_1[VAR_2];
 }
 return ((void*)0);
}
