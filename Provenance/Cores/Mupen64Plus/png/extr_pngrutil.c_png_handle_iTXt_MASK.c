
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int png_uint_32 ;
struct TYPE_14__ {int itxt_length; scalar_t__ text_length; void* text; void* lang_key; void* lang; void* key; int compression; } ;
typedef TYPE_2__ png_text ;
typedef TYPE_3__* png_structrp ;
typedef int png_inforp ;
typedef char* png_const_charp ;
typedef void* png_charp ;
typedef int* png_bytep ;
typedef int png_alloc_size_t ;
struct TYPE_13__ {char* msg; } ;
struct TYPE_15__ {int user_chunk_cache_max; int mode; int* read_buffer; TYPE_1__ zstream; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (TYPE_3__*,char*) ;
 int FUNC_1 (TYPE_3__*,char*) ;
 scalar_t__ FUNC_2 (TYPE_3__*,int) ;
 int FUNC_3 (TYPE_3__*,int*,int) ;
 int FUNC_4 (int,char*) ;
 scalar_t__ FUNC_5 (TYPE_3__*,int,int,int*,int) ;
 int* FUNC_6 (TYPE_3__*,int,int) ;
 scalar_t__ FUNC_7 (TYPE_3__*,int ,TYPE_2__*,int) ;

void
FUNC_8(png_structrp VAR_8, png_inforp VAR_9, png_uint_32 VAR_10)
{
   png_const_charp VAR_11 = ((void*)0);
   png_bytep VAR_12;
   png_uint_32 VAR_13;

   FUNC_4(1, "in png_handle_iTXt");
   if ((VAR_8->mode & VAR_3) == 0)
      FUNC_1(VAR_8, "missing IHDR");

   if ((VAR_8->mode & VAR_2) != 0)
      VAR_8->mode |= VAR_0;

   VAR_12 = FUNC_6(VAR_8, VAR_10+1, 1 );

   if (VAR_12 == ((void*)0))
   {
      FUNC_2(VAR_8, VAR_10);
      FUNC_0(VAR_8, "out of memory");
      return;
   }

   FUNC_3(VAR_8, VAR_12, VAR_10);

   if (FUNC_2(VAR_8, 0) != 0)
      return;


   for (VAR_13=0;
      VAR_13 < VAR_10 && VAR_12[VAR_13] != 0;
      ++VAR_13)
                       ;


   if (VAR_13 > 79 || VAR_13 < 1)
      VAR_11 = "bad keyword";





   else if (VAR_13 + 5 > VAR_10)
      VAR_11 = "truncated";

   else if (VAR_12[VAR_13+1] == 0 ||
      (VAR_12[VAR_13+1] == 1 &&
      VAR_12[VAR_13+2] == VAR_1))
   {
      int VAR_14 = VAR_12[VAR_13+1] != 0;
      png_uint_32 VAR_15, VAR_16;
      png_alloc_size_t VAR_17 = 0;


      VAR_13 += 3;
      VAR_15 = VAR_13;

      for (; VAR_13 < VAR_10 && VAR_12[VAR_13] != 0;
         ++VAR_13)
                          ;


      VAR_16 = ++VAR_13;

      for (; VAR_13 < VAR_10 && VAR_12[VAR_13] != 0;
         ++VAR_13)
                          ;






      ++VAR_13;

      if (VAR_14 == 0 && VAR_13 <= VAR_10)
         VAR_17 = VAR_10 - VAR_13;

      else if (VAR_14 != 0 && VAR_13 < VAR_10)
      {
         VAR_17 = VAR_6;





         if (FUNC_5(VAR_8, VAR_10, VAR_13,
             &VAR_17, 1 ) == VAR_7)
            VAR_12 = VAR_8->read_buffer;

         else
            VAR_11 = VAR_8->zstream.msg;
      }

      else
         VAR_11 = "truncated";

      if (VAR_11 == ((void*)0))
      {
         png_text VAR_18;

         VAR_12[VAR_17+VAR_13] = 0;

         if (VAR_14 == 0)
            VAR_18.compression = VAR_4;

         else
            VAR_18.compression = VAR_5;

         VAR_18.key = (png_charp)VAR_12;
         VAR_18.lang = (png_charp)VAR_12 + VAR_15;
         VAR_18.lang_key = (png_charp)VAR_12 + VAR_16;
         VAR_18.text = (png_charp)VAR_12 + VAR_13;
         VAR_18.text_length = 0;
         VAR_18.itxt_length = VAR_17;

         if (FUNC_7(VAR_8, VAR_9, &VAR_18, 1) != 0)
            VAR_11 = "insufficient memory";
      }
   }

   else
      VAR_11 = "bad compression info";

   if (VAR_11 != ((void*)0))
      FUNC_0(VAR_8, VAR_11);
}
