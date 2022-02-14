
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;
typedef int png_uint_32 ;


 int VAR_0 ;
 int FUNC_0 (struct file*) ;

__attribute__((used)) static unsigned int
FUNC_1(struct file *VAR_1, png_uint_32 *VAR_2)



{
   unsigned int VAR_3 = 0;
   png_uint_32 VAR_4 = 0;

   do
   {
      int VAR_5 = FUNC_0(VAR_1);

      if (VAR_5 == VAR_0)
         return VAR_3;

      VAR_4 = (VAR_4 << 8) + VAR_5;
   } while (++VAR_3 < 4);

   *VAR_2 = VAR_4;
   return VAR_3;
}
