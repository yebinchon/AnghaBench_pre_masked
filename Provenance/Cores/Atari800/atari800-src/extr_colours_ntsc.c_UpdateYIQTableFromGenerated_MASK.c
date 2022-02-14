
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {double color_delay; double gamma; double contrast; double brightness; scalar_t__ white_level; scalar_t__ black_level; } ;


 TYPE_1__ VAR_0 ;
 double VAR_1 ;
 double FUNC_0 (double) ;
 double FUNC_1 (double,double const) ;
 double FUNC_2 (double) ;

__attribute__((used)) static void FUNC_3(double VAR_2[768], const double VAR_3, const double VAR_4)
{

 double VAR_5 = VAR_0.color_delay * VAR_1 / 180.0;

 int VAR_6, VAR_7;

 double VAR_8 = (double)VAR_0.black_level / 255.0;
 double VAR_9 = (double)VAR_0.white_level / 255.0;
 const double VAR_10 = 1 - VAR_0.gamma / 2.0;


 double VAR_11[16]={
  0.6941, 0.7091, 0.7241, 0.7401,
  0.7560, 0.7741, 0.7931, 0.8121,
  0.8260, 0.8470, 0.8700, 0.8930,
  0.9160, 0.9420, 0.9690, 1.0000};

 for (VAR_6 = 0; VAR_6 < 16; VAR_6 ++) {
  double VAR_12 = VAR_3 - (VAR_6 - 1) * VAR_5;
  double VAR_13 = (VAR_6 ? (VAR_4 + 1) * 0.175f: 0.0);
  double VAR_14 = FUNC_2(VAR_12) * VAR_13;
  double VAR_15 = FUNC_0(VAR_12) * VAR_13;

  for (VAR_7 = 0; VAR_7 < 16; VAR_7 ++) {

   double VAR_16 = (VAR_11[VAR_7] - VAR_11[0]) / (VAR_11[15] - VAR_11[0]);
   VAR_16 = FUNC_1(VAR_16, VAR_10);
   VAR_16 *= VAR_0.contrast * 0.5 + 1;
   VAR_16 += VAR_0.brightness * 0.5;


   VAR_16 = VAR_16 * (VAR_9 - VAR_8) + VAR_8;






   *VAR_2++ = VAR_16;
   *VAR_2++ = VAR_14;
   *VAR_2++ = VAR_15;
  }
 }
}
