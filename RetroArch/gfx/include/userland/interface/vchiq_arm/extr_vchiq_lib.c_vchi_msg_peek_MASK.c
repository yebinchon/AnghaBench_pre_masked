
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int int32_t ;
struct TYPE_4__ {int peek_size; void* peek_buf; } ;
typedef TYPE_1__ VCHI_SERVICE_T ;
typedef int VCHI_SERVICE_HANDLE_T ;
typedef int VCHI_FLAGS_T ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 TYPE_1__* FUNC_1 (int ) ;

int32_t
FUNC_2( VCHI_SERVICE_HANDLE_T VAR_1,
   void **VAR_2,
   uint32_t *VAR_3,
   VCHI_FLAGS_T VAR_4 )
{
   VCHI_SERVICE_T *VAR_5 = FUNC_1(VAR_1);
   int VAR_6;

   if (!VAR_5)
      return VAR_0;

   VAR_6 = FUNC_0(VAR_5, VAR_4);

   if (VAR_6 == 0)
   {
      *VAR_2 = VAR_5->peek_buf;
      *VAR_3 = VAR_5->peek_size;
   }

   return VAR_6;
}
