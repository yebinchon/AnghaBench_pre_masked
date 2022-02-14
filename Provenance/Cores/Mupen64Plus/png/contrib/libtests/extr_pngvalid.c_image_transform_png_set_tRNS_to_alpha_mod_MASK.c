
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int this; } ;
typedef TYPE_1__ transform_display ;
typedef int png_const_structp ;
struct TYPE_13__ {TYPE_4__* next; } ;
typedef TYPE_2__ image_transform ;
struct TYPE_14__ {scalar_t__ colour_type; int bit_depth; int sample_depth; scalar_t__ have_tRNS; } ;
typedef TYPE_3__ image_pixel ;
struct TYPE_15__ {int (* mod ) (TYPE_4__*,TYPE_3__*,int ,TYPE_1__ const*) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_3__*,int *,int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_4__*,TYPE_3__*,int ,TYPE_1__ const*) ;

__attribute__((used)) static void
FUNC_3(const image_transform *VAR_2,
   image_pixel *VAR_3, png_const_structp VAR_4,
   const transform_display *VAR_5)
{


   if (VAR_3->colour_type == VAR_1)
      FUNC_1(VAR_3);





   if (VAR_3->have_tRNS)




      FUNC_0(VAR_3, &VAR_5->this, 0 );



   else
   {
      if (VAR_3->bit_depth < 8)
         VAR_3->bit_depth =8;
      if (VAR_3->sample_depth < 8)
         VAR_3->sample_depth = 8;
   }


   VAR_2->next->mod(VAR_2->next, VAR_3, VAR_4, VAR_5);
}
