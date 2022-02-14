
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int flags; scalar_t__ queue; scalar_t__ pool; int name; int out; scalar_t__ is_enabled; } ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef TYPE_1__ MMAL_CONNECTION_T ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_6(MMAL_CONNECTION_T *VAR_2)
{
   MMAL_STATUS_T VAR_3;

   if (VAR_2->is_enabled)
   {
      VAR_3 = FUNC_1(VAR_2);
      if (VAR_3 != VAR_1)
         return VAR_3;
   }


   if (VAR_2->flags & VAR_0)
   {
      VAR_3 = FUNC_3(VAR_2->out);
      if (VAR_3 != VAR_1)
         FUNC_0("connection %s could not be cleared", VAR_2->name);
   }


   if (VAR_2->pool)
      FUNC_2(VAR_2->pool);
   if (VAR_2->queue)
      FUNC_4(VAR_2->queue);

   FUNC_5(VAR_2);
   return VAR_1;
}
