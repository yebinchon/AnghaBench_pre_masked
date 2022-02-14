
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;
typedef int png_uint_32 ;


 int FUNC_0 (struct file*) ;

__attribute__((used)) static png_uint_32
FUNC_1(struct file *VAR_0)

{
   png_uint_32 VAR_1 = 0;
   int VAR_2 = 0;

   while (++VAR_2 <= 4)
      VAR_1 = (VAR_1 << 8) + FUNC_0(VAR_0);

   return VAR_1;
}
