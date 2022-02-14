
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int max_gamma_8; int output_colour_type; int output_bit_depth; scalar_t__ unpacked; int const* transform_list; TYPE_2__* pm; int this; } ;
typedef TYPE_1__ transform_display ;
typedef int png_uint_32 ;
struct TYPE_7__ {int use_update_info; int this; } ;
typedef TYPE_2__ png_modifier ;
typedef int image_transform ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 int FUNC_1 (int *,int *,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_2(transform_display *VAR_1, png_modifier *VAR_2, png_uint_32 VAR_3,
    const image_transform *VAR_4)
{
   FUNC_0(VAR_1, 0, sizeof *VAR_1);


   FUNC_1(&VAR_1->this, &VAR_2->this, VAR_3, VAR_0,
      VAR_2->use_update_info);


   VAR_1->pm = VAR_2;
   VAR_1->transform_list = VAR_4;
   VAR_1->max_gamma_8 = 16;


   VAR_1->output_colour_type = 255;
   VAR_1->output_bit_depth = 255;
   VAR_1->unpacked = 0;
}
