
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int interlace_type; int test_tRNS; int test_lbg_gamma_threshold; } ;
typedef TYPE_1__ png_modifier ;
typedef int png_byte ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int ,int ,int ,double,double) ;
 scalar_t__ FUNC_2 (int *,int *,unsigned int*,int ,int ) ;

__attribute__((used)) static void
FUNC_3(png_modifier *VAR_0)
{
   png_byte VAR_1 = 0;
   png_byte VAR_2 = 0;
   unsigned int VAR_3 = 0;
   while (FUNC_2(&VAR_1, &VAR_2, &VAR_3,
                      VAR_0->test_lbg_gamma_threshold, VAR_0->test_tRNS))
      if (VAR_3 < 2)
   {
      double VAR_4 = 1.0;
      while (VAR_4 >= .4)
      {



         FUNC_1(VAR_0, VAR_1, VAR_2, VAR_0->interlace_type,
            VAR_4, 1/VAR_4);
         VAR_4 *= .95;
      }


      FUNC_1(VAR_0, VAR_1, VAR_2, VAR_0->interlace_type,
          .45455, 2.2);

      if (FUNC_0(VAR_0))
         return;
   }
}
