
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_11__ ;


struct TYPE_13__ {int this; } ;
typedef TYPE_1__ transform_display ;
typedef int png_const_structp ;
struct TYPE_14__ {TYPE_4__* next; } ;
typedef TYPE_2__ image_transform ;
struct TYPE_15__ {scalar_t__ colour_type; int alphaf; double redf; double greenf; double bluef; double rede; double greene; double bluee; scalar_t__ alphae; int blue_sBIT; int green_sBIT; int red_sBIT; scalar_t__ have_tRNS; } ;
typedef TYPE_3__ image_pixel ;
struct TYPE_16__ {int (* mod ) (TYPE_4__*,TYPE_3__*,int ,TYPE_1__ const*) ;} ;
struct TYPE_12__ {double redf; double greenf; double bluef; double rede; double greene; double bluee; int blue_sBIT; int green_sBIT; int red_sBIT; } ;


 double VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_11__ VAR_6 ;
 int FUNC_0 (TYPE_3__*,int *,int) ;
 int FUNC_1 (TYPE_4__*,TYPE_3__*,int ,TYPE_1__ const*) ;

__attribute__((used)) static void
FUNC_2(const image_transform *VAR_7,
    image_pixel *VAR_8, png_const_structp VAR_9,
    const transform_display *VAR_10)
{

   if (VAR_8->have_tRNS && VAR_8->colour_type != VAR_3)
      FUNC_0(VAR_8, &VAR_10->this, 1 );


   if (VAR_8->alphaf < 1)
   {

      if (VAR_8->alphaf <= 0)
      {
         VAR_8->redf = VAR_6.redf;
         VAR_8->greenf = VAR_6.greenf;
         VAR_8->bluef = VAR_6.bluef;

         VAR_8->rede = VAR_6.rede;
         VAR_8->greene = VAR_6.greene;
         VAR_8->bluee = VAR_6.bluee;

         VAR_8->red_sBIT= VAR_6.red_sBIT;
         VAR_8->green_sBIT= VAR_6.green_sBIT;
         VAR_8->blue_sBIT= VAR_6.blue_sBIT;
      }

      else
      {
         double VAR_11 = 1 - VAR_8->alphaf;

         VAR_8->redf = VAR_8->redf * VAR_8->alphaf + VAR_6.redf * VAR_11;
         VAR_8->rede = VAR_8->rede * VAR_8->alphaf + VAR_6.rede * VAR_11 +
            VAR_0;
         VAR_8->greenf = VAR_8->greenf * VAR_8->alphaf + VAR_6.greenf * VAR_11;
         VAR_8->greene = VAR_8->greene * VAR_8->alphaf + VAR_6.greene * VAR_11 +
            VAR_0;
         VAR_8->bluef = VAR_8->bluef * VAR_8->alphaf + VAR_6.bluef * VAR_11;
         VAR_8->bluee = VAR_8->bluee * VAR_8->alphaf + VAR_6.bluee * VAR_11 +
            VAR_0;
      }


      VAR_8->alphaf = 1;
      VAR_8->alphae = 0;
   }

   if (VAR_8->colour_type == VAR_5)
      VAR_8->colour_type = VAR_4;
   else if (VAR_8->colour_type == VAR_2)
      VAR_8->colour_type = VAR_1;


   VAR_7->next->mod(VAR_7->next, VAR_8, VAR_9, VAR_10);
}
