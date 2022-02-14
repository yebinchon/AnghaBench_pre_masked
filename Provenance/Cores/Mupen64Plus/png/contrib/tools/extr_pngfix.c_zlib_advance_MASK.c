
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int* next_in; int avail_in; int* next_out; int avail_out; int * msg; } ;
struct zlib {int state; int window_bits; int file_bits; int* header; int cksum; scalar_t__ ok_bits; scalar_t__ extra_bytes; scalar_t__ rewrite_offset; void* compressed_digits; int compressed_bytes; void* uncompressed_digits; int uncompressed_bytes; struct chunk* chunk; TYPE_1__ z; int rc; struct file* file; } ;
struct file {int dummy; } ;
struct chunk {int* rewrite_buffer; int rewrite_length; scalar_t__ rewrite_offset; int compressed_bytes; void* compressed_digits; int uncompressed_bytes; void* uncompressed_digits; } ;
typedef scalar_t__ png_uint_32 ;
typedef int png_byte ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int VAR_4 ;


 int VAR_5 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct chunk*,char*) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (struct file*) ;
 int FUNC_4 (int *,char*) ;
 void* FUNC_5 (int ,void*,scalar_t__) ;
 void* FUNC_6 (int ,int ,void*) ;
 int FUNC_7 (struct zlib*,int) ;

__attribute__((used)) static int
FUNC_8(struct zlib *VAR_6, png_uint_32 VAR_7)
{
   int VAR_8 = VAR_6->state;
   int VAR_9 = 0;
   png_uint_32 VAR_10 = 0;
   struct file *VAR_11 = VAR_6->file;

   FUNC_0(VAR_8 >= 0);

   while (VAR_10 < VAR_7 && VAR_9 == 0)
   {
      png_uint_32 VAR_12;
      int VAR_13;
      png_byte VAR_14 = FUNC_3(VAR_11);
      png_byte VAR_15;

      switch (VAR_8)
      {
         case 0:
            {
               int VAR_16 = 8+(VAR_14 >> 4);
               int VAR_17 = VAR_6->window_bits;

               VAR_6->file_bits = VAR_16;






               if (VAR_17 == 0)
                  VAR_6->window_bits = ((VAR_16 > 15) ? 15 : VAR_16);

               else if (VAR_17 != VAR_16)
                  VAR_14 = (png_byte)((VAR_14 & 0xf) + ((VAR_17-8) << 4));
            }

            VAR_6->header[0] = VAR_14;
            VAR_6->state = VAR_8 = 1;
            break;

         case 1:
            {
               int VAR_18 = VAR_14 & 0xe0;


               VAR_18 += 0x1f - ((VAR_6->header[0] << 8) + VAR_18) % 0x1f;


               if (VAR_14 != VAR_18)
               {



                  if (VAR_6->file_bits == VAR_6->window_bits)
                     VAR_6->cksum = 1;

                  VAR_14 = (png_byte)VAR_18;
               }
            }

            VAR_6->header[1] = VAR_14;
            VAR_6->state = VAR_8 = 2;
            break;

         default:
            break;
      }







      VAR_6->z.next_in = &VAR_14;
      VAR_6->z.avail_in = 1;
      VAR_6->z.next_out = &VAR_15;
      VAR_6->z.avail_out = 0;




      VAR_13 = VAR_4;
      VAR_12 = 0;




      for (;VAR_9 == 0;
         VAR_13 = VAR_5,
         VAR_6->z.next_out = &VAR_15,
         VAR_6->z.avail_out = 1,
         ++VAR_12)
      {
         VAR_6->rc = FUNC_2(&VAR_6->z, VAR_13);
         VAR_12 -= VAR_6->z.avail_out;

         switch (VAR_6->rc)
         {
            case 132:
               if (VAR_6->z.avail_out == 0)
                  continue;

               if (VAR_6->z.avail_in == 0)
                  break;




               FUNC_7(VAR_6, 1 );
               VAR_9 = 2;
               break;

            case 129:

               FUNC_0(VAR_6->z.avail_out == 0 || VAR_6->z.avail_in == 0);
               continue;

            case 128:

               VAR_6->state = 3;
               VAR_9 = 1;
               break;

            case 130:
               FUNC_7(VAR_6, 0 );
               VAR_9 = 2;
               break;

            case 131:

               if (VAR_6->z.msg != ((void*)0) &&
                  FUNC_4(VAR_6->z.msg, "invalid distance too far back") == 0)
               {
                  VAR_9 = (-1);
                  break;
               }


            default:
               FUNC_7(VAR_6, 0 );
               VAR_9 = 2;
               break;
         }




         break;
      }


      VAR_6->uncompressed_digits = FUNC_5(VAR_6->uncompressed_bytes,
         VAR_6->uncompressed_digits, VAR_12);





      FUNC_0(VAR_6->z.avail_in == 0 || VAR_9 != 0);

      VAR_10 += 1 - VAR_6->z.avail_in;
   }

   FUNC_0(VAR_10 == VAR_7 || VAR_9 != 0);


   VAR_6->compressed_digits = FUNC_5(VAR_6->compressed_bytes,
      VAR_6->compressed_digits, VAR_10 - VAR_6->z.avail_in);




   if (VAR_9 == 1 && VAR_6->window_bits < VAR_6->ok_bits)
   {
      struct chunk *VAR_19 = VAR_6->chunk;

      VAR_19->uncompressed_digits = FUNC_6(VAR_19->uncompressed_bytes,
         VAR_6->uncompressed_bytes, VAR_6->uncompressed_digits);
      VAR_19->compressed_digits = FUNC_6(VAR_19->compressed_bytes,
         VAR_6->compressed_bytes, VAR_6->compressed_digits);
      VAR_19->rewrite_buffer[0] = VAR_6->header[0];
      VAR_19->rewrite_buffer[1] = VAR_6->header[1];

      if (VAR_6->window_bits != VAR_6->file_bits || VAR_6->cksum)
      {

         VAR_19->rewrite_offset = VAR_6->rewrite_offset;
         VAR_19->rewrite_length = 2;
      }

      else
      {
         VAR_19->rewrite_offset = 0;
         VAR_19->rewrite_length = 0;
      }

      if (VAR_10 < VAR_7)
         FUNC_1(VAR_19, "extra compressed data");

      VAR_6->extra_bytes = VAR_7 - VAR_10;
      VAR_6->ok_bits = VAR_6->window_bits;
   }

   return VAR_9;
}
