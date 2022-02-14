
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ media_time_adj; } ;
typedef int MMAL_LIST_ELEMENT_T ;
typedef TYPE_1__ MMAL_CLOCK_REQUEST_T ;



__attribute__((used)) static int FUNC_0(MMAL_LIST_ELEMENT_T *VAR_0, MMAL_LIST_ELEMENT_T *VAR_1)
{
   return ((MMAL_CLOCK_REQUEST_T*)VAR_0)->media_time_adj > ((MMAL_CLOCK_REQUEST_T*)VAR_1)->media_time_adj;
}
