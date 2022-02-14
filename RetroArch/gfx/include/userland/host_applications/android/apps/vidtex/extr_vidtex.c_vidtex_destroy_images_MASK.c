
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int display; TYPE_2__* slots; } ;
typedef TYPE_1__ VIDTEX_T ;
struct TYPE_6__ {int * image; int * video_frame; } ;
typedef TYPE_2__ VIDTEX_IMAGE_SLOT_T ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (char*,int *) ;

__attribute__((used)) static void FUNC_3(VIDTEX_T *VAR_0)
{
   VIDTEX_IMAGE_SLOT_T *VAR_1;

   for (VAR_1 = VAR_0->slots; VAR_1 < VAR_0->slots + FUNC_1(VAR_0->slots); VAR_1++)
   {
      VAR_1->video_frame = ((void*)0);

      if (VAR_1->image)
      {
         FUNC_2("Destroying EGL image %p", VAR_1->image);
         FUNC_0(VAR_0->display, VAR_1->image);
         VAR_1->image = ((void*)0);
      }
   }
}
