
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* data; } ;
typedef TYPE_1__ MyList ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

void FUNC_2(MyList **VAR_0)
{
   MyList *VAR_1 = ((void*)0);
   if (!VAR_0)
      return;

   VAR_1 = *VAR_0;

   if (VAR_1)
   {
      FUNC_1(VAR_1, 0, 0);
      FUNC_0(VAR_1->data);
      FUNC_0(VAR_1);
      *VAR_0 = ((void*)0);
   }
}
