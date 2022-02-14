
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_6__ {scalar_t__ payload_size; unsigned int headers_alloc_num; unsigned int header_size; } ;
struct TYPE_5__ {unsigned int headers_num; int * header; int queue; } ;
typedef int MMAL_STATUS_T ;
typedef TYPE_1__ MMAL_POOL_T ;
typedef TYPE_2__ MMAL_POOL_PRIVATE_T ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int,int ) ;
 int FUNC_1 (TYPE_1__*,unsigned int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int * FUNC_4 (scalar_t__,int,char*) ;
 int FUNC_5 (int *) ;

MMAL_STATUS_T FUNC_6(MMAL_POOL_T *VAR_4, unsigned int VAR_5, uint32_t VAR_6)
{
   MMAL_POOL_PRIVATE_T *VAR_7 = (MMAL_POOL_PRIVATE_T *)VAR_4;
   unsigned int VAR_8;

   if (!VAR_7 || !VAR_5)
      return VAR_1;


   if (VAR_5 == VAR_4->headers_num && VAR_6 == VAR_7->payload_size)
      return VAR_3;


   for (VAR_8 = 0; VAR_8 < VAR_4->headers_num; VAR_8++)
      FUNC_2(VAR_4->queue);


   VAR_7->payload_size = 0;
   FUNC_1(VAR_4, VAR_4->headers_num, 0);
   VAR_4->headers_num = 0;


   if (VAR_5 > VAR_7->headers_alloc_num)
   {
      VAR_7->headers_alloc_num = 0;
      if (VAR_4->header)
         FUNC_5(VAR_4->header);
      VAR_4->header =
         FUNC_4(VAR_7->header_size * VAR_5 + FUNC_0(sizeof(void *)*VAR_5,VAR_0),
                     1, "MMAL buffer headers");
      if (!VAR_4->header)
         return VAR_2;
      VAR_7->headers_alloc_num = VAR_5;
   }


   VAR_7->payload_size = VAR_6;
   FUNC_1(VAR_4, VAR_5, 1);


   for (VAR_8 = 0; VAR_8 < VAR_4->headers_num; VAR_8++)
      FUNC_3(VAR_4->queue, VAR_4->header[VAR_8]);

   return VAR_3;
}
