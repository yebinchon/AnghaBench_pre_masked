
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ lib_handle; } ;
typedef TYPE_1__ VCHIQ_SERVICE_T ;
typedef scalar_t__ VCHIQ_SERVICE_HANDLE_T ;


 TYPE_1__* FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*,scalar_t__) ;

__attribute__((used)) static VCHIQ_SERVICE_T *
FUNC_2(VCHIQ_SERVICE_HANDLE_T VAR_0)
{
   VCHIQ_SERVICE_T *VAR_1;

   VAR_1 = FUNC_0(VAR_0);
   if (VAR_1 && (VAR_1->lib_handle != VAR_0))
      VAR_1 = ((void*)0);

   if (!VAR_1)
      FUNC_1("Invalid service handle 0x%x", VAR_0);

   return VAR_1;
}
