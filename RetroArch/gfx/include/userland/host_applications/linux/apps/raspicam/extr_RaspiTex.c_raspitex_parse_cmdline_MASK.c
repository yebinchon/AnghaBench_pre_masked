
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int gl_win_defined; int scene_id; int height; int width; int y; int x; } ;
typedef TYPE_1__ RASPITEX_STATE ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ,int ,char const*,int*) ;
 int FUNC_1 (char const*,char*,int *,int *,int *,int *) ;
 int FUNC_2 (char const*,char*) ;
 int FUNC_3 (char*,char const*) ;

int FUNC_4(RASPITEX_STATE *VAR_10,
                           const char *VAR_11, const char *VAR_12)
{
   int VAR_13, VAR_14 = 0, VAR_15;

   if (!VAR_11)
      return 0;

   VAR_13 = FUNC_0(VAR_8,
                                        VAR_9, VAR_11, &VAR_15);


   if (VAR_13==-1 || (VAR_13 != -1 && VAR_15 > 0 && VAR_12 == ((void*)0)))
      return 0;

   switch (VAR_13)
   {
   case 128:
   {
      int VAR_16;
      VAR_16 = FUNC_1(VAR_12, "%d,%d,%d,%d",
                   &VAR_10->x, &VAR_10->y, &VAR_10->width, &VAR_10->height);
      if (VAR_16 != 4)
      {

         VAR_10->x = VAR_10->y = 0;
         VAR_10->width = VAR_1;
         VAR_10->height = VAR_0;
      }
      else
      {
         VAR_10->gl_win_defined = 1;
      }

      VAR_14 = 2;
      break;
   }

   case 129:
   {
      if (FUNC_2(VAR_12, "square") == 0)
         VAR_10->scene_id = VAR_4;
      else if (FUNC_2(VAR_12, "teapot") == 0)
         VAR_10->scene_id = VAR_5;
      else if (FUNC_2(VAR_12, "mirror") == 0)
         VAR_10->scene_id = VAR_2;
      else if (FUNC_2(VAR_12, "yuv") == 0)
         VAR_10->scene_id = VAR_7;
      else if (FUNC_2(VAR_12, "sobel") == 0)
         VAR_10->scene_id = VAR_3;
      else if (FUNC_2(VAR_12, "vcsm_square") == 0)
         VAR_10->scene_id = VAR_6;
      else
         FUNC_3("Unknown scene %s", VAR_12);

      VAR_14 = 2;
      break;
   }
   }
   return VAR_14;
}
