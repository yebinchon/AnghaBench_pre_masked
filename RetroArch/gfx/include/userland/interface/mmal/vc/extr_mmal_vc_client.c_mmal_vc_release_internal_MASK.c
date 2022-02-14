
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ usecount; int lock; int service; } ;
typedef int MMAL_STATUS_T ;
typedef TYPE_1__ MMAL_CLIENT_T ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_3(MMAL_CLIENT_T *VAR_3)
{
   MMAL_STATUS_T VAR_4 = VAR_1;
   FUNC_1(&VAR_3->lock);
   if(--VAR_3->usecount == 0)
   {
      if(FUNC_0(VAR_3->service) != VAR_2)
      {
         VAR_3->usecount++;
         VAR_4 = VAR_0;
      }
   }
   FUNC_2(&VAR_3->lock);
   return VAR_4;
}
