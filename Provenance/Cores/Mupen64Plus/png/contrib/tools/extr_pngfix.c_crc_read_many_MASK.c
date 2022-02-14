
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {scalar_t__ crc; } ;
typedef scalar_t__ png_uint_32 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (struct file*) ;

__attribute__((used)) static int
FUNC_2(struct file *VAR_1, png_uint_32 VAR_2)



{
   if (VAR_2 > 0)
   {
      png_uint_32 VAR_3 = VAR_1->crc;

      do
      {
         int VAR_4 = FUNC_1(VAR_1);

         if (VAR_4 == VAR_0)
            return 0;

         VAR_3 = FUNC_0(VAR_3, VAR_4);
      }
      while (--VAR_2 > 0);

      VAR_1->crc = VAR_3;
   }

   return 1;
}
