
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {double r; double g; double b; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (double,int) ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static int FUNC_2( int VAR_2, int VAR_3, int VAR_4, int VAR_5, double VAR_6, double VAR_7, double VAR_8, double VAR_9, double VAR_10)
{
 int VAR_11, VAR_12, VAR_13, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;
 int VAR_19=0;
 int VAR_20 = 123456789;

 if (VAR_4>VAR_2) {
  VAR_11 = VAR_4-VAR_2;
  VAR_13 = 1;
 }
 else {
  VAR_11 = VAR_2-VAR_4;
  VAR_13 = -1;
 }

 if (VAR_5>VAR_3) {
  VAR_12 = VAR_5-VAR_3;
  VAR_14 = 1;
 }
 else {
  VAR_12 = VAR_3-VAR_5;
  VAR_14 = -1;
 }

 if (VAR_11>VAR_12) {
  VAR_15 = VAR_12+VAR_12;
  VAR_17 = VAR_15-VAR_11;
  VAR_16 = VAR_17-VAR_11;
  for (VAR_18=0;VAR_18<=VAR_11;VAR_18++) {
   VAR_1.r+=VAR_8;
   VAR_1.g+=VAR_9;
   VAR_1.b+=VAR_10;

   if(FUNC_0(VAR_6,(int)VAR_18*VAR_7)) {
    if(VAR_0 != VAR_20) {
     VAR_20 = (int)VAR_18*VAR_7;
     VAR_19++;
    }
   }
   else
    FUNC_1(VAR_2,VAR_3);

   VAR_20 = VAR_0;

   if(VAR_19==2)
    break;

   VAR_2 += VAR_13;
   if (VAR_17<0) {
    VAR_17 += VAR_15;
   }
   else {
    FUNC_0(VAR_6,(int)VAR_18*VAR_7);
    FUNC_1(VAR_2,VAR_3);
    VAR_17 += VAR_16;
    VAR_3 += VAR_14;







   }
  }
  return VAR_11+1;
 }
 else {
  VAR_15 = VAR_11+VAR_11;
  VAR_17 = VAR_15-VAR_12;
  VAR_16 = VAR_17-VAR_12;
 for (VAR_18=0;VAR_18<=VAR_12;VAR_18++) {
   VAR_1.r+=VAR_8;
   VAR_1.g+=VAR_9;
   VAR_1.b+=VAR_10;

   if(FUNC_0(VAR_6,(int)VAR_18*VAR_7)) {
    if(VAR_0 != VAR_20) {
     VAR_20 = (int)VAR_18*VAR_7;
     VAR_19++;
    }
   }
   else
    FUNC_1(VAR_2,VAR_3);

   VAR_20 = VAR_0;

   if(VAR_19==2)
    break;

   VAR_3 += VAR_14;
   if (VAR_17<0) {
    VAR_17 += VAR_15;
   }
   else {
    FUNC_0(VAR_6,(int)VAR_18*VAR_7);
    FUNC_1(VAR_2,VAR_3);
    VAR_17 += VAR_16;
    VAR_2 += VAR_13;






   }
  }
  return VAR_12+1;
 }
}
