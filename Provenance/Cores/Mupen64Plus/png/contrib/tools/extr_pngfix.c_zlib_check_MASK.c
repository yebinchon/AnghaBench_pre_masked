
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int * msg; } ;
struct zlib {int ok_bits; TYPE_2__ z; int chunk; int cksum; int uncompressed_digits; int uncompressed_bytes; int file_bits; int window_bits; TYPE_1__* global; } ;
struct file {int status_code; int chunk; int idat; } ;
typedef int png_uint_32 ;
typedef int fpos_t ;
struct TYPE_3__ {int optimize_zlib; } ;


 void* FUNC_0 (char*) ;
 int VAR_0 ;



 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct file*,int *) ;
 int FUNC_4 (struct file*,int *) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (struct zlib*) ;
 scalar_t__ FUNC_7 (struct zlib*,int ,int ,int ,int ) ;
 int FUNC_8 (struct zlib*,int ) ;
 scalar_t__ FUNC_9 (struct zlib*,int) ;
 int FUNC_10 (struct zlib*) ;

__attribute__((used)) static int
FUNC_11(struct file *VAR_1, png_uint_32 VAR_2)
{
   fpos_t VAR_3;
   struct zlib VAR_4;


   FUNC_3(VAR_1, &VAR_3);


   if (FUNC_7(&VAR_4, VAR_1->idat, VAR_1->chunk, 0 , VAR_2))
   {
      int VAR_5, VAR_6, VAR_7;


      VAR_7 = FUNC_10(&VAR_4);

      switch (VAR_7)
      {
         case 128:

            VAR_1->status_code |= VAR_0;
            VAR_5 = VAR_4.window_bits + 1;
            VAR_6 = 15;
            break;

         case 129:
            if (!VAR_4.global->optimize_zlib &&
               VAR_4.window_bits == VAR_4.file_bits && !VAR_4.cksum)
            {



               FUNC_6(&VAR_4);
               return 1;
            }

            VAR_6 = FUNC_5(VAR_4.uncompressed_bytes,
               VAR_4.uncompressed_digits);
            if (VAR_4.ok_bits < VAR_6)
               VAR_6 = VAR_4.ok_bits;
            VAR_5 = 8;






            if (VAR_4.cksum)
               FUNC_2(VAR_4.chunk, "zlib checkum");
            break;


         case 130:

            VAR_4.z.msg = FUNC_0("[truncated]");
            FUNC_8(&VAR_4, 0 );


         default:



            FUNC_6(&VAR_4);
            return 0;
      }





      while (VAR_5 < VAR_6 || VAR_6 < VAR_4.ok_bits )
      {
         int VAR_8 = (VAR_5 + VAR_6) >> 1;

         if (FUNC_9(&VAR_4, VAR_8))
         {
            FUNC_4(VAR_1, &VAR_3);
            VAR_7 = FUNC_10(&VAR_4);

            switch (VAR_7)
            {
               case 128:
                  VAR_5 = VAR_8+1;
                  if (VAR_5 > VAR_6)
                  {




                     FUNC_1(VAR_8 == 15);


                     if (VAR_4.z.msg == ((void*)0))
                        VAR_4.z.msg = FUNC_0(
                           "invalid distance too far back");
                     FUNC_8(&VAR_4, 0 );
                     FUNC_6(&VAR_4);
                     return 0;
                  }
                  break;

               case 129:
                  VAR_6 = VAR_8;
                  break;

               default:




                  FUNC_6(&VAR_4);
                  return 0;
            }
         }

         else
         {
            FUNC_6(&VAR_4);
            return 0;
         }
      }


      FUNC_1(VAR_4.ok_bits == VAR_6);
      FUNC_6(&VAR_4);
      return 1;
   }

   else
   {
      FUNC_6(&VAR_4);
      return 0;
   }
}
