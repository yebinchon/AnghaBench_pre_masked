
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
typedef int int32_t ;
struct TYPE_6__ {int peek_size; int * peek_buf; } ;
typedef TYPE_1__ VCHI_SERVICE_T ;
typedef int VCHI_SERVICE_HANDLE_T ;
struct TYPE_7__ {int * service; int * message; } ;
typedef TYPE_2__ VCHI_HELD_MSG_T ;
typedef int VCHI_FLAGS_T ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 TYPE_1__* FUNC_1 (int ) ;

int32_t
FUNC_2( VCHI_SERVICE_HANDLE_T VAR_1,
   void **VAR_2,
   uint32_t *VAR_3,
   VCHI_FLAGS_T VAR_4,
   VCHI_HELD_MSG_T *VAR_5 )
{
   VCHI_SERVICE_T *VAR_6 = FUNC_1(VAR_1);
   int VAR_7;

   if (!VAR_6)
      return VAR_0;

   VAR_7 = FUNC_0(VAR_6, VAR_4);

   if (VAR_7 == 0)
   {
      *VAR_2 = VAR_6->peek_buf;
      *VAR_3 = VAR_6->peek_size;

      VAR_5->message = VAR_6->peek_buf;
      VAR_5->service = ((void*)0);

      VAR_6->peek_size = -1;
      VAR_6->peek_buf = ((void*)0);
   }

   return 0;
}
