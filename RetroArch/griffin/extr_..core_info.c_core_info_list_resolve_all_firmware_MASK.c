
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int path_key ;
typedef int opt_key ;
typedef int desc_key ;
struct TYPE_5__ {TYPE_3__* firmware; scalar_t__ config_data; } ;
typedef TYPE_1__ core_info_t ;
struct TYPE_6__ {size_t count; int * list; } ;
typedef TYPE_2__ core_info_list_t ;
struct TYPE_7__ {int optional; void* desc; void* path; } ;
typedef TYPE_3__ core_info_firmware_t ;
typedef int config_file_t ;


 scalar_t__ FUNC_0 (unsigned int,int) ;
 scalar_t__ FUNC_1 (int *,char*,int*) ;
 scalar_t__ FUNC_2 (int *,char*,char**) ;
 int FUNC_3 (int *,char*,unsigned int*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,int,char*,unsigned int) ;
 void* FUNC_6 (char*) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static void FUNC_8(
      core_info_list_t *VAR_0)
{
   size_t VAR_1;
   unsigned VAR_2;

   for (VAR_1 = 0; VAR_1 < VAR_0->count; VAR_1++)
   {
      unsigned VAR_3 = 0;
      core_info_firmware_t *VAR_4 = ((void*)0);
      core_info_t *VAR_5 = (core_info_t*)&VAR_0->list[VAR_1];
      config_file_t *VAR_6 = (config_file_t*)VAR_5->config_data;

      if (!VAR_6 || !FUNC_3(VAR_6, "firmware_count", &VAR_3))
         continue;

      VAR_4 = (core_info_firmware_t*)FUNC_0(VAR_3, sizeof(*VAR_4));

      if (!VAR_4)
         continue;

      VAR_5->firmware = VAR_4;

      for (VAR_2 = 0; VAR_2 < VAR_3; VAR_2++)
      {
         char VAR_7[64];
         char VAR_8[64];
         char VAR_9[64];
         bool VAR_10 = 0;
         char *VAR_11 = ((void*)0);
         VAR_7[0] = VAR_8[0] = VAR_9[0] = '\0';

         FUNC_5(VAR_7, sizeof(VAR_7), "firmware%u_path", VAR_2);
         FUNC_5(VAR_8, sizeof(VAR_8), "firmware%u_desc", VAR_2);
         FUNC_5(VAR_9, sizeof(VAR_9), "firmware%u_opt", VAR_2);

         if (FUNC_2(VAR_6, VAR_7, &VAR_11) && !FUNC_7(VAR_11))
         {
            VAR_5->firmware[VAR_2].path = FUNC_6(VAR_11);
            FUNC_4(VAR_11);
            VAR_11 = ((void*)0);
         }
         if (FUNC_2(VAR_6, VAR_8, &VAR_11) && !FUNC_7(VAR_11))
         {
            VAR_5->firmware[VAR_2].desc = FUNC_6(VAR_11);
            FUNC_4(VAR_11);
            VAR_11 = ((void*)0);
         }
         if (VAR_11)
            FUNC_4(VAR_11);
         VAR_11 = ((void*)0);
         if (FUNC_1(VAR_6, VAR_9 , &VAR_10))
            VAR_5->firmware[VAR_2].optional = VAR_10;
      }
   }
}
