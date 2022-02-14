
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int video_vsync; } ;
struct TYPE_8__ {TYPE_1__ bools; } ;
typedef TYPE_2__ settings_t ;
struct TYPE_9__ {char const* fbname; int fd; unsigned int bpp; int num_pages; int sync; } ;
typedef TYPE_3__ omapfb_data_t ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 TYPE_2__* FUNC_2 () ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;
 char* FUNC_4 () ;
 int FUNC_5 (char const*,int ) ;

__attribute__((used)) static int FUNC_6(omapfb_data_t *VAR_1, unsigned VAR_2)
{
   const char *VAR_3 = FUNC_4();
   int VAR_4 = FUNC_5(VAR_3, VAR_0);
   settings_t *VAR_5 = FUNC_2();

   if (VAR_4 == -1)
   {
      FUNC_0("[video_omap]: can't open framebuffer device\n");
      return -1;
   }

   VAR_1->fbname = VAR_3;
   VAR_1->fd = VAR_4;

   if (FUNC_3(VAR_1))
   {
      FUNC_1(VAR_4);

      VAR_1->fbname = ((void*)0);
      VAR_1->fd = -1;

      return -1;
   }


   VAR_1->bpp = VAR_2;
   VAR_1->num_pages = 3;
   VAR_1->sync = VAR_5->bools.video_vsync;

   return 0;
}
