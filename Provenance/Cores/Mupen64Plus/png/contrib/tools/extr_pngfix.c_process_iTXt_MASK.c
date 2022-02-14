
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int * idat; struct chunk* chunk; } ;
struct chunk {int chunk_length; } ;
typedef int png_uint_32 ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct file*,int ,char*) ;
 scalar_t__ FUNC_2 (struct file*) ;
 int FUNC_3 (struct chunk*) ;
 int FUNC_4 (struct file*,int) ;

__attribute__((used)) static int
FUNC_5(struct file *VAR_1)
{

   struct chunk *VAR_2 = VAR_1->chunk;
   png_uint_32 VAR_3;
   png_uint_32 VAR_4 = 0;

   FUNC_0(VAR_2 != ((void*)0) && VAR_1->idat == ((void*)0));
   VAR_3 = VAR_2->chunk_length;
   FUNC_3(VAR_2);

   while (VAR_3 >= 5)
   {
      --VAR_3;
      ++VAR_4;
      if (FUNC_2(VAR_1) == 0)
      {
         --VAR_3;
         ++VAR_4;
         if (FUNC_2(VAR_1) == 0)
            return 1;

         --VAR_3;
         ++VAR_4;
         (void)FUNC_2(VAR_1);


         while (VAR_3 >= 9)
         {
            --VAR_3;
            ++VAR_4;
            if (FUNC_2(VAR_1) == 0)
            {

               while (VAR_3 >= 8)
               {
                  --VAR_3;
                  ++VAR_4;
                  if (FUNC_2(VAR_1) == 0)
                     return FUNC_4(VAR_1, VAR_4);
               }
            }
         }


         break;
      }
   }

   FUNC_1(VAR_1, VAR_0, "iTXt chunk length");

   return 0;
}
