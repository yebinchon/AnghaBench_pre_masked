
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t engine_buffer_size; int buffer; scalar_t__ blocking; int write_event; } ;
typedef TYPE_1__ wasapi_t ;
typedef int ssize_t ;
typedef scalar_t__ DWORD ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,void const*,int) ;
 size_t FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,size_t) ;

__attribute__((used)) static ssize_t FUNC_4(wasapi_t *VAR_2, const void * VAR_3, size_t VAR_4)
{
   ssize_t VAR_5 = 0;
   size_t VAR_6 = FUNC_2(VAR_2->buffer);

   if (!VAR_6)
   {
      DWORD VAR_7 = FUNC_0(
            VAR_2->write_event, VAR_2->blocking ? VAR_0 : 0);
      if (VAR_7 != VAR_1)
      {
         if (VAR_2->blocking)
            return -1;
         return 0;
      }

      if (!FUNC_3(VAR_2, VAR_2->engine_buffer_size))
         return -1;

      VAR_6 = VAR_2->engine_buffer_size;
   }

   VAR_5 = VAR_4 < VAR_6 ? VAR_4 : VAR_6;
   FUNC_1(VAR_2->buffer, VAR_3, VAR_5);

   return VAR_5;
}
