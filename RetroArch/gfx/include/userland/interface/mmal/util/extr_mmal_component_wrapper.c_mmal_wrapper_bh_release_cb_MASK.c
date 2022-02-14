
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int (* callback ) (TYPE_3__*) ;} ;
struct TYPE_6__ {int queue; } ;
struct TYPE_5__ {TYPE_3__ wrapper; int sema; } ;
typedef TYPE_1__ MMAL_WRAPPER_PRIVATE_T ;
typedef TYPE_2__ MMAL_POOL_T ;
typedef int MMAL_BUFFER_HEADER_T ;
typedef int MMAL_BOOL_T ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static MMAL_BOOL_T FUNC_3(MMAL_POOL_T *VAR_0, MMAL_BUFFER_HEADER_T *VAR_1,
   void *VAR_2)
{
   MMAL_WRAPPER_PRIVATE_T *VAR_3 = (MMAL_WRAPPER_PRIVATE_T *)VAR_2;

   FUNC_0(VAR_0->queue, VAR_1);
   FUNC_2(&VAR_3->sema);

   if (VAR_3->wrapper.callback)
      VAR_3->wrapper.callback(&VAR_3->wrapper);

   return 0;
}
