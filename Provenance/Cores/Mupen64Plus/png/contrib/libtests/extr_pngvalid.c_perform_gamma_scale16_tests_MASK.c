
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {unsigned int ngamma_tests; int* gammas; int use_input_precision_16to8; int interlace_type; } ;
typedef TYPE_1__ png_modifier ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int,int,int ,int ,int,int,int ,int ,int) ;

__attribute__((used)) static void FUNC_3(png_modifier *VAR_2)
{
   unsigned int VAR_3, VAR_4;
   for (VAR_3=0; VAR_3<VAR_2->ngamma_tests; ++VAR_3)
   {
      for (VAR_4=0; VAR_4<VAR_2->ngamma_tests; ++VAR_4)
      {
         if (VAR_3 != VAR_4 &&
             FUNC_0(VAR_2->gammas[VAR_4]/VAR_2->gammas[VAR_3]-1) >= VAR_0)
         {
            FUNC_2(VAR_2, 0, 16, 0, VAR_2->interlace_type,
               1/VAR_2->gammas[VAR_3], VAR_2->gammas[VAR_4], 11,
               VAR_2->use_input_precision_16to8, 1 );

            if (FUNC_1(VAR_2))
               return;

            FUNC_2(VAR_2, 2, 16, 0, VAR_2->interlace_type,
               1/VAR_2->gammas[VAR_3], VAR_2->gammas[VAR_4], 11,
               VAR_2->use_input_precision_16to8, 1 );

            if (FUNC_1(VAR_2))
               return;

            FUNC_2(VAR_2, 4, 16, 0, VAR_2->interlace_type,
               1/VAR_2->gammas[VAR_3], VAR_2->gammas[VAR_4], 11,
               VAR_2->use_input_precision_16to8, 1 );

            if (FUNC_1(VAR_2))
               return;

            FUNC_2(VAR_2, 6, 16, 0, VAR_2->interlace_type,
               1/VAR_2->gammas[VAR_3], VAR_2->gammas[VAR_4], 11,
               VAR_2->use_input_precision_16to8, 1 );

            if (FUNC_1(VAR_2))
               return;
         }
      }
   }
}
