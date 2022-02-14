
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int sbitlow; int limit; int test_tRNS; int test_lbg; int test_lbg_gamma_threshold; int test_lbg_gamma_transform; int test_lbg_gamma_sbit; int test_lbg_gamma_composition; scalar_t__ log; scalar_t__ test_exhaustive; scalar_t__ test_gamma_expand16; scalar_t__ test_gamma_alpha_mode; scalar_t__ test_gamma_background; scalar_t__ test_gamma_scale16; scalar_t__ test_gamma_sbit; scalar_t__ test_gamma_transform; scalar_t__ test_gamma_threshold; scalar_t__ assume_16_bit_calculations; scalar_t__ calculations_use_input_precision; scalar_t__ use_input_precision_16to8; scalar_t__ use_input_precision_sbit; scalar_t__ use_input_precision; scalar_t__ test_transform; scalar_t__ test_size; scalar_t__ test_standard; int interlace_type; scalar_t__ use_update_info; scalar_t__ error_indexed; scalar_t__ error_color_16; scalar_t__ error_color_8; scalar_t__ error_gray_16; scalar_t__ error_gray_8; scalar_t__ error_gray_4; scalar_t__ error_gray_2; scalar_t__ log16; scalar_t__ log8; scalar_t__ maxcalcG; scalar_t__ maxcalc16; scalar_t__ maxabs16; scalar_t__ maxpc16; scalar_t__ maxout16; scalar_t__ maxcalc8; scalar_t__ maxabs8; scalar_t__ maxpc8; scalar_t__ maxout8; scalar_t__ test_uses_encoding; scalar_t__ repeat; scalar_t__ encoding_ignored; scalar_t__ encoding_counter; scalar_t__ current_encoding; scalar_t__ nencodings; scalar_t__ encodings; scalar_t__ current_gamma; scalar_t__ gammas; scalar_t__ ngamma_tests; scalar_t__ ngammas; int state; int * modifications; int this; } ;
typedef TYPE_1__ png_modifier ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(png_modifier *VAR_2)
{
   FUNC_0(VAR_2, 0, sizeof *VAR_2);
   FUNC_1(&VAR_2->this);
   VAR_2->modifications = ((void*)0);
   VAR_2->state = VAR_1;
   VAR_2->sbitlow = 1U;
   VAR_2->ngammas = 0;
   VAR_2->ngamma_tests = 0;
   VAR_2->gammas = 0;
   VAR_2->current_gamma = 0;
   VAR_2->encodings = 0;
   VAR_2->nencodings = 0;
   VAR_2->current_encoding = 0;
   VAR_2->encoding_counter = 0;
   VAR_2->encoding_ignored = 0;
   VAR_2->repeat = 0;
   VAR_2->test_uses_encoding = 0;
   VAR_2->maxout8 = VAR_2->maxpc8 = VAR_2->maxabs8 = VAR_2->maxcalc8 = 0;
   VAR_2->maxout16 = VAR_2->maxpc16 = VAR_2->maxabs16 = VAR_2->maxcalc16 = 0;
   VAR_2->maxcalcG = 0;
   VAR_2->limit = 4E-3;
   VAR_2->log8 = VAR_2->log16 = 0;
   VAR_2->error_gray_2 = VAR_2->error_gray_4 = VAR_2->error_gray_8 = 0;
   VAR_2->error_gray_16 = VAR_2->error_color_8 = VAR_2->error_color_16 = 0;
   VAR_2->error_indexed = 0;
   VAR_2->use_update_info = 0;
   VAR_2->interlace_type = VAR_0;
   VAR_2->test_standard = 0;
   VAR_2->test_size = 0;
   VAR_2->test_transform = 0;



      VAR_2->test_tRNS = 0;

   VAR_2->use_input_precision = 0;
   VAR_2->use_input_precision_sbit = 0;
   VAR_2->use_input_precision_16to8 = 0;
   VAR_2->calculations_use_input_precision = 0;
   VAR_2->assume_16_bit_calculations = 0;
   VAR_2->test_gamma_threshold = 0;
   VAR_2->test_gamma_transform = 0;
   VAR_2->test_gamma_sbit = 0;
   VAR_2->test_gamma_scale16 = 0;
   VAR_2->test_gamma_background = 0;
   VAR_2->test_gamma_alpha_mode = 0;
   VAR_2->test_gamma_expand16 = 0;
   VAR_2->test_lbg = 1;
   VAR_2->test_lbg_gamma_threshold = 1;
   VAR_2->test_lbg_gamma_transform = 1;
   VAR_2->test_lbg_gamma_sbit = 1;
   VAR_2->test_lbg_gamma_composition = 1;
   VAR_2->test_exhaustive = 0;
   VAR_2->log = 0;


}
