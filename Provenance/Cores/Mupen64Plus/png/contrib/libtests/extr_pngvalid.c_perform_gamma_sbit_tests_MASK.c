
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int sbitlow; unsigned int ngamma_tests; int* gammas; int use_input_precision_sbit; int interlace_type; int test_tRNS; int test_lbg_gamma_sbit; } ;
typedef TYPE_1__ png_modifier ;
typedef int png_byte ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int,int,unsigned int,int ,int,int,int,int ,int ) ;
 scalar_t__ FUNC_2 (int*,int*,unsigned int*,int ,int ) ;

__attribute__((used)) static void FUNC_3(png_modifier *VAR_2)
{
   png_byte VAR_3;





   for (VAR_3=VAR_2->sbitlow; VAR_3<(1<<VAR_1); ++VAR_3)
   {
      png_byte VAR_4 = 0, VAR_5 = 0;
      unsigned int VAR_6 = 0;

      while (FUNC_2(&VAR_4, &VAR_5, &VAR_6,
                         VAR_2->test_lbg_gamma_sbit, VAR_2->test_tRNS))
         if ((VAR_4 & VAR_0) == 0 &&
            ((VAR_4 == 3 && VAR_3 < 8) ||
            (VAR_4 != 3 && VAR_3 < VAR_5)))
      {
         unsigned int VAR_7;

         for (VAR_7=0; VAR_7<VAR_2->ngamma_tests; ++VAR_7)
         {
            unsigned int VAR_8;

            for (VAR_8=0; VAR_8<VAR_2->ngamma_tests; ++VAR_8) if (VAR_7 != VAR_8)
            {
               FUNC_1(VAR_2, VAR_4, VAR_5, VAR_6,
                  VAR_2->interlace_type, 1/VAR_2->gammas[VAR_7], VAR_2->gammas[VAR_8],
                  VAR_3, VAR_2->use_input_precision_sbit, 0 );

               if (FUNC_0(VAR_2))
                  return;
            }
         }
      }
   }
}
