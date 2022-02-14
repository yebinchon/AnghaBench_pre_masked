
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* val; int* head; int* chain; } ;
typedef TYPE_1__ Hash ;



__attribute__((used)) static void FUNC_0(Hash* VAR_0, size_t VAR_1, int VAR_2, unsigned VAR_3)
{
  unsigned VAR_4 = VAR_1 % VAR_3;
  VAR_0->val[VAR_4] = VAR_2;
  if(VAR_0->head[VAR_2] != -1) VAR_0->chain[VAR_4] = VAR_0->head[VAR_2];
  VAR_0->head[VAR_2] = VAR_4;
}
