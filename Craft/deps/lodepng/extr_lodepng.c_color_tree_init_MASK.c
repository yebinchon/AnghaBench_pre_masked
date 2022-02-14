
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int index; scalar_t__* children; } ;
typedef TYPE_1__ ColorTree ;



__attribute__((used)) static void FUNC_0(ColorTree* VAR_0)
{
  int VAR_1;
  for(VAR_1 = 0; VAR_1 < 16; VAR_1++) VAR_0->children[VAR_1] = 0;
  VAR_0->index = -1;
}
