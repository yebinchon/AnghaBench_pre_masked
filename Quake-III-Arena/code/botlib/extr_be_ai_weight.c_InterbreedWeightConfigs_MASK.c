
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int numweights; TYPE_1__* weights; } ;
typedef TYPE_2__ weightconfig_t ;
struct TYPE_9__ {int (* Print ) (int ,char*) ;} ;
struct TYPE_7__ {int firstseperator; } ;


 int FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;
 TYPE_3__ VAR_1 ;
 int FUNC_1 (int ,char*) ;

void FUNC_2(weightconfig_t *VAR_2, weightconfig_t *VAR_3,
        weightconfig_t *VAR_4)
{
 int VAR_5;

 if (VAR_2->numweights != VAR_3->numweights ||
  VAR_2->numweights != VAR_4->numweights)
 {
  VAR_1.Print(VAR_0, "cannot interbreed weight configs, unequal numweights\n");
  return;
 }
 for (VAR_5 = 0; VAR_5 < VAR_2->numweights; VAR_5++)
 {
  FUNC_0(VAR_2->weights[VAR_5].firstseperator,
         VAR_3->weights[VAR_5].firstseperator,
         VAR_4->weights[VAR_5].firstseperator);
 }
}
