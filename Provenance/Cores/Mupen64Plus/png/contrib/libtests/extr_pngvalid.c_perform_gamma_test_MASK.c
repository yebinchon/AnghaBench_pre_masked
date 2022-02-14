
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {int speed; } ;
struct TYPE_13__ {unsigned int calculations_use_input_precision; double maxout8; unsigned int sbitlow; double error_gray_16; double error_color_16; scalar_t__ test_gamma_expand16; scalar_t__ test_gamma_alpha_mode; scalar_t__ test_gamma_background; scalar_t__ test_gamma_scale16; scalar_t__ test_gamma_sbit; scalar_t__ test_gamma_transform; scalar_t__ test_gamma_threshold; TYPE_1__ this; } ;
typedef TYPE_2__ png_modifier ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int,scalar_t__) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (char*,...) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_9 (TYPE_2__*,char*,int,int) ;

__attribute__((used)) static void
FUNC_10(png_modifier *VAR_6, int VAR_7)
{


   unsigned int VAR_8 =
      VAR_6->calculations_use_input_precision;





   if (!VAR_6->this.speed && VAR_6->test_gamma_threshold)
   {
      FUNC_6(VAR_6);

      if (FUNC_0(VAR_6))
         return;
   }


   if (VAR_6->test_gamma_transform)
   {
      if (VAR_7)
      {
         FUNC_1(VAR_4);
         FUNC_8("Gamma correction error summary\n\n");
         FUNC_8("The printed value is the maximum error in the pixel values\n");
         FUNC_8("calculated by the libpng gamma correction code.  The error\n");
         FUNC_8("is calculated as the difference between the output pixel\n");
         FUNC_8("value (always an integer) and the ideal value from the\n");
         FUNC_8("libpng specification (typically not an integer).\n\n");

         FUNC_8("Expect this value to be less than .5 for 8 bit formats,\n");
         FUNC_8("less than 1 for formats with fewer than 8 bits and a small\n");
         FUNC_8("number (typically less than 5) for the 16 bit formats.\n");
         FUNC_8("For performance reasons the value for 16 bit formats\n");
         FUNC_8("increases when the image file includes an sBIT chunk.\n");
         FUNC_1(VAR_5);
      }

      FUNC_2(VAR_6);



      if (VAR_6->test_gamma_expand16)
         VAR_6->calculations_use_input_precision = 1;
      FUNC_7(VAR_6);
      if (!VAR_8)
         VAR_6->calculations_use_input_precision = 0;

      if (VAR_7)
         FUNC_9(VAR_6, 0 , 1 , 1 );

      if (FUNC_0(VAR_6))
         return;
   }


   if (VAR_6->test_gamma_sbit)
   {
      FUNC_2(VAR_6);
      FUNC_4(VAR_6);

      if (VAR_7)
         FUNC_9(VAR_6, "sBIT", VAR_6->sbitlow < 8U, 1 );

      if (FUNC_0(VAR_6))
         return;
   }
}
