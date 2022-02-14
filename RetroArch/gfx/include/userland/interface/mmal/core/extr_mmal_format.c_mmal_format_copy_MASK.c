
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ extradata_size; scalar_t__ extradata; int * es; } ;
typedef TYPE_1__ MMAL_ES_FORMAT_T ;



void FUNC_0(MMAL_ES_FORMAT_T *VAR_0, MMAL_ES_FORMAT_T *VAR_1)
{
   void *VAR_2 = VAR_0->es;
   *VAR_0->es = *VAR_1->es;
   *VAR_0 = *VAR_1;
   VAR_0->es = VAR_2;
   VAR_0->extradata = 0;
   VAR_0->extradata_size = 0;
}
