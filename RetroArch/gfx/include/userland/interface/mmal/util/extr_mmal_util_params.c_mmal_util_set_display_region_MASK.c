
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int size; int id; } ;
struct TYPE_4__ {TYPE_3__ hdr; } ;
typedef int MMAL_STATUS_T ;
typedef int MMAL_PORT_T ;
typedef TYPE_1__ MMAL_DISPLAYREGION_T ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_3__*) ;

MMAL_STATUS_T FUNC_1(MMAL_PORT_T *VAR_1,
                                           MMAL_DISPLAYREGION_T *VAR_2)
{
   VAR_2->hdr.id = VAR_0;
   VAR_2->hdr.size = sizeof(*VAR_2);
   return FUNC_0(VAR_1, &VAR_2->hdr);
}
