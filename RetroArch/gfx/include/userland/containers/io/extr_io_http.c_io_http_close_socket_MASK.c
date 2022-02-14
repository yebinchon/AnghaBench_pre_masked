
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int VC_CONTAINER_STATUS_T ;
struct TYPE_3__ {int * sock; } ;
typedef TYPE_1__ VC_CONTAINER_IO_MODULE_T ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static VC_CONTAINER_STATUS_T FUNC_1(VC_CONTAINER_IO_MODULE_T *VAR_1)
{
   if (VAR_1->sock)
   {
      FUNC_0(VAR_1->sock);
      VAR_1->sock = ((void*)0);
   }

   return VAR_0;
}
