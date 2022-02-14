
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int int32_t ;
struct TYPE_3__ {int lib_handle; scalar_t__ is_client; int handle; int fd; } ;
typedef TYPE_1__ VCHI_SERVICE_T ;
typedef int VCHI_SERVICE_HANDLE_T ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_1 (int const) ;
 int FUNC_2 (int ,int ,int ) ;

int32_t
FUNC_3( const VCHI_SERVICE_HANDLE_T VAR_3 )
{
   VCHI_SERVICE_T *VAR_4 = FUNC_1(VAR_3);
   int VAR_5;

   if (!VAR_4)
      return VAR_0;

   FUNC_0(VAR_5,FUNC_2(VAR_4->fd, VAR_1, VAR_4->handle));

   if (VAR_4->is_client)
      VAR_4->lib_handle = VAR_2;

   return VAR_5;
}
