
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int g_resized; unsigned int g_new_width; unsigned int g_new_height; } ;
typedef TYPE_3__ gfx_ctx_sdl_data_t ;
struct TYPE_7__ {unsigned int w; unsigned int h; } ;
struct TYPE_6__ {unsigned int data1; unsigned int data2; int event; } ;
struct TYPE_9__ {int type; TYPE_2__ resize; TYPE_1__ window; } ;
typedef TYPE_4__ SDL_Event ;



 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_4__*,int,int ,int,...) ;
 int FUNC_1 () ;

 int VAR_1 ;

 int VAR_2 ;

 int VAR_3 ;

__attribute__((used)) static void FUNC_2(void *VAR_4, bool *VAR_5,
      bool *VAR_6,unsigned *VAR_7,
      unsigned *VAR_8,
      bool VAR_9)
{
   SDL_Event VAR_10;
   gfx_ctx_sdl_data_t *VAR_11 = (gfx_ctx_sdl_data_t*)VAR_4;

   FUNC_1();




   while (FUNC_0(&VAR_10, 1, VAR_0, VAR_1|VAR_2) > 0)

   {
      switch (VAR_10.type)
      {
         case 130:



            *VAR_5 = 1;
            break;
         case 129:
            VAR_11->g_resized = 1;
            VAR_11->g_new_width = VAR_10.resize.w;
            VAR_11->g_new_height = VAR_10.resize.h;

            break;
         default:
            break;
      }
   }

   if (VAR_11->g_resized)
   {
      *VAR_7 = VAR_11->g_new_width;
      *VAR_8 = VAR_11->g_new_height;
      *VAR_6 = 1;
      VAR_11->g_resized = 0;
   }
}
