
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int reporting; } ;
struct TYPE_10__ {int flags; TYPE_1__ max_errors; } ;
struct TYPE_9__ {int track; } ;
struct TYPE_8__ {int reset; } ;
struct TYPE_7__ {int (* error ) () ;int (* done ) (int ) ;} ;


 int FUNC_0 (int ) ;
 TYPE_5__* VAR_0 ;
 int FUNC_1 (char*) ;
 TYPE_4__* VAR_1 ;
 TYPE_3__* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 TYPE_2__* VAR_22 ;
 int * VAR_23 ;
 int VAR_24 ;
 int FUNC_3 (char*,...) ;
 int VAR_25 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 () ;

__attribute__((used)) static int FUNC_8(void)
{
 char VAR_26;

 if (VAR_24 != 7) {
  FUNC_1("-- FDC reply error");
  VAR_2->reset = 1;
  return 1;
 }


 switch (VAR_7 & VAR_9) {
 case 0x40:
  if (VAR_10 & VAR_12)
   return 0;
  VAR_26 = 1;
  if (VAR_10 & VAR_16) {
   FUNC_1("Drive is write protected\n");
   FUNC_0(VAR_3);
   VAR_22->done(0);
   VAR_26 = 2;
  } else if (VAR_10 & VAR_14) {
   FUNC_2(VAR_4);
  } else if (VAR_10 & VAR_15) {
   if (VAR_0->flags & VAR_5)
    FUNC_1("Over/Underrun - retrying\n");
   VAR_26 = 0;
  } else if (*VAR_23 >= VAR_0->max_errors.reporting) {
   FUNC_1("");
   if (VAR_7 & VAR_8) {
    FUNC_3("Recalibrate failed!");
   } else if (VAR_17 & VAR_19) {
    FUNC_3("data CRC error");
    FUNC_7();
   } else if (VAR_10 & VAR_11) {
    FUNC_3("CRC error");
    FUNC_7();
   } else if ((VAR_10 & (VAR_13 | VAR_14))
       || (VAR_17 & VAR_20)) {
    if (!VAR_25) {
     FUNC_3("sector not found");
     FUNC_7();
    } else
     FUNC_3("probe failed...");
   } else if (VAR_17 & VAR_21) {
    FUNC_3("wrong cylinder");
   } else if (VAR_17 & VAR_18) {
    FUNC_3("bad cylinder");
   } else {
    FUNC_3
        ("unknown error. ST[0..2] are: 0x%x 0x%x 0x%x",
         VAR_7, VAR_10, VAR_17);
    FUNC_7();
   }
   FUNC_3("\n");
  }
  if (VAR_17 & VAR_21 || VAR_17 & VAR_18)

   VAR_1->track = VAR_6;
  return VAR_26;
 case 0x80:
  FUNC_1("Invalid FDC command given!\n");
  VAR_22->done(0);
  return 2;
 case 0xc0:
  FUNC_1("Abnormal termination caused by polling\n");
  VAR_22->error();
  return 2;
 default:
  return 0;
 }
}
