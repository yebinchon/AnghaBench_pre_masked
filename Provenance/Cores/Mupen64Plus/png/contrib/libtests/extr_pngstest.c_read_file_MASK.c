
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef size_t png_uint_32 ;
typedef int png_int_32 ;
typedef TYPE_1__* png_const_colorp ;
struct TYPE_18__ {size_t format; scalar_t__ height; scalar_t__ width; int flags; int version; } ;
struct TYPE_17__ {char* file_name; int opts; int colormap; scalar_t__ stride; scalar_t__ buffer; TYPE_5__ image; scalar_t__ stride_extra; int * input_file; int input_memory_size; int * input_memory; } ;
struct TYPE_16__ {int red; int green; int blue; } ;
typedef TYPE_2__ Image ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (TYPE_5__) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,char*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ) ;
 char** VAR_7 ;
 int FUNC_5 (TYPE_2__*,char*,char*,char*) ;
 int FUNC_6 (TYPE_5__*,int ,int) ;
 int FUNC_7 (TYPE_5__*,char*) ;
 int FUNC_8 (TYPE_5__*,int *,int ) ;
 int FUNC_9 (TYPE_5__*,int *) ;
 int FUNC_10 (TYPE_5__*,TYPE_1__*,scalar_t__,int ,int ) ;
 int FUNC_11 (char*,...) ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static int
FUNC_12(Image *VAR_10, png_uint_32 VAR_11, png_const_colorp VAR_12)
{
   FUNC_6(&VAR_10->image, 0, sizeof VAR_10->image);
   VAR_10->image.version = VAR_5;

   if (VAR_10->input_memory != ((void*)0))
   {
      if (!FUNC_8(&VAR_10->image, VAR_10->input_memory,
         VAR_10->input_memory_size))
         return FUNC_5(VAR_10, "memory init: ", VAR_10->file_name, "");
   }
      else
      {
         return FUNC_5(VAR_10, "unsupported file/stdio init: ",
            VAR_10->file_name, "");
      }



   if (VAR_10->opts & VAR_8)
      VAR_10->image.flags |= VAR_4;




   {
      int VAR_13;
      png_uint_32 VAR_14;


      VAR_14 = VAR_10->image.format;

      if (VAR_10->opts & VAR_6)
      {
         FUNC_11("%s %lu x %lu %s -> %s", VAR_10->file_name,
            (unsigned long)VAR_10->image.width,
            (unsigned long)VAR_10->image.height,
            VAR_7[VAR_14 & VAR_1],
            (VAR_11 & VAR_2) != 0 || VAR_10->image.format == VAR_11
            ? "no change" : VAR_7[VAR_11 & VAR_1]);

         if (VAR_12 != ((void*)0))
            FUNC_11(" background(%d,%d,%d)\n", VAR_12->red,
               VAR_12->green, VAR_12->blue);
         else
            FUNC_11("\n");

         FUNC_4(VAR_9);
      }





      if ((VAR_11 & VAR_2) != 0)
      {
         if ((VAR_11 & VAR_3) != 0 &&
            (VAR_14 & VAR_3) != 0)
            VAR_11 = (VAR_14 & ~VAR_0) | (VAR_11 & VAR_0);

         else
            VAR_11 = VAR_14;
      }

      VAR_10->image.format = VAR_11;

      VAR_10->stride = FUNC_0(VAR_10->image) + VAR_10->stride_extra;
      FUNC_1(VAR_10);

      VAR_13 = FUNC_10(&VAR_10->image, VAR_12,
         VAR_10->buffer+16, (png_int_32)VAR_10->stride, VAR_10->colormap);

      FUNC_2(VAR_10, VAR_10->file_name);

      if (VAR_13)
         return FUNC_3(VAR_10);

      else
         return FUNC_5(VAR_10, VAR_10->file_name, ": image read failed", "");
   }
}
