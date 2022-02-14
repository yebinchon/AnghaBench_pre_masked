
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t UINT ;
struct TYPE_5__ {size_t num_value; struct TYPE_5__* values; int type; } ;
typedef TYPE_1__ ELEMENT ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__,int ) ;

void FUNC_2(ELEMENT *VAR_0)
{
 UINT VAR_1;

 if (VAR_0 == ((void*)0))
 {
  return;
 }

 for (VAR_1 = 0;VAR_1 < VAR_0->num_value;VAR_1++)
 {
  FUNC_1(VAR_0->values[VAR_1], VAR_0->type);
 }
 FUNC_0(VAR_0->values);

 FUNC_0(VAR_0);
}
