
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int name; void* userdata; int buffer_size; int buffer_num; } ;
typedef scalar_t__ MMAL_STATUS_T ;
typedef int MMAL_QUEUE_T ;
typedef TYPE_1__ MMAL_PORT_T ;
typedef int MMAL_POOL_T ;


 int FUNC_0 (char*,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ) ;
 int * FUNC_3 (TYPE_1__*,int ,int ) ;
 int * FUNC_4 () ;
 int FUNC_5 (int *) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_6(MMAL_PORT_T *VAR_3, MMAL_QUEUE_T **VAR_4, MMAL_POOL_T **VAR_5)
{
   MMAL_STATUS_T VAR_6 = VAR_0;
   MMAL_QUEUE_T *VAR_7 = ((void*)0);
   MMAL_POOL_T *VAR_8 = ((void*)0);



   VAR_7 = FUNC_4();
   if (!VAR_7)
   {
      FUNC_0("failed to create queue for %s", VAR_3->name);
      goto error;
   }


   VAR_8 = FUNC_3(VAR_3, VAR_3->buffer_num, VAR_3->buffer_size);
   if (!VAR_8)
   {
      FUNC_0("failed to create pool for %s", VAR_3->name);
      goto error;
   }

   VAR_3->userdata = (void *)VAR_7;

   VAR_6 = FUNC_2(VAR_3, VAR_2);
   if (VAR_6 != VAR_1)
   {
      FUNC_0("failed to enable %s", VAR_3->name);
      goto error;
   }

   *VAR_4 = VAR_7;
   *VAR_5 = VAR_8;

   return VAR_1;

error:
   if (VAR_7)
      FUNC_5(VAR_7);
   if (VAR_8)
      FUNC_1(VAR_8);

   return VAR_6;
}
