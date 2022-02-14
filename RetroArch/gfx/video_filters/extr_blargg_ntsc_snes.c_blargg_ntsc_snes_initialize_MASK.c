
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct softfilter_config {int (* free ) (char*) ;scalar_t__ (* get_string ) (void*,char*,char**,char*) ;} ;
struct filter_data {int burst_toggle; scalar_t__ burst; int * ntsc; } ;
typedef int snes_ntsc_t ;
struct TYPE_6__ {int merge_fields; } ;
typedef TYPE_1__ snes_ntsc_setup_t ;


 scalar_t__ FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (char*,char*,int) ;
 TYPE_1__ VAR_0 ;
 int FUNC_2 (int *,TYPE_1__*) ;
 TYPE_1__ VAR_1 ;
 TYPE_1__ VAR_2 ;
 scalar_t__ FUNC_3 (void*,char*,char**,char*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static void FUNC_5(void *VAR_3,
      const struct softfilter_config *VAR_4,
      void *VAR_5)
{
   char *VAR_6 = ((void*)0);
   snes_ntsc_setup_t VAR_7;
   struct filter_data *VAR_8 = (struct filter_data*)VAR_3;

   VAR_8->ntsc = (snes_ntsc_t*)FUNC_0(1, sizeof(*VAR_8->ntsc));

   if (VAR_4->get_string(VAR_5, "tvtype", &VAR_6, "composite"))
   {
      if (FUNC_1(VAR_6, "composite", 9) == 0)
      {
         VAR_7 = VAR_0;
         VAR_7.merge_fields = 1;
      }
      else if (FUNC_1(VAR_6, "rf", 2) == 0)
      {
         VAR_7 = VAR_0;
         VAR_7.merge_fields = 0;
      }
      else if (FUNC_1(VAR_6, "rgb", 3) == 0)
      {
         VAR_7 = VAR_1;
         VAR_7.merge_fields = 1;
      }
      else if (FUNC_1(VAR_6, "svideo", 6) == 0)
      {
         VAR_7 = VAR_2;
         VAR_7.merge_fields = 1;
      }
   }
   else
   {
      VAR_7 = VAR_0;
      VAR_7.merge_fields = 1;
   }

   VAR_4->free(VAR_6);
   VAR_6 = ((void*)0);

   FUNC_2(VAR_8->ntsc, &VAR_7);

   VAR_8->burst = 0;
   VAR_8->burst_toggle = (VAR_7.merge_fields ? 0 : 1);
}
