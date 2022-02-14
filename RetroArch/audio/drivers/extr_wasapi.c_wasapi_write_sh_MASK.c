
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t engine_buffer_size; size_t frame_size; int client; int write_event; scalar_t__ blocking; scalar_t__ buffer; } ;
typedef TYPE_1__ wasapi_t ;
typedef int ssize_t ;
typedef size_t UINT32 ;
typedef int HRESULT ;
typedef scalar_t__ DWORD ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,size_t*) ;
 size_t FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,void const*,int) ;
 size_t FUNC_5 (scalar_t__) ;
 int FUNC_6 (TYPE_1__*,void const*,int) ;
 int FUNC_7 (TYPE_1__*,int) ;

__attribute__((used)) static ssize_t FUNC_8(wasapi_t *VAR_2, const void * VAR_3, size_t VAR_4)
{
   DWORD VAR_5;
   HRESULT VAR_6;
   size_t VAR_7 = 0;
   ssize_t VAR_8 = -1;
   UINT32 VAR_9 = 0;

   if (VAR_2->buffer)
   {
      VAR_7 = FUNC_5(VAR_2->buffer);
      if (!VAR_7)
      {
         size_t VAR_10 = 0;

         if (VAR_2->blocking)
         {
            VAR_5 = FUNC_1(VAR_2->write_event, VAR_0);
            if (!(VAR_5 == VAR_1))
               return -1;
         }

         VAR_6 = FUNC_2(VAR_2->client, &VAR_9);
         if (FUNC_0(VAR_6))
            return -1;

         VAR_10 = FUNC_3(VAR_2->buffer);
         VAR_7 = VAR_2->engine_buffer_size - VAR_9 * VAR_2->frame_size;
         VAR_8 = VAR_10 < VAR_7 ? VAR_10 : VAR_7;
         if (VAR_8)
            if (!FUNC_7(VAR_2, VAR_8))
               return -1;
      }

      VAR_7 = FUNC_5(VAR_2->buffer);
      VAR_8 = VAR_4 < VAR_7 ? VAR_4 : VAR_7;
      if (VAR_8)
         FUNC_4(VAR_2->buffer, VAR_3, VAR_8);
   }
   else
   {
      if (VAR_2->blocking)
      {
         VAR_5 = FUNC_1(VAR_2->write_event, VAR_0);
         if (!(VAR_5 == VAR_1))
            return -1;
      }

      VAR_6 = FUNC_2(VAR_2->client, &VAR_9);
      if (FUNC_0(VAR_6))
         return -1;

      VAR_7 = VAR_2->engine_buffer_size - VAR_9 * VAR_2->frame_size;
      if (!VAR_7)
         return 0;

      VAR_8 = VAR_4 < VAR_7 ? VAR_4 : VAR_7;
      if (VAR_8)
         if (!FUNC_6(VAR_2, VAR_3, VAR_8))
            return -1;
   }

   return VAR_8;
}
