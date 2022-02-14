
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {unsigned int sbit; int isbit_shift; unsigned int sbit_max; int screen_gamma; int screen_inverse; unsigned int outmax; double outquant; scalar_t__ do_background; double background_red; double background_green; double background_blue; int gamma_correction; int file_inverse; int scale16; int outlog; scalar_t__ maxout; scalar_t__ maxout_total; int maxcalc; int maxpc; int maxabs; int use_input_precision; TYPE_4__* dp; int pp; } ;
typedef TYPE_3__ validate_info ;
typedef int png_const_structp ;
typedef unsigned int png_byte ;
struct TYPE_8__ {double red; double green; double blue; } ;
struct TYPE_7__ {int colour_type; scalar_t__ has_tRNS; scalar_t__ is_transparent; } ;
struct TYPE_10__ {int sbit; int screen_gamma; scalar_t__ do_background; int background_gamma; int file_gamma; int scale16; TYPE_2__ background_color; TYPE_1__ this; int pm; int use_input_precision; } ;
typedef TYPE_4__ gamma_display ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (int ,int,int) ;
 scalar_t__ FUNC_2 (double const) ;
 scalar_t__ FUNC_3 (int ,int,int) ;
 int FUNC_4 (int ,int,int) ;
 double FUNC_5 (int ,int,int) ;
 int FUNC_6 (int ,int,int) ;
 double FUNC_7 (double,double const) ;

__attribute__((used)) static void
FUNC_8(validate_info *VAR_2, gamma_display *VAR_3, png_const_structp VAR_4,
    int VAR_5, int VAR_6)
{
   const unsigned int VAR_7 = (1U<<VAR_6)-1;

   VAR_2->pp = VAR_4;
   VAR_2->dp = VAR_3;

   if (VAR_3->sbit > 0 && VAR_3->sbit < VAR_5)
   {
      VAR_2->sbit = VAR_3->sbit;
      VAR_2->isbit_shift = VAR_5 - VAR_3->sbit;
   }

   else
   {
      VAR_2->sbit = (png_byte)VAR_5;
      VAR_2->isbit_shift = 0;
   }

   VAR_2->sbit_max = (1U << VAR_2->sbit)-1;




   VAR_2->screen_gamma = VAR_3->screen_gamma;
   if (FUNC_2(VAR_2->screen_gamma-1) < VAR_1)
      VAR_2->screen_gamma = VAR_2->screen_inverse = 0;
   else
      VAR_2->screen_inverse = 1/VAR_2->screen_gamma;

   VAR_2->use_input_precision = VAR_3->use_input_precision;
   VAR_2->outmax = VAR_7;
   VAR_2->maxabs = FUNC_0(VAR_3->pm, VAR_5, VAR_6);
   VAR_2->maxpc = FUNC_6(VAR_3->pm, VAR_5, VAR_6);
   VAR_2->maxcalc = FUNC_1(VAR_3->pm, VAR_5, VAR_6);
   VAR_2->maxout = FUNC_3(VAR_3->pm, VAR_5, VAR_6);
   VAR_2->outquant = FUNC_5(VAR_3->pm, VAR_5, VAR_6);
   VAR_2->maxout_total = VAR_2->maxout + VAR_2->outquant * .5;
   VAR_2->outlog = FUNC_4(VAR_3->pm, VAR_5, VAR_6);

   if ((VAR_3->this.colour_type & VAR_0) != 0 ||
      (VAR_3->this.colour_type == 3 && VAR_3->this.is_transparent) ||
      ((VAR_3->this.colour_type == 0 || VAR_3->this.colour_type == 2) &&
       VAR_3->this.has_tRNS))
   {
      VAR_2->do_background = VAR_3->do_background;

      if (VAR_2->do_background != 0)
      {
         const double VAR_8 = 1/VAR_3->background_gamma;
         double VAR_9, VAR_10, VAR_11;


         VAR_9 = VAR_3->background_color.red; VAR_9 /= VAR_7;
         VAR_10 = VAR_3->background_color.green; VAR_10 /= VAR_7;
         VAR_11 = VAR_3->background_color.blue; VAR_11 /= VAR_7;






         {
            VAR_9 = FUNC_7(VAR_9, VAR_8);
            VAR_10 = FUNC_7(VAR_10, VAR_8);
            VAR_11 = FUNC_7(VAR_11, VAR_8);
         }

         VAR_2->background_red = VAR_9;
         VAR_2->background_green = VAR_10;
         VAR_2->background_blue = VAR_11;
      }
   }
   else
      VAR_2->do_background = 0;

   if (VAR_2->do_background == 0)
      VAR_2->background_red = VAR_2->background_green = VAR_2->background_blue = 0;

   VAR_2->gamma_correction = 1/(VAR_3->file_gamma*VAR_3->screen_gamma);
   if (FUNC_2(VAR_2->gamma_correction-1) < VAR_1)
      VAR_2->gamma_correction = 0;

   VAR_2->file_inverse = 1/VAR_3->file_gamma;
   if (FUNC_2(VAR_2->file_inverse-1) < VAR_1)
      VAR_2->file_inverse = 0;

   VAR_2->scale16 = VAR_3->scale16;
}
