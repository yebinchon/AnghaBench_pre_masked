
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {unsigned int ngamma_tests; int* gammas; int use_input_precision; int interlace_type; int test_tRNS; int test_lbg_gamma_composition; } ;
typedef TYPE_1__ png_modifier ;
typedef int png_byte ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int,int,unsigned int,int ,int,int,int ,int,int) ;
 scalar_t__ FUNC_2 (int*,int*,unsigned int*,int ,int ) ;

__attribute__((used)) static void
FUNC_3(png_modifier *VAR_1, int VAR_2,
   int VAR_3)
{
   png_byte VAR_4 = 0;
   png_byte VAR_5 = 0;
   unsigned int VAR_6 = 0;







   while (FUNC_2(&VAR_4, &VAR_5, &VAR_6,
                      VAR_1->test_lbg_gamma_composition, VAR_1->test_tRNS))
      if ((VAR_4 & VAR_0) != 0




          || (VAR_4 != 3 && VAR_6 != 0))
   {
      unsigned int VAR_7, VAR_8;


      for (VAR_7=0; VAR_7<VAR_1->ngamma_tests; ++VAR_7) for (VAR_8=0; VAR_8<VAR_1->ngamma_tests; ++VAR_8)
      {
         FUNC_1(VAR_1, VAR_4, VAR_5, VAR_6,
            VAR_1->interlace_type, 1/VAR_1->gammas[VAR_7], VAR_1->gammas[VAR_8],
            VAR_1->use_input_precision, VAR_2, VAR_3);

         if (FUNC_0(VAR_1))
            return;
      }
   }
}
