
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_3__ {scalar_t__ message; int service; } ;
typedef TYPE_1__ VCHI_HELD_MSG_T ;


 int FUNC_0 (scalar_t__) ;

int32_t
FUNC_1( VCHI_HELD_MSG_T *VAR_0 )
{
   int VAR_1 = -1;

   if (VAR_0 && VAR_0->message && !VAR_0->service)
   {
      FUNC_0(VAR_0->message);
      VAR_1 = 0;
   }

   return VAR_1;
}
