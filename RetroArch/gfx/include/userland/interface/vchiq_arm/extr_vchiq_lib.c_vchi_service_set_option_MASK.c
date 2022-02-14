
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_5__ {int fd; int handle; } ;
typedef TYPE_1__ VCHI_SERVICE_T ;
typedef int VCHI_SERVICE_OPTION_T ;
typedef int VCHI_SERVICE_HANDLE_T ;
struct TYPE_6__ {int value; int handle; int option; } ;
typedef TYPE_2__ VCHIQ_SET_SERVICE_OPTION_T ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

 TYPE_1__* FUNC_1 (int const) ;
 int FUNC_2 (int ,int ,TYPE_2__*) ;

int32_t FUNC_3( const VCHI_SERVICE_HANDLE_T VAR_3,
   VCHI_SERVICE_OPTION_T VAR_4, int VAR_5)
{
   VCHIQ_SET_SERVICE_OPTION_T VAR_6;
   VCHI_SERVICE_T *VAR_7 = FUNC_1(VAR_3);
   int VAR_8;

   switch (VAR_4)
   {
   case 128:
      VAR_6.option = VAR_2;
      break;
   default:
      VAR_7 = ((void*)0);
      break;
   }

   if (!VAR_7)
      return VAR_0;

   VAR_6.handle = VAR_7->handle;
   VAR_6.value = VAR_5;

   FUNC_0(VAR_8, FUNC_2(VAR_7->fd, VAR_1, &VAR_6));

   return VAR_8;
}
