
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct retro_dsp_instance {int impl_data; TYPE_2__* impl; } ;
struct dspfilter_info {float input_rate; } ;
struct config_file_userdata {char** prefix; int conf; } ;
struct TYPE_5__ {unsigned int num_instances; struct retro_dsp_instance* instances; int conf; } ;
typedef TYPE_1__ retro_dsp_filter_t ;
typedef int name ;
typedef int key ;
struct TYPE_6__ {char* short_ident; int (* init ) (struct dspfilter_info*,int *,struct config_file_userdata*) ;} ;


 scalar_t__ FUNC_0 (unsigned int,int) ;
 int FUNC_1 (int ,char*,char*,int) ;
 int FUNC_2 (int ,char*,unsigned int*) ;
 int VAR_0 ;
 TYPE_2__* FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (char*,int,char*,unsigned int) ;
 int FUNC_5 (struct dspfilter_info*,int *,struct config_file_userdata*) ;

__attribute__((used)) static bool FUNC_6(retro_dsp_filter_t *VAR_1, float VAR_2)
{
   unsigned VAR_3;
   struct retro_dsp_instance *VAR_4 = ((void*)0);
   unsigned VAR_5 = 0;

   if (!FUNC_2(VAR_1->conf, "filters", &VAR_5))
      return 0;

   VAR_4 = (struct retro_dsp_instance*)FUNC_0(VAR_5, sizeof(*VAR_4));
   if (!VAR_4)
      return 0;

   VAR_1->instances = VAR_4;
   VAR_1->num_instances = VAR_5;

   for (VAR_3 = 0; VAR_3 < VAR_5; VAR_3++)
   {
      struct config_file_userdata VAR_6;
      struct dspfilter_info VAR_7;
      char VAR_8[64];
      char VAR_9[64];

      VAR_8[0] = VAR_9[0] = '\0';

      VAR_7.input_rate = VAR_2;

      FUNC_4(VAR_8, sizeof(VAR_8), "filter%u", VAR_3);

      if (!FUNC_1(VAR_1->conf, VAR_8, VAR_9, sizeof(VAR_9)))
         return 0;

      VAR_1->instances[VAR_3].impl = FUNC_3(VAR_1, VAR_9);
      if (!VAR_1->instances[VAR_3].impl)
         return 0;

      VAR_6.conf = VAR_1->conf;

      VAR_6.prefix[0] = VAR_8;
      VAR_6.prefix[1] = VAR_1->instances[VAR_3].impl->short_ident;

      VAR_1->instances[VAR_3].impl_data = VAR_1->instances[VAR_3].impl->init(&VAR_7,
            &VAR_0, &VAR_6);
      if (!VAR_1->instances[VAR_3].impl_data)
         return 0;
   }

   return 1;
}
