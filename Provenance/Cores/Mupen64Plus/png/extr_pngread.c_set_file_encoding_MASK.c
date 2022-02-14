
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {int file_encoding; int gamma_to_linear; TYPE_4__* image; } ;
typedef TYPE_5__ png_image_read_control ;
typedef int png_fixed_point ;
struct TYPE_10__ {TYPE_3__* opaque; } ;
struct TYPE_9__ {TYPE_2__* png_ptr; } ;
struct TYPE_7__ {int gamma; } ;
struct TYPE_8__ {TYPE_1__ colorspace; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(png_image_read_control *VAR_3)
{
   png_fixed_point VAR_4 = VAR_3->image->opaque->png_ptr->colorspace.gamma;
   if (FUNC_1(VAR_4) != 0)
   {
      if (FUNC_0(VAR_4) != 0)
      {
         VAR_3->file_encoding = VAR_0;
         VAR_3->gamma_to_linear = FUNC_2(VAR_4);
      }

      else
         VAR_3->file_encoding = VAR_2;
   }

   else
      VAR_3->file_encoding = VAR_1;
}
