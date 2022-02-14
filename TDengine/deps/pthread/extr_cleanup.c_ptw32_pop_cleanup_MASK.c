
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ prev; int arg; int (* routine ) (int ) ;} ;
typedef TYPE_1__ ptw32_cleanup_t ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,void*) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;

ptw32_cleanup_t *
FUNC_3 (int VAR_1)
{
  ptw32_cleanup_t *VAR_2;

  VAR_2 = (ptw32_cleanup_t *) FUNC_0 (VAR_0);

  if (VAR_2 != ((void*)0))
    {
      if (VAR_1 && (VAR_2->routine != ((void*)0)))
 {

   (*VAR_2->routine) (VAR_2->arg);

 }

      FUNC_1 (VAR_0, (void *) VAR_2->prev);

    }

  return (VAR_2);

}
