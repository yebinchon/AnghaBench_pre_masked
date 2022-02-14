
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct video_viewport {scalar_t__ full_height; scalar_t__ full_width; scalar_t__ height; scalar_t__ width; scalar_t__ y; scalar_t__ x; } ;
typedef int int16_t ;
struct TYPE_5__ {TYPE_1__* touches; } ;
typedef TYPE_2__ input_ctx_wayland_data_t ;
struct TYPE_4__ {int active; int y; int x; } ;


 unsigned int VAR_0 ;



 int FUNC_0 (struct video_viewport*,int ,int ,int*,int*,int*,int*) ;

__attribute__((used)) static int16_t FUNC_1(input_ctx_wayland_data_t *VAR_1,
      unsigned VAR_2, unsigned VAR_3, bool VAR_4)
{
   struct video_viewport VAR_5;

   bool VAR_6 = 0;
   int16_t VAR_7 = 0;
   int16_t VAR_8 = 0;
   int16_t VAR_9 = 0;
   int16_t VAR_10 = 0;

   VAR_5.x = 0;
   VAR_5.y = 0;
   VAR_5.width = 0;
   VAR_5.height = 0;
   VAR_5.full_width = 0;
   VAR_5.full_height = 0;

   if (VAR_2 > VAR_0)
      return 0;

   if (!(FUNC_0(&VAR_5,
         VAR_1->touches[VAR_2].x, VAR_1->touches[VAR_2].y,
         &VAR_7, &VAR_8, &VAR_9, &VAR_10)))
      return 0;

   if (VAR_4)
   {
      VAR_7 = VAR_9;
      VAR_8 = VAR_10;
   }

   VAR_6 = (VAR_7 >= -0x7fff) && (VAR_8 >= -0x7fff);

   if (!VAR_6)
      return 0;

   switch (VAR_3)
   {
      case 129:
         return VAR_7;
      case 128:
         return VAR_8;
      case 130:
         return VAR_1->touches[VAR_2].active;
   }

   return 0;
}
