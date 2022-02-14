
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int sem; TYPE_1__* waiters; } ;
typedef TYPE_2__ WFC_WAITPOOL_T ;
typedef scalar_t__ VCOS_STATUS_T ;
struct TYPE_4__ {int sem; scalar_t__ inuse; } ;


 char* VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static VCOS_STATUS_T FUNC_2(WFC_WAITPOOL_T *VAR_3)
{
   VCOS_STATUS_T VAR_4;
   int VAR_5;

   VAR_4 = FUNC_0(&VAR_3->sem, VAR_0,
                                  VAR_2);
   if (VAR_4 != VAR_1)
      return VAR_4;

   for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++)
   {
      VAR_3->waiters[VAR_5].inuse = 0;
      VAR_4 = FUNC_0(&VAR_3->waiters[VAR_5].sem,
                                     "wfc ipc waiter", 0);
      if (VAR_4 != VAR_1)
         break;
   }

   if (VAR_4 != VAR_1)
   {

      VAR_5--;
      while (VAR_5 >= 0)
      {
         FUNC_1(&VAR_3->waiters[VAR_5].sem);
         VAR_5--;
      }
      FUNC_1(&VAR_3->sem);
   }
   return VAR_4;
}
