
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ magic; struct TYPE_3__* extradata; } ;
typedef int MMAL_ES_FORMAT_T ;
typedef TYPE_1__ MMAL_ES_FORMAT_PRIVATE_T ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2(MMAL_ES_FORMAT_T *VAR_1)
{
   MMAL_ES_FORMAT_PRIVATE_T *VAR_2 = (MMAL_ES_FORMAT_PRIVATE_T *)VAR_1;
   FUNC_0(VAR_2->magic == VAR_0);
   if(VAR_2->extradata) FUNC_1(VAR_2->extradata);
   FUNC_1(VAR_2);
}
