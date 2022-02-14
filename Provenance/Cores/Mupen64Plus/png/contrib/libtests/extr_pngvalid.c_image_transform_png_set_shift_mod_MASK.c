
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
struct TYPE_9__ {int colour_type; int sig_bits; int alpha_sBIT; int blue_sBIT; int green_sBIT; int red_sBIT; } ;
typedef TYPE_2__ image_pixel ;
struct TYPE_11__ {int alpha; int gray; int blue; int green; int red; } ;
struct TYPE_10__ {int (* mod ) (TYPE_3__*,TYPE_2__*,int ,int const*) ;} ;


 int VAR_0 ;
 TYPE_7__ VAR_1 ;
 int FUNC_0 (TYPE_3__*,TYPE_2__*,int ,int const*) ;

__attribute__((used)) static void
FUNC_1(const image_transform *VAR_2,
    image_pixel *VAR_3, png_const_structp VAR_4,
    const transform_display *VAR_5)
{



   if (VAR_3->colour_type != VAR_0)
   {
       VAR_3->sig_bits = 1;





       if (VAR_3->colour_type & 2)
       {
          VAR_3->red_sBIT = VAR_1.red;
          VAR_3->green_sBIT = VAR_1.green;
          VAR_3->blue_sBIT = VAR_1.blue;
       }

       else
          VAR_3->red_sBIT = VAR_3->green_sBIT = VAR_3->blue_sBIT = VAR_1.gray;

       VAR_3->alpha_sBIT = VAR_1.alpha;
   }

   VAR_2->next->mod(VAR_2->next, VAR_3, VAR_4, VAR_5);
}
