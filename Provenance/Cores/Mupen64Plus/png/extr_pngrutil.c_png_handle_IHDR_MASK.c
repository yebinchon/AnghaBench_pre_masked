
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int png_uint_32 ;
typedef TYPE_1__* png_structrp ;
typedef int png_inforp ;
typedef void* png_byte ;
struct TYPE_8__ {int mode; int width; int height; int bit_depth; int color_type; int channels; scalar_t__ rowbytes; void* pixel_depth; void* compression_type; void* filter_type; void* interlaced; } ;







 int VAR_0 ;
 scalar_t__ FUNC_0 (void*,int) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*,void**,int) ;
 int FUNC_4 (int,char*) ;
 int FUNC_5 (int,char*,unsigned long) ;
 int FUNC_6 (TYPE_1__*,void**) ;
 int FUNC_7 (TYPE_1__*,int ,int,int,int,int,int,int,int) ;

void
FUNC_8(png_structrp VAR_1, png_inforp VAR_2, png_uint_32 VAR_3)
{
   png_byte VAR_4[13];
   png_uint_32 VAR_5, VAR_6;
   int VAR_7, VAR_8, VAR_9, VAR_10;
   int VAR_11;

   FUNC_4(1, "in png_handle_IHDR");

   if ((VAR_1->mode & VAR_0) != 0)
      FUNC_1(VAR_1, "out of place");


   if (VAR_3 != 13)
      FUNC_1(VAR_1, "invalid");

   VAR_1->mode |= VAR_0;

   FUNC_3(VAR_1, VAR_4, 13);
   FUNC_2(VAR_1, 0);

   VAR_5 = FUNC_6(VAR_1, VAR_4);
   VAR_6 = FUNC_6(VAR_1, VAR_4 + 4);
   VAR_7 = VAR_4[8];
   VAR_8 = VAR_4[9];
   VAR_9 = VAR_4[10];
   VAR_10 = VAR_4[11];
   VAR_11 = VAR_4[12];


   VAR_1->width = VAR_5;
   VAR_1->height = VAR_6;
   VAR_1->bit_depth = (png_byte)VAR_7;
   VAR_1->interlaced = (png_byte)VAR_11;
   VAR_1->color_type = (png_byte)VAR_8;



   VAR_1->compression_type = (png_byte)VAR_9;


   switch (VAR_1->color_type)
   {
      default:
      case 132:
      case 130:
         VAR_1->channels = 1;
         break;

      case 129:
         VAR_1->channels = 3;
         break;

      case 131:
         VAR_1->channels = 2;
         break;

      case 128:
         VAR_1->channels = 4;
         break;
   }


   VAR_1->pixel_depth = (png_byte)(VAR_1->bit_depth * VAR_1->channels);
   VAR_1->rowbytes = FUNC_0(VAR_1->pixel_depth, VAR_1->width);
   FUNC_5(3, "bit_depth = %d", VAR_1->bit_depth);
   FUNC_5(3, "channels = %d", VAR_1->channels);
   FUNC_5(3, "rowbytes = %lu", (unsigned long)VAR_1->rowbytes);
   FUNC_7(VAR_1, VAR_2, VAR_5, VAR_6, VAR_7,
       VAR_8, VAR_11, VAR_9, VAR_10);
}
