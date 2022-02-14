
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_3__ {int peek_size; } ;
typedef TYPE_1__ VCHI_SERVICE_T ;
typedef int VCHI_SERVICE_HANDLE_T ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (int) ;

int32_t
FUNC_2( VCHI_SERVICE_HANDLE_T VAR_1 )
{
   VCHI_SERVICE_T *VAR_2 = FUNC_0(VAR_1);

   if (!VAR_2)
      return VAR_0;


   FUNC_1(VAR_2->peek_size >= 0);


   VAR_2->peek_size = -1;

   return 0;
}
