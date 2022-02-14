
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int * idat; struct chunk* chunk; } ;
struct chunk {int chunk_length; } ;
typedef int png_uint_32 ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct chunk*,char*) ;
 scalar_t__ FUNC_2 (struct file*) ;
 int FUNC_3 (struct chunk*) ;
 int FUNC_4 (struct file*,int) ;

__attribute__((used)) static int
FUNC_5(struct file *VAR_0)



{
   struct chunk *VAR_1 = VAR_0->chunk;
   png_uint_32 VAR_2;
   png_uint_32 VAR_3 = 0;

   FUNC_0(VAR_1 != ((void*)0) && VAR_0->idat == ((void*)0));
   VAR_2 = VAR_1->chunk_length;
   FUNC_3(VAR_1);

   while (VAR_2 >= 9)
   {
      --VAR_2;
      ++VAR_3;
      if (FUNC_2(VAR_0) == 0)
      {
         --VAR_2;
         ++VAR_3;
         (void)FUNC_2(VAR_0);
         return FUNC_4(VAR_0, VAR_3);
      }
   }

   FUNC_1(VAR_1, "too short");
   return 0;
}
