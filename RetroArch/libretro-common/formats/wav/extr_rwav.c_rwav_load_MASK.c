
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int rwav_t ;
struct TYPE_4__ {scalar_t__ step; scalar_t__ j; scalar_t__ i; scalar_t__ size; int * data; int * out; } ;
typedef TYPE_1__ rwav_iterator_t ;
typedef enum rwav_state { ____Placeholder_rwav_state } rwav_state ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int *,void const*,size_t) ;
 int FUNC_1 (TYPE_1__*) ;

enum rwav_state FUNC_2(rwav_t* VAR_1, const void* VAR_2, size_t VAR_3)
{
   enum rwav_state VAR_4;
   rwav_iterator_t VAR_5;

   VAR_5.out = ((void*)0);
   VAR_5.data = ((void*)0);
   VAR_5.size = 0;
   VAR_5.i = 0;
   VAR_5.j = 0;
   VAR_5.step = 0;

   FUNC_0(&VAR_5, VAR_1, VAR_2, VAR_3);

   do
   {
      VAR_4 = FUNC_1(&VAR_5);
   }while (VAR_4 == VAR_0);

   return VAR_4;
}
