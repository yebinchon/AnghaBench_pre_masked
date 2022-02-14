
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int (* callback ) (TYPE_2__*) ;} ;
struct TYPE_6__ {int queue; } ;
typedef TYPE_1__ MMAL_POOL_T ;
typedef TYPE_2__ MMAL_CONNECTION_T ;
typedef int MMAL_BUFFER_HEADER_T ;
typedef int MMAL_BOOL_T ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (TYPE_2__*) ;

__attribute__((used)) static MMAL_BOOL_T FUNC_3(MMAL_POOL_T *VAR_0, MMAL_BUFFER_HEADER_T *VAR_1,
   void *VAR_2)
{
   MMAL_CONNECTION_T *VAR_3 = (MMAL_CONNECTION_T *)VAR_2;
   FUNC_0(VAR_0);


   FUNC_1(VAR_0->queue, VAR_1);

   if (VAR_3->callback)
      VAR_3->callback(VAR_3);

   return 0;
}
