
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * type; int * priv; } ;
typedef TYPE_1__ MMAL_BUFFER_HEADER_T ;
typedef int MMAL_BUFFER_HEADER_PRIVATE_T ;


 int FUNC_0 (void*,int ,unsigned int) ;
 unsigned int FUNC_1 (int ) ;

MMAL_BUFFER_HEADER_T *FUNC_2(void *VAR_0, unsigned int VAR_1)
{
   MMAL_BUFFER_HEADER_T *VAR_2;
   unsigned int VAR_3 = FUNC_1(0);

   if(VAR_1 < VAR_3)
      return 0;

   FUNC_0(VAR_0, 0, VAR_3);

   VAR_2 = (MMAL_BUFFER_HEADER_T *)VAR_0;
   VAR_2->type = (void *)&VAR_2[1];
   VAR_2->priv = (MMAL_BUFFER_HEADER_PRIVATE_T *)&VAR_2->type[1];
   return VAR_2;
}
