
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int test_gamma_expand16; } ;
typedef TYPE_1__ png_modifier ;
typedef int png_byte ;


 int FUNC_0 (TYPE_1__*,int const,int const,int const,int const,double const,double const,int const,int ,char*,int const,int const,int ,int ,int ,int ) ;
 size_t FUNC_1 (char*,int,size_t,char*) ;
 size_t FUNC_2 (char*,int,size_t,double const,int) ;
 size_t FUNC_3 (char*,int,size_t,int const) ;

__attribute__((used)) static void FUNC_4(png_modifier *VAR_0,
   const png_byte VAR_1, const png_byte VAR_2,
   const int VAR_3,
   const int VAR_4, const double VAR_5,
   const double VAR_6, const png_byte VAR_7,
   const int VAR_8, const int VAR_9)
{
   size_t VAR_10 = 0;
   char VAR_11[64];

   if (VAR_7 != VAR_2 && VAR_7 != 0)
   {
      VAR_10 = FUNC_1(VAR_11, sizeof VAR_11, VAR_10, "sbit(");
      VAR_10 = FUNC_3(VAR_11, sizeof VAR_11, VAR_10, VAR_7);
      VAR_10 = FUNC_1(VAR_11, sizeof VAR_11, VAR_10, ") ");
   }

   else
      VAR_10 = FUNC_1(VAR_11, sizeof VAR_11, VAR_10, "gamma ");

   if (VAR_9)
      VAR_10 = FUNC_1(VAR_11, sizeof VAR_11, VAR_10, "16to8 ");

   VAR_10 = FUNC_2(VAR_11, sizeof VAR_11, VAR_10, VAR_5, 3);
   VAR_10 = FUNC_1(VAR_11, sizeof VAR_11, VAR_10, "->");
   VAR_10 = FUNC_2(VAR_11, sizeof VAR_11, VAR_10, VAR_6, 3);

   FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4,
      VAR_5, VAR_6, VAR_7, 0, VAR_11, VAR_8,
      VAR_9, VAR_0->test_gamma_expand16, 0 , 0, 0);
}
