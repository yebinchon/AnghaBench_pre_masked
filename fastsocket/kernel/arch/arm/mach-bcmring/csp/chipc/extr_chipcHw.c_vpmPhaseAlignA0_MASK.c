
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int VPMClock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_1__* VAR_8 ;
 int FUNC_0 (int*,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int FUNC_2(void)
{
 uint32_t VAR_9;
 uint32_t VAR_10;
 uint32_t VAR_11;
 int VAR_12 = 0;
 int VAR_13 = 0;
 int VAR_14 = 0;

 for (VAR_12 = 0; (VAR_12 < VAR_1) && (VAR_13 < VAR_0); VAR_12++) {
  VAR_9 = (VAR_8->VPMClock & VAR_5) >> VAR_6;
  VAR_10 = 0;
  VAR_11 = 0;




  VAR_10 = VAR_8->VPMClock;
  do {

   VAR_11 = VAR_10 & VAR_4;

   FUNC_0(&VAR_8->VPMClock, (VAR_8->VPMClock & (~VAR_5)) | (VAR_9 << VAR_6));

   FUNC_1(1);

   VAR_8->VPMClock ^= VAR_7;

   VAR_10 = VAR_8->VPMClock;

   if ((VAR_10 & VAR_4) == 0x0) {
    VAR_9 = (0x3F & (VAR_9 - 1));
   } else {

    VAR_9 = (0x3F & (VAR_9 + 1));
   }

   VAR_13++;
  } while (((VAR_11 == (VAR_10 & VAR_4)) ||
     ((VAR_10 & VAR_4) != 0x0)) &&
    (VAR_13 < VAR_0)
      );

  if (VAR_13 >= VAR_0) {

   return -1;
  }



  for (VAR_14 = 0; (VAR_14 < 5) && ((VAR_10 & VAR_4) == 0); VAR_14++) {
   VAR_9 = (0x3F & (VAR_9 + 1));
   FUNC_0(&VAR_8->VPMClock, (VAR_8->VPMClock & (~VAR_5)) | (VAR_9 << VAR_6));

   FUNC_1(1);

   VAR_8->VPMClock ^= VAR_7;
   VAR_10 = VAR_8->VPMClock;

   VAR_13++;
  }

  if (VAR_13 >= VAR_0) {

   return -1;
  }

  if (VAR_14 != 5) {

   continue;
  }



  for (VAR_14 = 0; (VAR_14 < 3) && ((VAR_10 & VAR_4) == 0); VAR_14++) {
   VAR_9 = (0x3F & (VAR_9 - 1));
   FUNC_0(&VAR_8->VPMClock, (VAR_8->VPMClock & (~VAR_5)) | (VAR_9 << VAR_6));

   FUNC_1(1);

   VAR_8->VPMClock ^= VAR_7;
   VAR_10 = VAR_8->VPMClock;

   VAR_13++;
  }

  if (VAR_13 >= VAR_0) {

   return -1;
  }

  if (VAR_14 != 3) {

   continue;
  }



  for (VAR_14 = 0; (VAR_14 < 5); VAR_14++) {
   VAR_9 = (0x3F & (VAR_9 - 1));
   FUNC_0(&VAR_8->VPMClock, (VAR_8->VPMClock & (~VAR_5)) | (VAR_9 << VAR_6));

   FUNC_1(1);

   VAR_8->VPMClock ^= VAR_7;
   VAR_10 = VAR_8->VPMClock;

   VAR_13++;
  }

  if (VAR_13 >= VAR_0) {

   return -1;
  }

  if ((VAR_10 & VAR_4) == 0) {

   continue;
  }



  do {

   VAR_11 = VAR_10;

   FUNC_0(&VAR_8->VPMClock, (VAR_8->VPMClock & (~VAR_5)) | (VAR_9 << VAR_6));

   FUNC_1(1);

   VAR_8->VPMClock ^=
       VAR_7;

   VAR_10 = VAR_8->VPMClock;

   if ((VAR_10 & VAR_4) == 0x0) {
    VAR_9 = (0x3F & (VAR_9 - 1));
   } else {

    VAR_9 = (0x3F & (VAR_9 + 1));
   }


   VAR_13++;
  } while (((VAR_11 == (VAR_10 & VAR_4)) || ((VAR_10 & VAR_4) != 0x0)) && (VAR_13 < VAR_0));

  if (VAR_13 >= VAR_0) {

   return -1;
  } else {

   break;
  }
 }


 VAR_9 = (((VAR_8->VPMClock >> VAR_6) - 1) & 0x3F);
 {
  VAR_3;

  VAR_8->VPMClock = (VAR_8->VPMClock & ~VAR_5) | (VAR_9 << VAR_6);

  VAR_8->VPMClock ^= VAR_7;

  VAR_2;
 }

 return (int)VAR_13;
}
