
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {double height; double width; } ;
typedef TYPE_1__ VIDEOMODE_resolution_t ;
typedef size_t VIDEOMODE_MODE_t ;
struct TYPE_6__ {double asp_ratio; double h_mult; } ;


 int FUNC_0 (size_t,int ,int) ;
 int VAR_0 ;


 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;





 double VAR_3 ;
 double VAR_4 ;
 double VAR_5 ;
 int VAR_6 ;
 double VAR_7 ;
 double VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 TYPE_2__* VAR_11 ;

__attribute__((used)) static void FUNC_1(VIDEOMODE_resolution_t const *VAR_12, VIDEOMODE_resolution_t const *VAR_13,
                             VIDEOMODE_MODE_t VAR_14, unsigned int VAR_15, unsigned int VAR_16,
                             double *VAR_17, double *VAR_18, int VAR_19)
{
 double VAR_20;


 if (VAR_9 == VAR_2) {
  if (VAR_19)
   VAR_20 = VAR_11[VAR_14].asp_ratio * VAR_13->height / VAR_7
               * VAR_8 / VAR_13->width;
  else
   VAR_20 = VAR_11[VAR_14].asp_ratio * VAR_13->width / VAR_8
               * VAR_7 / VAR_13->height;
 }
 else
  VAR_20 = 1.0 / VAR_11[VAR_14].h_mult;

 if (!FUNC_0(VAR_14, VAR_0, VAR_19)) {
  *VAR_17 = 1.0;
  *VAR_18 = VAR_11[VAR_14].h_mult;
  VAR_5 = VAR_15 * *VAR_17;
  VAR_4 = VAR_16 * *VAR_18;
  return;
 }

 switch (VAR_10) {
 case 128:
 case 132:
 case 131:
 case 130:
  *VAR_17 = VAR_20 * VAR_3;
  *VAR_18 = VAR_3;
  break;
 case 129:
  {
   unsigned int VAR_21 = (double) VAR_12->width / VAR_15 / VAR_20;
   unsigned int VAR_22 = VAR_12->height / VAR_16;
   if (VAR_21 == 0)
    VAR_21 = 1;
   if (VAR_22 == 0)
    VAR_22 = 1;
   if (VAR_9 == VAR_1) {
    *VAR_17 = (double)VAR_21 * VAR_20;
   } else {
    switch (VAR_6) {
    case 133:
     VAR_22 = VAR_21;
     break;
    case 134:
     break;
    default:
     if (VAR_21 < VAR_22)
      VAR_22 = VAR_21;
    }
    *VAR_17 = (double)VAR_22 * VAR_20;
   }
   *VAR_18 = VAR_22;
  }
  break;
 default:
  {
   double VAR_23 = (double) VAR_12->width / VAR_15 / VAR_20;
   double VAR_24 = (double) VAR_12->height / VAR_16;
   if (VAR_23 < 1.0)
    VAR_23 = 1.0;
   if (VAR_24 < 1.0)
    VAR_24 = 1.0;
   if (VAR_9 == VAR_1) {
    *VAR_17 = VAR_23 * VAR_20;
   } else {
    switch (VAR_6) {
    case 133:
     VAR_24 = VAR_23;
     break;
    case 134:
     break;
    default:
     if (VAR_23 < VAR_24)
      VAR_24 = VAR_23;
    }
    *VAR_17 = VAR_24 * VAR_20;
   }
   *VAR_18 = VAR_24;

  }
 }
 VAR_5 = *VAR_17 * VAR_15;
 VAR_4 = *VAR_18 * VAR_16;
}
