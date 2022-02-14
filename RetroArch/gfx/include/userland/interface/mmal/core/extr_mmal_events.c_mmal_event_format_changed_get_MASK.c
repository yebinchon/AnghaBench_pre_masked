
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_8__ {scalar_t__ cmd; int length; scalar_t__ data; } ;
struct TYPE_7__ {int extradata_size; int * es; int * extradata; } ;
struct TYPE_6__ {TYPE_2__* format; } ;
typedef TYPE_1__ MMAL_EVENT_FORMAT_CHANGED_T ;
typedef int MMAL_ES_SPECIFIC_FORMAT_T ;
typedef TYPE_2__ MMAL_ES_FORMAT_T ;
typedef TYPE_3__ MMAL_BUFFER_HEADER_T ;


 scalar_t__ VAR_0 ;

MMAL_EVENT_FORMAT_CHANGED_T *FUNC_0(MMAL_BUFFER_HEADER_T *VAR_1)
{
   MMAL_EVENT_FORMAT_CHANGED_T *VAR_2;
   MMAL_ES_FORMAT_T *VAR_3;
   uint32_t VAR_4;

   VAR_4 = sizeof(MMAL_EVENT_FORMAT_CHANGED_T);
   VAR_4 += sizeof(MMAL_ES_FORMAT_T) + sizeof(MMAL_ES_SPECIFIC_FORMAT_T);

   if (!VAR_1 || VAR_1->cmd != VAR_0 || VAR_1->length < VAR_4)
      return 0;

   VAR_2 = (MMAL_EVENT_FORMAT_CHANGED_T *)VAR_1->data;
   VAR_3 = VAR_2->format = (MMAL_ES_FORMAT_T *)&VAR_2[1];
   VAR_3->es = (MMAL_ES_SPECIFIC_FORMAT_T *)&VAR_3[1];
   VAR_3->extradata = (uint8_t *)&VAR_3->es[1];
   VAR_3->extradata_size = VAR_1->length - VAR_4;
   return VAR_2;
}
