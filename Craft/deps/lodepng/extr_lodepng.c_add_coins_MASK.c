
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {size_t size; int * data; } ;
struct TYPE_5__ {scalar_t__ weight; TYPE_2__ symbols; } ;
typedef TYPE_1__ Coin ;


 int FUNC_0 (TYPE_2__*,int ) ;

__attribute__((used)) static void FUNC_1(Coin* VAR_0, const Coin* VAR_1)
{
  size_t VAR_2;
  for(VAR_2 = 0; VAR_2 < VAR_1->symbols.size; VAR_2++) FUNC_0(&VAR_0->symbols, VAR_1->symbols.data[VAR_2]);
  VAR_0->weight += VAR_1->weight;
}
