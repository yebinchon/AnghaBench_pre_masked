
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int frame_count; scalar_t__ pal; } ;
struct TYPE_8__ {TYPE_1__ m; } ;
struct TYPE_7__ {scalar_t__ changed; } ;
struct TYPE_6__ {int EmuOpt; int Frameskip; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_4__ VAR_6 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_7 ;
 TYPE_3__ VAR_8 ;
 int VAR_9 ;
 TYPE_2__ VAR_10 ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_7 () ;
 int VAR_13 ;
 int FUNC_8 (int) ;
 int* VAR_14 ;
 int VAR_15 ;
 int FUNC_9 (char*,char*) ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 (char*) ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 () ;
 int FUNC_16 () ;
 int FUNC_17 (unsigned int) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (char*,char*) ;
 int VAR_16 ;
 int FUNC_21 (char*,char*,int,...) ;

void FUNC_22(void)
{
 int VAR_17, VAR_18;
 int VAR_19;
 unsigned int VAR_20 = 0;
 unsigned int VAR_21 = 0;
 unsigned int VAR_22 = 0;
 char *VAR_23 = ((void*)0);
 char VAR_24[24];
 int VAR_25 = 0;

 VAR_24[0] = 0;

 FUNC_1();

 FUNC_15();
 FUNC_2();
 FUNC_11();


 if (VAR_6.m.pal)
  VAR_19 = 3 * FUNC_8(1000) / 50;
 else
  VAR_19 = 3 * FUNC_8(1000) / 60;

 VAR_16 = 1;
 VAR_17 = VAR_18 = 0;


 while (VAR_11 == VAR_5)
 {
  int VAR_26 = 0;
  int VAR_27;

  FUNC_19(VAR_13);

  if (VAR_16) {
   VAR_16 = 0;
   FUNC_16();
   VAR_21 = FUNC_7() * 3;
   VAR_22 = VAR_21;
   VAR_25 = 0;
  }
  else if (VAR_10.EmuOpt & VAR_2) {
   VAR_21 = FUNC_7() * 3;
  }

  VAR_20 = FUNC_7() * 3;


  if (VAR_15 != 0)
  {
   static int VAR_28;
   if (VAR_20 - FUNC_8(VAR_15) * 3
        > FUNC_8(VAR_9) * 3)
   {
    VAR_15 = 0;
    FUNC_13();
    FUNC_14();
    FUNC_13();
    VAR_23 = ((void*)0);
   }
   else {
    int VAR_29 = VAR_14[0] + VAR_14[1] + VAR_14[2];
    if (VAR_29 != VAR_28) {
     FUNC_13();
     VAR_28 = VAR_29;
    }
    VAR_23 = VAR_14;
   }
  }


  if (VAR_20 - VAR_22 >= FUNC_8(1000) * 3)
  {
   if (VAR_10.EmuOpt & VAR_3)
    FUNC_21(VAR_24, "%02i/%02i  ", VAR_18, VAR_17);

   VAR_18 = VAR_17 = 0;
   VAR_22 += FUNC_8(1000) * 3;
  }




  VAR_27 = VAR_21 - VAR_20;

  if (VAR_10.Frameskip >= 0)
  {
   if (VAR_25 < VAR_10.Frameskip) {
    VAR_25++;
    VAR_26 = 1;
   }
   else {
    VAR_25 = 0;
   }
  }
  else if (VAR_27 < -VAR_19)
  {


   if (VAR_17 / 8 <= VAR_18)
    VAR_26 = 1;
  }


  while (VAR_27 < -VAR_19 * 3) {
   VAR_21 += VAR_19;
   VAR_27 = VAR_21 - VAR_20;
  }

  FUNC_6();
  if (VAR_26) {
   int VAR_30 = VAR_27 > -VAR_19 * 2;
   VAR_7 = VAR_30 ? 1 : 2;
   FUNC_0();
   VAR_7 = 0;
  }
  else {
   FUNC_0();
   FUNC_9(VAR_24, VAR_23);
   VAR_18++;
  }
  VAR_17++;
  VAR_21 += VAR_19;

  if (!VAR_26 && !VAR_12)
   FUNC_14();


  if (!VAR_26 && !VAR_16
      && !(VAR_10.EmuOpt & (VAR_2|VAR_1)))
  {
   unsigned int VAR_31 = FUNC_7();
   VAR_27 = VAR_21 - VAR_31 * 3;


   if (VAR_27 > VAR_19 && (VAR_10.EmuOpt & VAR_4)) {

    FUNC_16();
    VAR_31 = FUNC_7();
    VAR_27 = VAR_31 * 3 - VAR_21;
   }
   if (VAR_27 > VAR_19) {

    FUNC_17(VAR_31 + (VAR_27 - VAR_19) / 3);
   }
  }

  if (!VAR_26 && VAR_12)
   FUNC_14();

  FUNC_18(VAR_13);
 }

 FUNC_4(0);


 if ((VAR_10.EmuOpt & VAR_0) && VAR_8.changed) {
  FUNC_12("Writing SRAM/BRAM...");
  FUNC_3(0, 1);
  VAR_8.changed = 0;
 }

 FUNC_10();
 FUNC_5();
}
