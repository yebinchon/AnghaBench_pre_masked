
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct string_list {int dummy; } ;
typedef int softfilter_simd_mask_t ;
struct TYPE_6__ {int conf; } ;
typedef TYPE_1__ rarch_softfilter_t ;
typedef int ext_name ;
typedef enum retro_pixel_format { ____Placeholder_retro_pixel_format } retro_pixel_format ;
typedef int basedir ;


 int VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (TYPE_1__*,struct string_list*) ;
 scalar_t__ FUNC_2 (int,int) ;
 int FUNC_3 (char const*) ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_1__*,int,unsigned int,unsigned int,int ,unsigned int) ;
 struct string_list* FUNC_6 (char*,char*,int,int,int,int) ;
 int FUNC_7 (char*,char const*,int) ;
 int FUNC_8 (char*,int) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (struct string_list*) ;

rarch_softfilter_t *FUNC_11(const char *VAR_1,
      unsigned VAR_2,
      enum retro_pixel_format VAR_3,
      unsigned VAR_4, unsigned VAR_5)
{
   softfilter_simd_mask_t VAR_6 = (softfilter_simd_mask_t)FUNC_4();
   char VAR_7[VAR_0];



   struct string_list *VAR_8 = ((void*)0);
   rarch_softfilter_t *VAR_9 = ((void*)0);

   (void)VAR_7;

   VAR_9 = (rarch_softfilter_t*)FUNC_2(1, sizeof(*VAR_9));
   if (!VAR_9)
      return ((void*)0);

   if (!(VAR_9->conf = FUNC_3(VAR_1)))
   {
      FUNC_0("[SoftFilter]: Did not find config: %s\n", VAR_1);
      goto error;
   }
   if (!FUNC_1(VAR_9, VAR_8))
   {
      FUNC_0("[SoftFitler]: Failed to append softfilter plugins...\n");
      goto error;
   }

   if (VAR_8)
      FUNC_10(VAR_8);
   VAR_8 = ((void*)0);

   if (!FUNC_5(VAR_9, VAR_3,
            VAR_4, VAR_5, VAR_6, VAR_2))
   {
      FUNC_0("[SoftFitler]: Failed to create softfilter graph...\n");
      goto error;
   }

   return VAR_9;

error:
   if (VAR_8)
      FUNC_10(VAR_8);
   VAR_8 = ((void*)0);
   FUNC_9(VAR_9);
   return ((void*)0);
}
