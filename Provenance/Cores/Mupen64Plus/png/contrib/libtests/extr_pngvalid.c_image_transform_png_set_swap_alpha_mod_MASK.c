
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int transform_display ;
typedef int png_const_structp ;
struct TYPE_7__ {TYPE_3__* next; } ;
typedef TYPE_1__ image_transform ;
struct TYPE_8__ {scalar_t__ colour_type; int alpha_first; } ;
typedef TYPE_2__ image_pixel ;
struct TYPE_9__ {int (* mod ) (TYPE_3__*,TYPE_2__*,int ,int const*) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_3__*,TYPE_2__*,int ,int const*) ;

__attribute__((used)) static void
FUNC_1(const image_transform *VAR_2,
    image_pixel *VAR_3, png_const_structp VAR_4,
    const transform_display *VAR_5)
{
   if (VAR_3->colour_type == VAR_0 ||
       VAR_3->colour_type == VAR_1)
      VAR_3->alpha_first = 1;

   VAR_2->next->mod(VAR_2->next, VAR_3, VAR_4, VAR_5);
}
