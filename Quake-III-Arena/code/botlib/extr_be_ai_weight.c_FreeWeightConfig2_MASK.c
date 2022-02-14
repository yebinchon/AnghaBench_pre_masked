
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int numweights; TYPE_1__* weights; } ;
typedef TYPE_2__ weightconfig_t ;
struct TYPE_5__ {TYPE_2__* name; int firstseperator; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*) ;

void FUNC_2(weightconfig_t *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->numweights; VAR_1++)
 {
  FUNC_0(VAR_0->weights[VAR_1].firstseperator);
  if (VAR_0->weights[VAR_1].name) FUNC_1(VAR_0->weights[VAR_1].name);
 }
 FUNC_1(VAR_0);
}
