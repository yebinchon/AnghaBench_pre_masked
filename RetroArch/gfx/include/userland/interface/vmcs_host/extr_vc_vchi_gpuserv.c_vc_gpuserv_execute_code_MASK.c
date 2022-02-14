
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct gpu_job_s {int dummy; } ;
typedef int int32_t ;
struct TYPE_4__ {int size; struct gpu_job_s* data; } ;
typedef TYPE_1__ VCHIQ_ELEMENT_T ;
struct TYPE_5__ {int service; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_3__ VAR_3 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ,TYPE_1__*,int) ;
 int FUNC_2 (char*,int ) ;

int32_t FUNC_3(int VAR_4, struct gpu_job_s VAR_5[])
{
   VCHIQ_ELEMENT_T VAR_6[VAR_0];
   int VAR_7;



   if (!VAR_3.service)
   {
      FUNC_0();
      FUNC_2("%s: called without calling vc_gpuserv_init", VAR_2);
   }

   if (!VAR_3.service)
   {
      FUNC_2("%s: vchiq service not initialised", VAR_2);
      return -1;
   }
   if (VAR_4 > VAR_0)
      return -1;

   for (VAR_7=0; VAR_7<VAR_4; VAR_7++)
   {
      VAR_6[VAR_7].data = VAR_5 + VAR_7;
      VAR_6[VAR_7].size = sizeof *VAR_5;
   }
   if (FUNC_1(VAR_3.service, VAR_6, VAR_4) != VAR_1)
   {
      goto error_exit;
   }
   return 0;
   error_exit:
   return -1;
}
