
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ VCOS_STATUS_T ;
struct TYPE_5__ {int sem; TYPE_1__* waiters; } ;
struct TYPE_4__ {int sem; scalar_t__ inuse; } ;
typedef TYPE_2__ MMAL_WAITPOOL_T ;
typedef int MMAL_STATUS_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_2(MMAL_WAITPOOL_T *VAR_5)
{
   VCOS_STATUS_T VAR_6;
   int VAR_7;

   VAR_6 = FUNC_0(&VAR_5->sem, VAR_3,
                                  VAR_0);
   if (VAR_6 != VAR_4)
      return VAR_6==VAR_4 ? VAR_2 : VAR_1;

   for (VAR_7=0; VAR_7<VAR_0; VAR_7++)
   {
      VAR_5->waiters[VAR_7].inuse = 0;
      VAR_6 = FUNC_0(&VAR_5->waiters[VAR_7].sem,
                                     "mmal waiter", 0);
      if (VAR_6 != VAR_4)
         break;
   }

   if (VAR_6 != VAR_4)
   {

      VAR_7--;
      while (VAR_7>=0)
      {
         FUNC_1(&VAR_5->waiters[VAR_7].sem);
         VAR_7--;
      }
      FUNC_1(&VAR_5->sem);
   }
   return VAR_6==VAR_4 ? VAR_2 : VAR_1;
}
