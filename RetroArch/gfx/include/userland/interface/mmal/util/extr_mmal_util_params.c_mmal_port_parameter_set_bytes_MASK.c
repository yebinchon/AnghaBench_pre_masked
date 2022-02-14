
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_6__ {size_t size; int id; } ;
struct TYPE_5__ {TYPE_2__ hdr; int data; } ;
typedef int MMAL_STATUS_T ;
typedef int MMAL_PORT_T ;
typedef TYPE_1__ MMAL_PARAMETER_BYTES_T ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int,size_t) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int const*,unsigned int) ;
 int FUNC_3 (int *,TYPE_2__*) ;

MMAL_STATUS_T FUNC_4(MMAL_PORT_T *VAR_1, uint32_t VAR_2,
   const uint8_t *VAR_3, unsigned int VAR_4)
{
   MMAL_PARAMETER_BYTES_T *VAR_5 = 0;
   MMAL_STATUS_T VAR_6;
   size_t VAR_7 = sizeof(VAR_5->hdr) + VAR_4;

   VAR_5 = FUNC_0(1, VAR_7);
   if (!VAR_5)
      return VAR_0;

   VAR_5->hdr.id = VAR_2;
   VAR_5->hdr.size = VAR_7;
   FUNC_2(VAR_5->data, VAR_3, VAR_4);
   VAR_6 = FUNC_3(VAR_1, &VAR_5->hdr);
   FUNC_1(VAR_5);
   return VAR_6;
}
