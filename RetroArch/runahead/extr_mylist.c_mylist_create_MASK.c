
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int destructor_t ;
typedef int constructor_t ;
struct TYPE_4__ {void** data; int capacity; int destructor; int constructor; scalar_t__ size; } ;
typedef TYPE_1__ MyList ;


 scalar_t__ FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__**) ;

void FUNC_3(MyList **VAR_0, int VAR_1,
      constructor_t VAR_2, destructor_t VAR_3)
{
   MyList *VAR_4 = ((void*)0);

   if (!VAR_0)
      return;

   if (VAR_1 < 0)
      VAR_1 = 0;

   VAR_4 = *VAR_0;
   if (VAR_4)
      FUNC_2(VAR_0);

   VAR_4 = (MyList*)FUNC_1(sizeof(MyList));
   *VAR_0 = VAR_4;
   VAR_4->size = 0;
   VAR_4->constructor = VAR_2;
   VAR_4->destructor = VAR_3;

   if (VAR_1 > 0)
   {
      VAR_4->data = (void**)FUNC_0(VAR_1, sizeof(void*));
      VAR_4->capacity = VAR_1;
   }
   else
   {
      VAR_4->data = ((void*)0);
      VAR_4->capacity = 0;
   }
}
