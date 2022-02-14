
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int png_uint_32 ;
struct TYPE_3__ {int* bits; } ;
typedef TYPE_1__ format_list ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(format_list *VAR_1, png_uint_32 VAR_2)
{
   return VAR_2 < VAR_0 &&
      (VAR_1->bits[VAR_2 >> 5] & (((png_uint_32)1) << (VAR_2 & 31))) != 0;
}
