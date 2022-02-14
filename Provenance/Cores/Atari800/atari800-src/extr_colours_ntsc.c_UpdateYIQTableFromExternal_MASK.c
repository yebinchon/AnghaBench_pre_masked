
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned char* palette; scalar_t__ adjust; } ;
struct TYPE_3__ {double gamma; double contrast; double brightness; } ;


 TYPE_2__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 double VAR_2 ;
 double FUNC_0 (double) ;
 double FUNC_1 (double,double const) ;
 double FUNC_2 (double) ;

__attribute__((used)) static void FUNC_3(double VAR_3[768], double VAR_4, const double VAR_5)
{
 const double VAR_6 = 1 - VAR_1.gamma / 2.0;
 unsigned char *VAR_7 = VAR_0.palette;
 int VAR_8;

 VAR_4 = - VAR_2 - VAR_4;

 for (VAR_8 = 0; VAR_8 < 256; VAR_8 ++) {

  double VAR_9 = (double)*VAR_7++ / 255.0;
  double VAR_10 = (double)*VAR_7++ / 255.0;
  double VAR_11 = (double)*VAR_7++ / 255.0;
  double VAR_12 = 0.299 * VAR_9 + 0.587 * VAR_10 + 0.114 * VAR_11;
  double VAR_13 = 0.595716 * VAR_9 - 0.274453 * VAR_10 - 0.321263 * VAR_11;
  double VAR_14 = 0.211456 * VAR_9 - 0.522591 * VAR_10 + 0.311135 * VAR_11;
  double VAR_15 = FUNC_2(VAR_4);
  double VAR_16 = FUNC_0(VAR_4);
  double VAR_17 = VAR_13;
  VAR_13 = VAR_17 * VAR_16 - VAR_14 * VAR_15;
  VAR_14 = VAR_17 * VAR_15 + VAR_14 * VAR_16;

  if (VAR_0.adjust) {
   VAR_12 = FUNC_1(VAR_12, VAR_6);
   VAR_12 *= VAR_1.contrast * 0.5 + 1;
   VAR_12 += VAR_1.brightness * 0.5;
   if (VAR_12 > 1.0)
    VAR_12 = 1.0;
   else if (VAR_12 < 0.0)
    VAR_12 = 0.0;
   VAR_13 *= VAR_5 + 1;
   VAR_14 *= VAR_5 + 1;
  }

  *VAR_3++ = VAR_12;
  *VAR_3++ = VAR_13;
  *VAR_3++ = VAR_14;
 }
}
