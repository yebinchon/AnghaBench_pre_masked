
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int this; } ;
typedef TYPE_1__ transform_display ;
typedef int png_const_structp ;
struct TYPE_12__ {TYPE_4__* next; } ;
typedef TYPE_2__ image_transform ;
struct TYPE_13__ {int colour_type; int bit_depth; int sample_depth; scalar_t__ have_tRNS; } ;
typedef TYPE_3__ image_pixel ;
struct TYPE_14__ {int (* mod ) (TYPE_4__*,TYPE_3__*,int ,TYPE_1__ const*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_3__*,int *,int ) ;
 int FUNC_1 (TYPE_4__*,TYPE_3__*,int ,TYPE_1__ const*) ;

__attribute__((used)) static void
FUNC_2(const image_transform *VAR_5,
    image_pixel *VAR_6, png_const_structp VAR_7,
    const transform_display *VAR_8)
{





   if ((VAR_6->colour_type & VAR_0) == 0 && VAR_6->have_tRNS)
      FUNC_0(VAR_6, &VAR_8->this, 0 );


   if (VAR_6->colour_type == VAR_1)
   {

      if (VAR_6->bit_depth < 8)
         VAR_6->sample_depth = VAR_6->bit_depth = 8;




      VAR_6->colour_type = VAR_3;
   }

   else if (VAR_6->colour_type == VAR_2)
      VAR_6->colour_type = VAR_4;

   VAR_5->next->mod(VAR_5->next, VAR_6, VAR_7, VAR_8);
}
