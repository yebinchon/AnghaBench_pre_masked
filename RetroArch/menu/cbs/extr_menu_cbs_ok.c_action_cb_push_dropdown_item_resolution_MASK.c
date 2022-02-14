
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int str ;
struct TYPE_4__ {unsigned int video_fullscreen_x; unsigned int video_fullscreen_y; } ;
struct TYPE_5__ {TYPE_1__ uints; } ;
typedef TYPE_2__ settings_t ;


 TYPE_2__* FUNC_0 () ;
 int FUNC_1 (char*,int,char*,char const*) ;
 char* FUNC_2 (char*,char*) ;
 scalar_t__ FUNC_3 (char*,int *,int ) ;
 scalar_t__ FUNC_4 (unsigned int,unsigned int,unsigned int,float,int ,int ,int ) ;
 int FUNC_5 (float) ;

int FUNC_6(const char *VAR_0,
      const char *VAR_1, unsigned VAR_2, size_t VAR_3, size_t VAR_4)
{
   char VAR_5[100];
   char *VAR_6 = ((void*)0);
   unsigned VAR_7 = 0;
   unsigned VAR_8 = 0;
   unsigned VAR_9 = 0;

   (void)VAR_1;
   (void)VAR_2;
   (void)VAR_3;
   (void)VAR_4;

   FUNC_1(VAR_5, sizeof(VAR_5), "%s", VAR_0);

   VAR_6 = FUNC_2(VAR_5, "x");
   if (VAR_6)
      VAR_7 = (unsigned)FUNC_3(VAR_6, ((void*)0), 0);
   VAR_6 = FUNC_2(((void*)0), " ");
   if (VAR_6)
      VAR_8 = (unsigned)FUNC_3(VAR_6, ((void*)0), 0);
   VAR_6 = FUNC_2(((void*)0), "(");
   if (VAR_6)
      VAR_9 = (unsigned)FUNC_3(VAR_6, ((void*)0), 0);

   if (FUNC_4(VAR_7, VAR_8,
         VAR_9, (float)VAR_9, 0, 0, 0))
   {
      settings_t *VAR_10 = FUNC_0();

      FUNC_5((float)VAR_9);

      VAR_10->uints.video_fullscreen_x = VAR_7;
      VAR_10->uints.video_fullscreen_y = VAR_8;

      return 1;
   }

   return 0;
}
