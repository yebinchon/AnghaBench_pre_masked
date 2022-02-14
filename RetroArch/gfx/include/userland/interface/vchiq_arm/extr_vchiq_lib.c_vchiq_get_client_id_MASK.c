
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int handle; int fd; } ;
typedef TYPE_1__ VCHIQ_SERVICE_T ;
typedef int VCHIQ_SERVICE_HANDLE_T ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;

int
FUNC_2(VCHIQ_SERVICE_HANDLE_T VAR_2)
{
   VCHIQ_SERVICE_T *VAR_3 = FUNC_0(VAR_2);

   if (!VAR_3)
      return VAR_0;

   return FUNC_1(VAR_3->fd, VAR_1, VAR_3->handle);
}
