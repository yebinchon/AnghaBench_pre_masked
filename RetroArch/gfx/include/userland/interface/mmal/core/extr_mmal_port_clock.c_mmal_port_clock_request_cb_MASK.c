
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_3__ {scalar_t__ user_data; } ;
typedef int MMAL_PORT_T ;
typedef int (* MMAL_PORT_CLOCK_REQUEST_CB ) (int *,int ,void*) ;
typedef int MMAL_CLOCK_VOID_FP ;
typedef TYPE_1__ MMAL_CLOCK_T ;



__attribute__((used)) static void FUNC_0(MMAL_CLOCK_T* VAR_0, int64_t VAR_1, void *VAR_2, MMAL_CLOCK_VOID_FP VAR_3)
{
   MMAL_PORT_CLOCK_REQUEST_CB VAR_4 = (MMAL_PORT_CLOCK_REQUEST_CB)VAR_3;


   VAR_4((MMAL_PORT_T*)VAR_0->user_data, VAR_1, VAR_2);
}
