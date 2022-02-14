
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned char* palette; scalar_t__ adjust; } ;
struct TYPE_3__ {double gamma; double hue; double contrast; double brightness; double saturation; } ;


 TYPE_2__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_0 (double,double,double,double*,double*,double*) ;
 double VAR_2 ;
 double FUNC_1 (double const) ;
 double FUNC_2 (double,double const) ;
 double FUNC_3 (double const) ;

__attribute__((used)) static void FUNC_4(double VAR_3[256*5])
{
 double const VAR_4 = 1 - VAR_1.gamma / 2.0;
 unsigned char *VAR_5 = VAR_0.palette;
 int VAR_6;

 double const VAR_7 = VAR_1.hue * VAR_2;
 double const VAR_8 = FUNC_3(VAR_7);
 double const VAR_9 = FUNC_1(VAR_7);

 for (VAR_6 = 0; VAR_6 < 256; VAR_6 ++) {

  double VAR_10 = (double)*VAR_5++ / 255.0;
  double VAR_11 = (double)*VAR_5++ / 255.0;
  double VAR_12 = (double)*VAR_5++ / 255.0;
  double VAR_13, VAR_14, VAR_15, VAR_16;
  FUNC_0(VAR_10, VAR_11, VAR_12, &VAR_13, &VAR_14, &VAR_15);
  VAR_16 = VAR_14;
  VAR_14 = VAR_16 * VAR_9 - VAR_15 * VAR_8;
  VAR_15 = VAR_16 * VAR_8 + VAR_15 * VAR_9;

  if (VAR_0.adjust) {
   VAR_13 = FUNC_2(VAR_13, VAR_4);
   VAR_13 *= VAR_1.contrast * 0.5 + 1;
   VAR_13 += VAR_1.brightness * 0.5;
   if (VAR_13 > 1.0)
    VAR_13 = 1.0;
   else if (VAR_13 < 0.0)
    VAR_13 = 0.0;
   VAR_14 *= VAR_1.saturation + 1.0;
   VAR_15 *= VAR_1.saturation + 1.0;
  }

  *VAR_3++ = VAR_13;


  *VAR_3++ = VAR_14;
  *VAR_3++ = VAR_14;
  *VAR_3++ = VAR_15;
  *VAR_3++ = VAR_15;
 }
}
