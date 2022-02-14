
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_1__* pthread_t ;
struct TYPE_8__ {struct TYPE_8__* prevReuse; scalar_t__ x; } ;
typedef TYPE_1__ pte_thread_t ;


 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 TYPE_1__* VAR_2 ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;

void FUNC_3 (pthread_t VAR_5)
{
   pte_thread_t * VAR_6 = (pte_thread_t *) VAR_5;
   pthread_t VAR_7;

   FUNC_1 (VAR_4);

   VAR_7 = VAR_6;
   FUNC_0(VAR_6, 0, sizeof(pte_thread_t));


   VAR_6 = VAR_7;





   VAR_6->x++;


   VAR_6->prevReuse = VAR_1;

   if (VAR_1 != VAR_2)
      VAR_2->prevReuse = VAR_6;
   else
      VAR_3 = VAR_6;

   VAR_2 = VAR_6;

   FUNC_2(VAR_4);
}
