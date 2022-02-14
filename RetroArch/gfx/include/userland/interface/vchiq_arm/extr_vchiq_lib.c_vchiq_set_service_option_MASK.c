
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int VCHIQ_STATUS_T ;
struct TYPE_5__ {int value; int option; int handle; } ;
typedef TYPE_1__ VCHIQ_SET_SERVICE_OPTION_T ;
struct TYPE_6__ {int fd; int handle; } ;
typedef TYPE_2__ VCHIQ_SERVICE_T ;
typedef int VCHIQ_SERVICE_OPTION_T ;
typedef int VCHIQ_SERVICE_HANDLE_T ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,TYPE_1__*) ;

VCHIQ_STATUS_T
FUNC_3(VCHIQ_SERVICE_HANDLE_T VAR_3,
   VCHIQ_SERVICE_OPTION_T VAR_4, int VAR_5)
{
   VCHIQ_SET_SERVICE_OPTION_T VAR_6;
   VCHIQ_SERVICE_T *VAR_7 = FUNC_1(VAR_3);
   int VAR_8;

   if (!VAR_7)
      return VAR_0;

   VAR_6.handle = VAR_7->handle;
   VAR_6.option = VAR_4;
   VAR_6.value = VAR_5;

   FUNC_0(VAR_8, FUNC_2(VAR_7->fd, VAR_1, &VAR_6));

   return (VAR_8 >= 0) ? VAR_2 : VAR_0;
}
