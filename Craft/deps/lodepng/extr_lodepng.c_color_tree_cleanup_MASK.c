
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__** children; } ;
typedef TYPE_1__ ColorTree ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(ColorTree* VAR_0)
{
  int VAR_1;
  for(VAR_1 = 0; VAR_1 < 16; VAR_1++)
  {
    if(VAR_0->children[VAR_1])
    {
      FUNC_1(VAR_0->children[VAR_1]);
      FUNC_0(VAR_0->children[VAR_1]);
    }
  }
}
