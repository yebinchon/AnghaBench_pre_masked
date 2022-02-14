
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int VC_SERVICE_VCHI_STATUS_T ;






const char* FUNC_0(VC_SERVICE_VCHI_STATUS_T VAR_0) {
   const char* VAR_1 = "";
   switch(VAR_0) {
   case 128:
      VAR_1 = "success"; break;
   case 130:
      VAR_1 = "vchiq error"; break;
   case 129:
      VAR_1 = "retry"; break;
   default:
      VAR_1 = "unknown";
   }
   return VAR_1;
}
