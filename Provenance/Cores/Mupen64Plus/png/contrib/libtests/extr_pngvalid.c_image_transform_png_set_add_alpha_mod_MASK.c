
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int transform_display ;
typedef int png_const_structp ;
struct TYPE_8__ {TYPE_3__* next; } ;
typedef TYPE_1__ image_transform ;
struct TYPE_9__ {int bit_depth; int colour_type; unsigned int alpha; double alphaf; int alpha_first; scalar_t__ alphae; } ;
typedef TYPE_2__ image_pixel ;
struct TYPE_11__ {unsigned int const filler; scalar_t__ flags; } ;
struct TYPE_10__ {int (* mod ) (TYPE_3__*,TYPE_2__*,int ,int const*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_7__ VAR_3 ;
 int FUNC_0 (TYPE_3__*,TYPE_2__*,int ,int const*) ;

__attribute__((used)) static void
FUNC_1(const image_transform *VAR_4,
    image_pixel *VAR_5, png_const_structp VAR_6,
    const transform_display *VAR_7)
{
   if (VAR_5->bit_depth >= 8 &&
       (VAR_5->colour_type == VAR_1 ||
        VAR_5->colour_type == VAR_0))
   {
      const unsigned int VAR_8 = (1U << VAR_5->bit_depth)-1;
      VAR_5->alpha = VAR_3.filler & VAR_8;
      VAR_5->alphaf = ((double)VAR_5->alpha) / VAR_8;
      VAR_5->alphae = 0;

      VAR_5->colour_type |= 4;
      VAR_5->alpha_first = VAR_3.flags == VAR_2;
   }

   VAR_4->next->mod(VAR_4->next, VAR_5, VAR_6, VAR_7);
}
