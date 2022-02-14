
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int png_uint_32 ;
struct TYPE_8__ {int file_encoding; TYPE_1__* image; int gamma_to_linear; } ;
typedef TYPE_3__ png_image_read_control ;
struct TYPE_7__ {int png_ptr; } ;
struct TYPE_6__ {TYPE_2__* opaque; } ;





 int VAR_0 ;

 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int,int ) ;
 int* VAR_1 ;
 int FUNC_2 (TYPE_3__*) ;

__attribute__((used)) static unsigned int
FUNC_3(png_image_read_control *VAR_2, png_uint_32 VAR_3, int VAR_4)
{
   if (VAR_4 == 131)
      VAR_4 = VAR_2->file_encoding;

   if (VAR_4 == VAR_0)
   {
      FUNC_2(VAR_2);
      VAR_4 = VAR_2->file_encoding;
   }

   switch (VAR_4)
   {
      case 131:
         VAR_3 = FUNC_1(VAR_3*257, VAR_2->gamma_to_linear);
         break;

      case 128:
         VAR_3 = VAR_1[VAR_3];
         break;

      case 130:
         break;

      case 129:
         VAR_3 *= 257;
         break;


      default:
         FUNC_0(VAR_2->image->opaque->png_ptr,
             "unexpected encoding (internal error)");

   }

   return VAR_3;
}
