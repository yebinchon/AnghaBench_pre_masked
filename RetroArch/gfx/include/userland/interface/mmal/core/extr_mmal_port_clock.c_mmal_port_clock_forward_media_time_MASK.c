
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_4__ {int media_time; } ;
struct TYPE_5__ {TYPE_1__ data; int magic; int id; } ;
typedef int MMAL_STATUS_T ;
typedef int MMAL_PORT_T ;
typedef TYPE_2__ MMAL_CLOCK_EVENT_T ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,TYPE_2__*) ;

__attribute__((used)) static MMAL_STATUS_T FUNC_1(MMAL_PORT_T *VAR_2, int64_t VAR_3)
{
   MMAL_CLOCK_EVENT_T VAR_4;

   VAR_4.id = VAR_1;
   VAR_4.magic = VAR_0;
   VAR_4.data.media_time = VAR_3;

   return FUNC_0(VAR_2, &VAR_4);
}
