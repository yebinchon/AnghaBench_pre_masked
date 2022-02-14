
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct string_list {int dummy; } ;
struct TYPE_6__ {int * conf; } ;
typedef TYPE_1__ retro_dsp_filter_t ;
typedef int config_file_t ;


 int FUNC_0 (TYPE_1__*,struct string_list*) ;
 scalar_t__ FUNC_1 (int,int) ;
 int * FUNC_2 (char const*) ;
 int FUNC_3 (TYPE_1__*,float) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (struct string_list*) ;

retro_dsp_filter_t *FUNC_6(
      const char *VAR_0,
      void *VAR_1,
      float VAR_2)
{
   config_file_t *VAR_3 = ((void*)0);
   struct string_list *VAR_4 = ((void*)0);
   retro_dsp_filter_t *VAR_5 = (retro_dsp_filter_t*)FUNC_1(1, sizeof(*VAR_5));

   if (!VAR_5)
      return ((void*)0);

   if (!(VAR_3 = FUNC_2(VAR_0)))
      goto error;

   VAR_5->conf = VAR_3;

   if (VAR_1)
      VAR_4 = (struct string_list*)VAR_1;






   if (VAR_4)
      FUNC_5(VAR_4);
   VAR_4 = ((void*)0);

   if (!FUNC_3(VAR_5, VAR_2))
      goto error;

   return VAR_5;

error:
   if (VAR_4)
      FUNC_5(VAR_4);
   FUNC_4(VAR_5);
   return ((void*)0);
}
