
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int png_uint_32 ;
typedef TYPE_1__* png_structrp ;
struct TYPE_3__ {int color_type; scalar_t__ num_trans; int bit_depth; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static png_uint_32
FUNC_0(png_structrp VAR_7)
{
   png_uint_32 VAR_8 = 0;

   if ((VAR_7->color_type & VAR_1) != 0)
      VAR_8 |= VAR_4;

   if ((VAR_7->color_type & VAR_0) != 0)
      VAR_8 |= VAR_3;






   else if (VAR_7->num_trans > 0)
      VAR_8 |= VAR_3;

   if (VAR_7->bit_depth == 16)
      VAR_8 |= VAR_6;

   if ((VAR_7->color_type & VAR_2) != 0)
      VAR_8 |= VAR_5;

   return VAR_8;
}
