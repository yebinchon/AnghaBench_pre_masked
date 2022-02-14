
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file {int type; int length; int crc; int data_pos; struct chunk* chunk; void* interlace_method; void* filter_method; void* compression_method; void* color_type; void* bit_depth; void* height; void* width; int (* alloc ) (struct file*,int) ;int * idat; TYPE_1__* global; int status_code; } ;
struct chunk {int const chunk_type; int chunk_length; scalar_t__ rewrite_offset; scalar_t__ rewrite_length; } ;
typedef int png_uint_32 ;
struct TYPE_2__ {int verbose; scalar_t__ skip; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int const) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct file*) ;
 int FUNC_3 (struct chunk**) ;
 int FUNC_4 (struct file*,int *) ;
 int FUNC_5 (int ,char*,unsigned long,int,int) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (struct file*) ;





 int FUNC_8 (struct file*) ;
 int FUNC_9 (struct file*) ;
 int FUNC_10 (struct file*) ;
 int FUNC_11 (struct file*) ;
 void* FUNC_12 (struct file*) ;
 void* FUNC_13 (struct file*) ;
 int FUNC_14 (struct chunk*) ;
 scalar_t__ FUNC_15 (TYPE_1__*,int const) ;
 int VAR_3 ;
 int FUNC_16 (struct file*,int ,char*) ;
 int FUNC_17 (struct file*,char*) ;
 int FUNC_18 (struct file*,int) ;
 int FUNC_19 (struct file*,int) ;
 int FUNC_20 (struct file*,int const,char*) ;
 int FUNC_21 (int,int ) ;

__attribute__((used)) static void
FUNC_22(struct file *VAR_4, png_uint_32 VAR_5, png_uint_32 VAR_6,
   png_uint_32 VAR_7)







{
   const png_uint_32 VAR_8 = VAR_4->type;

   if (VAR_4->global->verbose > 1)
   {
      FUNC_6("  ", VAR_3);
      FUNC_21(VAR_4->type, VAR_3);
      FUNC_5(VAR_3, " %lu 0x%.8x 0x%.8x\n", (unsigned long)VAR_4->length,
         VAR_4->crc ^ 0xffffffff, VAR_5);
   }





   if ((VAR_4->crc ^ 0xffffffff) != VAR_5)
   {





      VAR_4->status_code |= VAR_0;


      if (VAR_4->global->skip != VAR_2)
         FUNC_20(VAR_4, VAR_8, "bad CRC");


      else if (FUNC_0(VAR_8))
         FUNC_16(VAR_4, VAR_1, "bad CRC in critical chunk");

      else
      {
         FUNC_20(VAR_4, VAR_8, "skipped: bad CRC");


         goto skip_chunk;
      }
   }





   if (FUNC_15(VAR_4->global, VAR_8))
      goto skip_chunk;






   if (VAR_8 != 132)
      VAR_4->alloc(VAR_4, 0 );

   else if (VAR_4->idat == ((void*)0))
      VAR_4->alloc(VAR_4, 1 );

   else
   {

      FUNC_1(VAR_4->chunk != ((void*)0));
      FUNC_1(VAR_4->chunk->chunk_type == 132);
      VAR_4->chunk->chunk_length = VAR_4->length;
   }






   VAR_4->length = VAR_6;
   VAR_4->type = VAR_7;
   FUNC_7(VAR_4);





   VAR_4->chunk->rewrite_length = 0;
   VAR_4->chunk->rewrite_offset = 0;
   switch (VAR_8)
   {
      default:
         return;

      case 131:




         {
            struct chunk *VAR_9 = VAR_4->chunk;

            if (VAR_9->chunk_length != 13)
               FUNC_17(VAR_4, "IHDR length");


            FUNC_14(VAR_9);
            VAR_4->width = FUNC_12(VAR_4);
            VAR_4->height = FUNC_12(VAR_4);
            VAR_4->bit_depth = FUNC_13(VAR_4);
            VAR_4->color_type = FUNC_13(VAR_4);
            VAR_4->compression_method = FUNC_13(VAR_4);
            VAR_4->filter_method = FUNC_13(VAR_4);
            VAR_4->interlace_method = FUNC_13(VAR_4);




            FUNC_2(VAR_4);
         }
         return;


      case 128: case 130:
         if (FUNC_10(VAR_4))
            return;
         FUNC_3(&VAR_4->chunk);
         FUNC_4(VAR_4, &VAR_4->data_pos);
         break;

      case 129:
         if (FUNC_9(VAR_4))
            return;
         FUNC_3(&VAR_4->chunk);
         FUNC_4(VAR_4, &VAR_4->data_pos);
         break;

      case 132:
         if (FUNC_8(VAR_4))
            return;

         FUNC_1(VAR_7 == 132);
         break;
   }
   FUNC_11(VAR_4);
   return;




skip_chunk:
   VAR_4->length = VAR_6;
   VAR_4->type = VAR_7;
   FUNC_7(VAR_4);
   FUNC_11(VAR_4);
}
