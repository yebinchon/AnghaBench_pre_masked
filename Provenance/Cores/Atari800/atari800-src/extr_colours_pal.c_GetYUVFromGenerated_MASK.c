
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_66__ TYPE_9__ ;
typedef struct TYPE_65__ TYPE_8__ ;
typedef struct TYPE_64__ TYPE_7__ ;
typedef struct TYPE_63__ TYPE_6__ ;
typedef struct TYPE_62__ TYPE_5__ ;
typedef struct TYPE_61__ TYPE_4__ ;
typedef struct TYPE_60__ TYPE_3__ ;
typedef struct TYPE_59__ TYPE_33__ ;
typedef struct TYPE_58__ TYPE_32__ ;
typedef struct TYPE_57__ TYPE_31__ ;
typedef struct TYPE_56__ TYPE_30__ ;
typedef struct TYPE_55__ TYPE_2__ ;
typedef struct TYPE_54__ TYPE_29__ ;
typedef struct TYPE_53__ TYPE_28__ ;
typedef struct TYPE_52__ TYPE_27__ ;
typedef struct TYPE_51__ TYPE_26__ ;
typedef struct TYPE_50__ TYPE_25__ ;
typedef struct TYPE_49__ TYPE_24__ ;
typedef struct TYPE_48__ TYPE_23__ ;
typedef struct TYPE_47__ TYPE_22__ ;
typedef struct TYPE_46__ TYPE_21__ ;
typedef struct TYPE_45__ TYPE_20__ ;
typedef struct TYPE_44__ TYPE_1__ ;
typedef struct TYPE_43__ TYPE_19__ ;
typedef struct TYPE_42__ TYPE_18__ ;
typedef struct TYPE_41__ TYPE_17__ ;
typedef struct TYPE_40__ TYPE_16__ ;
typedef struct TYPE_39__ TYPE_15__ ;
typedef struct TYPE_38__ TYPE_14__ ;
typedef struct TYPE_37__ TYPE_13__ ;
typedef struct TYPE_36__ TYPE_12__ ;
typedef struct TYPE_35__ TYPE_11__ ;
typedef struct TYPE_34__ TYPE_10__ ;


struct TYPE_66__ {int member_1; int member_0; } ;
struct TYPE_65__ {int member_1; int member_0; } ;
struct TYPE_64__ {int member_1; int member_0; } ;
struct TYPE_63__ {int member_1; int member_0; } ;
struct TYPE_62__ {int member_1; int member_0; } ;
struct TYPE_61__ {int member_0; int member_1; } ;
struct TYPE_60__ {int member_0; int member_1; } ;
struct TYPE_59__ {double gamma; double color_delay; double const hue; int saturation; double contrast; double brightness; scalar_t__ white_level; scalar_t__ black_level; } ;
struct TYPE_58__ {int member_0; int member_1; } ;
struct TYPE_57__ {int member_0; int member_1; } ;
struct TYPE_56__ {int member_0; int member_1; } ;
struct TYPE_55__ {int member_0; int member_1; } ;
struct TYPE_54__ {int member_0; int member_1; } ;
struct TYPE_53__ {int member_0; int member_1; } ;
struct TYPE_52__ {int member_0; int member_1; } ;
struct TYPE_51__ {int member_1; int member_0; } ;
struct TYPE_50__ {int member_1; int member_0; } ;
struct TYPE_49__ {int member_1; int member_0; } ;
struct TYPE_48__ {int member_1; int member_0; } ;
struct TYPE_47__ {int member_1; int member_0; } ;
struct TYPE_46__ {int member_1; int member_0; } ;
struct TYPE_45__ {int member_1; int member_0; } ;
struct TYPE_40__ {int member_0; int member_1; } ;
struct TYPE_39__ {int member_0; int member_1; } ;
struct TYPE_38__ {int member_0; int member_1; } ;
struct TYPE_37__ {int member_0; int member_1; } ;
struct TYPE_36__ {int member_0; int member_1; } ;
struct TYPE_35__ {int member_1; int member_0; } ;
struct TYPE_34__ {int member_1; int member_0; } ;
struct TYPE_44__ {TYPE_16__ member_14; TYPE_15__ member_13; TYPE_14__ member_12; TYPE_13__ member_11; TYPE_12__ member_10; TYPE_11__ member_9; TYPE_10__ member_8; TYPE_9__ member_7; TYPE_8__ member_6; TYPE_7__ member_5; TYPE_6__ member_4; TYPE_5__ member_3; TYPE_4__ member_2; TYPE_3__ member_1; TYPE_2__ member_0; } ;
struct TYPE_43__ {int member_0; int member_1; } ;
struct TYPE_42__ {int member_0; int member_1; } ;
struct TYPE_41__ {TYPE_32__ member_14; TYPE_31__ member_13; TYPE_30__ member_12; TYPE_29__ member_11; TYPE_28__ member_10; TYPE_27__ member_9; TYPE_26__ member_8; TYPE_25__ member_7; TYPE_24__ member_6; TYPE_23__ member_5; TYPE_22__ member_4; TYPE_21__ member_3; TYPE_20__ member_2; TYPE_19__ member_1; TYPE_18__ member_0; } ;


 TYPE_33__ VAR_0 ;
 double VAR_1 ;
 double FUNC_0 (double) ;
 scalar_t__ FUNC_1 (double) ;
 double FUNC_2 (double,double const) ;
 double FUNC_3 (double) ;
 double FUNC_4 (double) ;

__attribute__((used)) static void FUNC_5(double VAR_2[256*5])
{
 struct del_coeff {
  int add;
  int mult;
 };


 static struct {
  struct del_coeff even[15];
  struct del_coeff odd[15];
 } const VAR_3 = {
  { { 1, 5 },
    { 1, 6 },
    { 1, 7 },
    { 0, 0 },
    { 0, 1 },
    { 0, 2 },
    { 0, 4 },
    { 0, 5 },
    { 0, 6 },
    { 0, 7 },
    { 1, 1 },
    { 1, 2 },
    { 1, 3 },
    { 1, 4 },
    { 1, 5 }
  },
  { { 1, 1 },
    { 1, 0 },
    { 0, 7 },
    { 0, 6 },
    { 0, 5 },
    { 0, 4 },
    { 0, 2 },
    { 0, 1 },
    { 0, 0 },
    { 1, 7 },
    { 1, 5 },
    { 1, 4 },
    { 1, 3 },
    { 1, 2 },
    { 1, 1 }
  }
 };
 int VAR_4, VAR_5;

 double const VAR_6 = (double)VAR_0.black_level / 255.0f;
 double const VAR_7 = (double)VAR_0.white_level / 255.0f;
 double const VAR_8 = 1 - VAR_0.gamma / 2.0;


 static double const VAR_9[16] = {
  0.6941, 0.7091, 0.7241, 0.7401,
  0.7560, 0.7741, 0.7931, 0.8121,
  0.8260, 0.8470, 0.8700, 0.8930,
  0.9160, 0.9420, 0.9690, 1.0000};




 static double const VAR_10 = 0.05;

 static double const VAR_11 = 0.421894970414201;

 static double const VAR_12 = 0.446563064859117;

 double const VAR_13 = VAR_0.color_delay / 360.0;



 double const VAR_14 = VAR_11 + VAR_12 * VAR_3.even[0].add + VAR_13 * VAR_3.even[0].mult;
 double const VAR_15 = VAR_11 + VAR_12 * VAR_3.odd[0].add + VAR_13 * VAR_3.odd[0].mult;


 double VAR_16;

 double VAR_17 = (VAR_14 + VAR_15 + VAR_0.hue) / 2.0;


 double VAR_18 = VAR_14 - VAR_15;
 VAR_18 -= FUNC_1(VAR_18);

 if (VAR_18 > 0.5 - VAR_10 && VAR_18 < 0.5 + VAR_10)

  VAR_16 = 0.0;
 else {



  double VAR_19 = FUNC_4(2.0 * FUNC_0(VAR_18*2.0*VAR_1) + 2.0);



  VAR_16 = FUNC_4(2.0) / VAR_19;
 }

 for (VAR_4 = 0; VAR_4 < 16; VAR_4 ++) {
  double VAR_20 = 0.0;
  double VAR_21 = 0.0;
  double VAR_22 = 0.0;
  double VAR_23 = 0.0;
  if (VAR_4) {
   struct del_coeff const *VAR_24 = &(VAR_3.even[VAR_4 - 1]);
   struct del_coeff const *VAR_25 = &(VAR_3.odd[VAR_4 - 1]);
   double VAR_26 = VAR_11 + VAR_12 * VAR_24->add + VAR_13 * VAR_24->mult;
   double VAR_27 = VAR_11 + VAR_12 * VAR_25->add + VAR_13 * VAR_25->mult;
   double VAR_28 = (0.5 - (VAR_26 - VAR_17)) * 2.0 * VAR_1;
   double VAR_29 = (0.5 + (VAR_27 - VAR_17)) * 2.0 * VAR_1;
   double VAR_30 = (VAR_0.saturation + 1) * 0.175 * VAR_16;
   VAR_20 = FUNC_0(VAR_28) * VAR_30;
   VAR_22 = FUNC_3(VAR_28) * VAR_30;
   VAR_21 = FUNC_0(VAR_29) * VAR_30;
   VAR_23 = FUNC_3(VAR_29) * VAR_30;
  }
  for (VAR_5 = 0; VAR_5 < 16; VAR_5 ++) {

   double VAR_31 = (VAR_9[VAR_5] - VAR_9[0]) / (VAR_9[15] - VAR_9[0]);
   VAR_31 = FUNC_2(VAR_31, VAR_8);
   VAR_31 *= VAR_0.contrast * 0.5 + 1;
   VAR_31 += VAR_0.brightness * 0.5;


   VAR_31 = VAR_31 * (VAR_7 - VAR_6) + VAR_6;






   *VAR_2++ = VAR_31;
   *VAR_2++ = VAR_20;
   *VAR_2++ = VAR_21;
   *VAR_2++ = VAR_22;
   *VAR_2++ = VAR_23;
  }
 }
}
