
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {unsigned int ngamma_tests; int* gammas; int use_input_precision; int interlace_type; int test_tRNS; int test_lbg_gamma_transform; } ;
typedef TYPE_1__ png_modifier ;
typedef int png_byte ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ,int ,unsigned int,int ,int,int,int ,int ,int ) ;
 scalar_t__ FUNC_2 (int *,int *,unsigned int*,int ,int ) ;

__attribute__((used)) static void FUNC_3(png_modifier *VAR_0)
{
   png_byte VAR_1 = 0;
   png_byte VAR_2 = 0;
   unsigned int VAR_3 = 0;

   while (FUNC_2(&VAR_1, &VAR_2, &VAR_3,
                      VAR_0->test_lbg_gamma_transform, VAR_0->test_tRNS))
   {
      unsigned int VAR_4, VAR_5;

      for (VAR_4=0; VAR_4<VAR_0->ngamma_tests; ++VAR_4) for (VAR_5=0; VAR_5<VAR_0->ngamma_tests; ++VAR_5)
         if (VAR_4 != VAR_5)
         {
            FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3,
               VAR_0->interlace_type, 1/VAR_0->gammas[VAR_4], VAR_0->gammas[VAR_5], 0 ,
               VAR_0->use_input_precision, 0 );

            if (FUNC_0(VAR_0))
               return;
         }
   }
}
