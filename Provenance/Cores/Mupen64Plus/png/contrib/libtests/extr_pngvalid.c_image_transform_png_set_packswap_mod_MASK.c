
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
struct TYPE_8__ {int bit_depth; int littleendian; } ;
typedef TYPE_2__ image_pixel ;
struct TYPE_9__ {int (* mod ) (TYPE_3__*,TYPE_2__*,int ,int const*) ;} ;


 int FUNC_0 (TYPE_3__*,TYPE_2__*,int ,int const*) ;

__attribute__((used)) static void
FUNC_1(const image_transform *VAR_0,
    image_pixel *VAR_1, png_const_structp VAR_2,
    const transform_display *VAR_3)
{
   if (VAR_1->bit_depth < 8)
      VAR_1->littleendian = 1;

   VAR_0->next->mod(VAR_0->next, VAR_1, VAR_2, VAR_3);
}
