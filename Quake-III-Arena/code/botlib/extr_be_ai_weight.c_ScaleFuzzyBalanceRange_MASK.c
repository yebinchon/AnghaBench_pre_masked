
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int numweights; TYPE_1__* weights; } ;
typedef TYPE_2__ weightconfig_t ;
struct TYPE_4__ {int firstseperator; } ;


 int FUNC_0 (int ,float) ;

void FUNC_1(weightconfig_t *VAR_0, float VAR_1)
{
 int VAR_2;

 if (VAR_1 < 0) VAR_1 = 0;
 else if (VAR_1 > 100) VAR_1 = 100;
 for (VAR_2 = 0; VAR_2 < VAR_0->numweights; VAR_2++)
 {
  FUNC_0(VAR_0->weights[VAR_2].firstseperator, VAR_1);
 }
}
