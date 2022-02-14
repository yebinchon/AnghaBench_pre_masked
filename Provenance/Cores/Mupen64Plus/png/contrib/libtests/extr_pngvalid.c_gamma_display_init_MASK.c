
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int png_uint_32 ;
struct TYPE_5__ {int use_update_info; int this; } ;
typedef TYPE_1__ png_modifier ;
typedef int png_color_16 ;
typedef int png_byte ;
struct TYPE_6__ {double file_gamma; double screen_gamma; double background_gamma; int threshold_test; int use_input_precision; int scale16; int expand16; int do_background; scalar_t__ maxerrabs; scalar_t__ maxerrpc; scalar_t__ maxerrout; int background_color; int sbit; TYPE_1__* pm; int this; } ;
typedef TYPE_2__ gamma_display ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int *,int *,int ,int ,int ) ;

__attribute__((used)) static void
FUNC_2(gamma_display *VAR_1, png_modifier *VAR_2, png_uint_32 VAR_3,
    double VAR_4, double VAR_5, png_byte VAR_6, int VAR_7,
    int VAR_8, int VAR_9, int VAR_10,
    int VAR_11, const png_color_16 *VAR_12,
    double VAR_13)
{

   FUNC_1(&VAR_1->this, &VAR_2->this, VAR_3, VAR_0,
      VAR_2->use_update_info);


   VAR_1->pm = VAR_2;
   VAR_1->file_gamma = VAR_4;
   VAR_1->screen_gamma = VAR_5;
   VAR_1->background_gamma = VAR_13;
   VAR_1->sbit = VAR_6;
   VAR_1->threshold_test = VAR_7;
   VAR_1->use_input_precision = VAR_8;
   VAR_1->scale16 = VAR_9;
   VAR_1->expand16 = VAR_10;
   VAR_1->do_background = VAR_11;
   if (VAR_11 && VAR_12 != 0)
      VAR_1->background_color = *VAR_12;
   else
      FUNC_0(&VAR_1->background_color, 0, sizeof VAR_1->background_color);


   VAR_1->maxerrout = VAR_1->maxerrpc = VAR_1->maxerrabs = 0;
}
