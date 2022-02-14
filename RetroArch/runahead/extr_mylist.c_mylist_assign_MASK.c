
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int size; void** data; int (* destructor ) (void*) ;} ;
typedef TYPE_1__ MyList ;


 int FUNC_0 (void*) ;

void FUNC_1(MyList *VAR_0, int VAR_1, void *VAR_2)
{
   void *VAR_3 = ((void*)0);

   if (VAR_1 < 0 || VAR_1 >= VAR_0->size)
      return;

   VAR_3 = VAR_0->data[VAR_1];
   VAR_0->destructor(VAR_3);
   VAR_0->data[VAR_1] = VAR_2;
}
