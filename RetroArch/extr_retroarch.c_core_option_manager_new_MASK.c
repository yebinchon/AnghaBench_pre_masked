
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct retro_core_option_definition {TYPE_1__* values; scalar_t__ desc; scalar_t__ key; } ;
struct core_option {int dummy; } ;
struct TYPE_7__ {size_t size; struct core_option* opts; int conf_path; void* conf; } ;
typedef TYPE_2__ core_option_manager_t ;
typedef int config_file_t ;
struct TYPE_6__ {scalar_t__ value; } ;


 scalar_t__ FUNC_0 (size_t,int) ;
 int FUNC_1 (int *) ;
 void* FUNC_2 () ;
 void* FUNC_3 (char const*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,size_t,struct retro_core_option_definition const*,int *) ;
 int FUNC_6 (char const*) ;
 int FUNC_7 (int ,char const*,int) ;

__attribute__((used)) static core_option_manager_t *FUNC_8(
      const char *VAR_0, const char *VAR_1,
      const struct retro_core_option_definition *VAR_2)
{
   const struct retro_core_option_definition *VAR_3;
   size_t VAR_4 = 0;
   core_option_manager_t *VAR_5 = (core_option_manager_t*)
      FUNC_0(1, sizeof(*VAR_5));
   config_file_t *VAR_6 = ((void*)0);

   if (!VAR_5)
      return ((void*)0);

   if (!FUNC_6(VAR_0))
      if (!(VAR_5->conf = FUNC_3(VAR_0)))
         if (!(VAR_5->conf = FUNC_2()))
            goto error;

   FUNC_7(VAR_5->conf_path, VAR_0, sizeof(VAR_5->conf_path));


   if (!FUNC_6(VAR_1))
      VAR_6 = FUNC_3(VAR_1);


   for (VAR_3 = VAR_2;
        VAR_3->key && VAR_3->desc && VAR_3->values[0].value;
        VAR_3++)
      VAR_4++;

   if (VAR_4 == 0)
      goto error;

   VAR_5->opts = (struct core_option*)FUNC_0(VAR_4, sizeof(*VAR_5->opts));
   if (!VAR_5->opts)
      goto error;

   VAR_5->size = VAR_4;
   VAR_4 = 0;


   for (VAR_3 = VAR_2;
        VAR_3->key && VAR_3->desc && VAR_3->values[0].value;
        VAR_4++, VAR_3++)
   {
      if (!FUNC_5(VAR_5, VAR_4, VAR_3, VAR_6))
         goto error;
   }

   if (VAR_6)
      FUNC_1(VAR_6);

   return VAR_5;

error:
   if (VAR_6)
      FUNC_1(VAR_6);
   FUNC_4(VAR_5);
   return ((void*)0);
}
