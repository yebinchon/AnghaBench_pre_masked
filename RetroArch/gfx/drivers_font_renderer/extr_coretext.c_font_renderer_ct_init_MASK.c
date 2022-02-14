
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void ct_font_renderer_t ;
typedef int * CTFontRef ;
typedef int * CGFontRef ;
typedef int * CGDataProviderRef ;
typedef int * CFURLRef ;
typedef int * CFStringRef ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,char const*,int ) ;
 int * FUNC_2 (int ,int *,int ,int) ;
 int * FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int * FUNC_5 (int *,float,int *,int *) ;
 scalar_t__ FUNC_6 (int,int) ;
 int FUNC_7 (int *,void*) ;
 int FUNC_8 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_9 (char const*) ;

__attribute__((used)) static void *FUNC_10(const char *VAR_3, float VAR_4)
{
   char VAR_5 = 0;
   CFStringRef VAR_6 = ((void*)0);
   CTFontRef VAR_7 = ((void*)0);
   CFURLRef VAR_8 = ((void*)0);
   CGDataProviderRef VAR_9 = ((void*)0);
   CGFontRef VAR_10 = ((void*)0);
   ct_font_renderer_t *VAR_11 = (ct_font_renderer_t*)
      FUNC_6(1, sizeof(*VAR_11));

   if (!VAR_11 || !FUNC_9(VAR_3))
   {
      VAR_5 = 1;
      goto error;
   }

   VAR_6 = FUNC_1(
         ((void*)0), VAR_3, VAR_1);

   if (!VAR_6)
   {
      VAR_5 = 1;
      goto error;
   }

   VAR_8 = FUNC_2(
         VAR_0, VAR_6, VAR_2, 0);
   VAR_9 = FUNC_3(VAR_8);
   VAR_10 = FUNC_4(VAR_9);
   VAR_7 = FUNC_5(VAR_10, VAR_4, ((void*)0), ((void*)0));

   if (!VAR_7)
   {
      VAR_5 = 1;
      goto error;
   }

   if (!FUNC_7(VAR_7, VAR_11))
   {
      VAR_5 = 1;
      goto error;
   }

error:
   if (VAR_5)
   {
      FUNC_8(VAR_11);
      VAR_11 = ((void*)0);
   }

   if (VAR_6)
   {
      FUNC_0(VAR_6);
      VAR_6 = ((void*)0);
   }
   if (VAR_7)
   {
      FUNC_0(VAR_7);
      VAR_7 = ((void*)0);
   }
   if (VAR_8)
   {
      FUNC_0(VAR_8);
      VAR_8 = ((void*)0);
   }
   if (VAR_9)
   {
      FUNC_0(VAR_9);
      VAR_9 = ((void*)0);
   }
   if (VAR_10)
   {
      FUNC_0(VAR_10);
      VAR_10 = ((void*)0);
   }

   return VAR_11;
}
