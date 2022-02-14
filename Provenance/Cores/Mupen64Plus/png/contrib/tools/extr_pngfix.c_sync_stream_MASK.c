
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file {int type; int read_count; int length; int data_pos; TYPE_1__* global; int status_code; } ;
typedef int png_uint_32 ;
typedef int png_byte ;
struct TYPE_2__ {scalar_t__ verbose; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (struct file*,int *) ;
 int FUNC_4 (char*,int ) ;
 int FUNC_5 (int*,unsigned int) ;
 int VAR_3 ;
 int FUNC_6 (struct file*,int,int,int) ;
 int FUNC_7 (char,int ) ;
 int FUNC_8 (struct file*,int*) ;
 int FUNC_9 (struct file*) ;
 int VAR_4 ;
 int FUNC_10 (struct file*,int ,char*) ;
 int FUNC_11 (int,int ) ;

__attribute__((used)) static void
FUNC_12(struct file *VAR_5)



{
   png_uint_32 VAR_6;

   VAR_5->status_code |= VAR_2;

   if (VAR_5->global->verbose)
   {
      FUNC_4(" SYNC ", VAR_4);
      FUNC_11(VAR_5->type, VAR_4);
      FUNC_7('\n', VAR_4);
   }


   FUNC_3(VAR_5, &VAR_5->data_pos);
   VAR_5->read_count = 8;

   if (FUNC_8(VAR_5, &VAR_6) == 4)
   {





      png_uint_32 VAR_7;
      png_uint_32 VAR_8 = VAR_5->type;
      png_uint_32 VAR_9 = FUNC_1(VAR_8);
      png_byte VAR_10[8];
      unsigned int VAR_11 = 0, VAR_12 = 0;

      for (VAR_7=0; VAR_7 <= 0x7fffffff; ++VAR_7)
      {
         int VAR_13;

         if ((VAR_9 ^ 0xffffffff) == VAR_6)
         {



            if (VAR_8 == VAR_3)
            {
               VAR_5->length = VAR_7;
               FUNC_6(VAR_5, VAR_6, 0, 0);
               return;
            }

            else
            {

               while (VAR_11 < 8+VAR_12)
               {
                  VAR_13 = FUNC_9(VAR_5);
                  if (VAR_13 == VAR_0)
                     goto truncated;
                  VAR_10[(VAR_11++) & 7] = (png_byte)VAR_13;
               }


               VAR_11 -= VAR_12 & ~7;
               VAR_12 -= VAR_12 & ~7;


               {
                  png_uint_32 VAR_14 = FUNC_5(VAR_10, VAR_12);

                  if (VAR_14 < 0x7fffffff)
                  {
                     png_uint_32 VAR_15 = FUNC_5(VAR_10, VAR_12+4);

                     if (FUNC_0(VAR_15))
                     {
                        VAR_5->read_count -= 8;
                        FUNC_6(VAR_5, VAR_6, VAR_14, VAR_15);
                        return;
                     }
                  }


               }
            }
         }
         if (VAR_11 <= VAR_12)
         {
            VAR_13 = FUNC_9(VAR_5);

            if (VAR_13 == VAR_0)
               goto truncated;
         }

         else
            VAR_13 = VAR_10[(++VAR_12) & 7];

         VAR_9 = FUNC_2(VAR_9, VAR_6 >> 24);
         VAR_6 = (VAR_6 << 8) + VAR_13;
      }




   }

truncated:
   FUNC_10(VAR_5, VAR_1, "damaged PNG stream");
}
