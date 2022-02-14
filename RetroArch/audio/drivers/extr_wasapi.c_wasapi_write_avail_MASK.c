
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {size_t engine_buffer_size; int frame_size; int client; scalar_t__ buffer; } ;
typedef TYPE_1__ wasapi_t ;
typedef int UINT32 ;
typedef int HRESULT ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int*) ;
 size_t FUNC_2 (scalar_t__) ;

__attribute__((used)) static size_t FUNC_3(void *VAR_0)
{
   HRESULT VAR_1;
   wasapi_t *VAR_2 = (wasapi_t*)VAR_0;
   UINT32 VAR_3 = 0;

   if (VAR_2->buffer)
      return FUNC_2(VAR_2->buffer);

   VAR_1 = FUNC_1(VAR_2->client, &VAR_3);
   if (FUNC_0(VAR_1))
      return 0;

   return VAR_2->engine_buffer_size - VAR_3 * VAR_2->frame_size;
}
