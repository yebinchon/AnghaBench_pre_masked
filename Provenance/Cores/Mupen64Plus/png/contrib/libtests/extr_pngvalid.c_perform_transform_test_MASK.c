
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ png_uint_32 ;
struct TYPE_5__ {int interlace_type; scalar_t__ repeat; int test_tRNS; int test_lbg; } ;
typedef TYPE_1__ png_modifier ;
typedef int png_byte ;
typedef int image_transform ;


 int FUNC_0 (int ,int ,unsigned int,int ,int ,int ,int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (int const**,int,scalar_t__,char*,int,size_t*,int ,int ) ;
 scalar_t__ FUNC_3 (int *,int *,unsigned int*,int ,int ) ;
 size_t FUNC_4 (char*,int,int ,char*) ;
 int FUNC_5 (TYPE_1__*,int ,int const*,char*) ;

__attribute__((used)) static void
FUNC_6(png_modifier *VAR_0)
{
   png_byte VAR_1 = 0;
   png_byte VAR_2 = 0;
   unsigned int VAR_3 = 0;

   while (FUNC_3(&VAR_1, &VAR_2, &VAR_3, VAR_0->test_lbg,
            VAR_0->test_tRNS))
   {
      png_uint_32 VAR_4 = 0;
      size_t VAR_5;
      char VAR_6[64];

      VAR_5 = FUNC_4(VAR_6, sizeof VAR_6, 0, "transform:");

      for (;;)
      {
         size_t VAR_7 = VAR_5;
         const image_transform *VAR_8 = 0;




         VAR_4 = FUNC_2(&VAR_8, 1 , VAR_4,
            VAR_6, sizeof VAR_6, &VAR_7, VAR_1, VAR_2);

         if (VAR_4 == 0)
            break;


         do
         {
            VAR_0->repeat = 0;
            FUNC_5(VAR_0, FUNC_0(VAR_1, VAR_2, VAR_3,
               VAR_0->interlace_type, 0, 0, 0), VAR_8, VAR_6);

            if (FUNC_1(VAR_0))
               return;
         }
         while (VAR_0->repeat);
      }
   }
}
