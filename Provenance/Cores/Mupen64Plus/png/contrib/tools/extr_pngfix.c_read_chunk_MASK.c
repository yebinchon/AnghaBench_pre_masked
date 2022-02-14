
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file {scalar_t__ length; scalar_t__ type; int read_count; int crc; TYPE_1__* global; } ;
typedef scalar_t__ png_uint_32 ;
struct TYPE_2__ {int verbose; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (struct file*,scalar_t__) ;
 int FUNC_3 (int ,char*,unsigned long) ;
 int FUNC_4 (char*,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (struct file*,scalar_t__,scalar_t__,scalar_t__) ;
 unsigned int FUNC_6 (struct file*,scalar_t__*) ;
 int VAR_2 ;
 int FUNC_7 (struct file*,int ,char*) ;
 int FUNC_8 (struct file*) ;
 int FUNC_9 (scalar_t__,int ) ;

__attribute__((used)) static void
FUNC_10(struct file *VAR_3)
{
   png_uint_32 VAR_4 = VAR_3->length;
   png_uint_32 VAR_5 = VAR_3->type;




   if (VAR_5 == 0)
      FUNC_7(VAR_3, VAR_0, "read beyond IEND");

   if (VAR_3->global->verbose > 2)
   {
      FUNC_4("   ", VAR_2);
      FUNC_9(VAR_5, VAR_2);
      FUNC_3(VAR_2, " %lu\n", (unsigned long)VAR_4);
   }





   VAR_3->crc = FUNC_1(VAR_5);
   if (FUNC_2(VAR_3, VAR_4))
   {
      png_uint_32 VAR_6;
      unsigned int VAR_7 = FUNC_6(VAR_3, &VAR_6);

      if (VAR_7 == 4)
      {
         if (VAR_5 != VAR_1)
         {
            png_uint_32 VAR_8;

            VAR_7 += FUNC_6(VAR_3, &VAR_8);
            if (VAR_7 == 8 && VAR_8 <= 0x7fffffff)
            {
               png_uint_32 VAR_9;

               VAR_7 += FUNC_6(VAR_3, &VAR_9);

               if (VAR_7 == 12 && FUNC_0(VAR_9))
               {



                  VAR_3->read_count -= 8;
                  FUNC_5(VAR_3, VAR_6, VAR_8, VAR_9);
                  return;
               }
            }
         }

         else
         {
            FUNC_5(VAR_3, VAR_6, 0, 0);
            return;
         }
      }
   }
   FUNC_8(VAR_3);
}
