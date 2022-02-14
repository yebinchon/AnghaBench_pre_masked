
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ type; int status; } ;
typedef TYPE_1__ VC_CONTAINER_NET_T ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;

bool FUNC_1( VC_CONTAINER_NET_T *VAR_2 )
{
   if (!VAR_2)
      return 0;

   if (VAR_2->type == VAR_0)
   {
      VAR_2->status = VAR_1;
      return 0;
   }

   return FUNC_0(VAR_2, 0);
}
