
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int size; int ** data; } ;
typedef TYPE_1__ MyList ;


 int FUNC_0 (TYPE_1__*,int,int *) ;

void FUNC_1(MyList *VAR_0, int VAR_1)
{
   int VAR_2;

   if (VAR_1 < 0 || VAR_1 >= VAR_0->size)
      return;

   FUNC_0(VAR_0, VAR_1, ((void*)0));

   for (VAR_2 = VAR_1 + 1; VAR_2 < VAR_0->size; VAR_2++)
      VAR_0->data[VAR_2 - 1] = VAR_0->data[VAR_2];

   VAR_0->size--;
   VAR_0->data[VAR_0->size] = ((void*)0);
}
