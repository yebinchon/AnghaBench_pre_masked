
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int * png_voidp ;
typedef int png_const_structrp ;
typedef size_t png_alloc_size_t ;


 size_t VAR_0 ;
 int * FUNC_0 (int ,size_t) ;

__attribute__((used)) static png_voidp
FUNC_1(png_const_structrp VAR_1, int VAR_2,
    size_t VAR_3)
{
   png_alloc_size_t VAR_4 = (png_alloc_size_t)VAR_2;

   if (VAR_4 <= VAR_0/VAR_3)
      return FUNC_0(VAR_1, VAR_4 * VAR_3);


   return ((void*)0);
}
