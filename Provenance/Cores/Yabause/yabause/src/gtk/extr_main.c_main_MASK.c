
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int gchar ;
struct TYPE_2__ {int cdcoretype; scalar_t__ sndcoretype; void* biospath; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (char*,unsigned int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 void* VAR_5 ;
 void* VAR_6 ;
 int * FUNC_8 (int ,char*,char*,...) ;
 int FUNC_9 (int *,int **,int *,int *) ;
 int FUNC_10 (int *,int *,int,int *) ;
 scalar_t__ FUNC_11 (int *,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 () ;
 int FUNC_14 (int ,char*,char*,int ) ;
 int FUNC_15 (int ,char*,char*,int *) ;
 int FUNC_16 (int ,int *,int ,int ) ;
 int FUNC_17 () ;
 int FUNC_18 (int *,int) ;
 int FUNC_19 (void*,char*,int) ;
 int FUNC_20 (int*,char***) ;
 int FUNC_21 (int*,char***) ;
 int FUNC_22 () ;
 int FUNC_23 (int ,int ,int ) ;
 int * VAR_7 ;
 int VAR_8 ;
 int FUNC_24 (int ) ;
 int FUNC_25 (int ) ;
 int FUNC_26 (char*) ;
 int FUNC_27 (char*,char*,...) ;
 scalar_t__ FUNC_28 (char*,char*) ;
 int FUNC_29 (char*) ;
 scalar_t__ FUNC_30 (char*,char*) ;
 TYPE_1__ VAR_9 ;
 int VAR_10 ;
 int FUNC_31 () ;
 int FUNC_32 () ;
 int FUNC_33 () ;
 int FUNC_34 (int ) ;
 int FUNC_35 (int ,int) ;
 int FUNC_36 (int ,int ) ;
 int FUNC_37 (int ) ;

int FUNC_38(int VAR_11, char *VAR_12[]) {

 int VAR_13;
 int VAR_14 = 0;

 FUNC_2();
 FUNC_1( VAR_0, ((void*)0) );
 VAR_7 = FUNC_8(FUNC_13(), "yabause", "gtk", "yabause.ini", ((void*)0));

 if (! FUNC_11(VAR_7, VAR_1)) {

  gchar * VAR_15 = FUNC_8(FUNC_13(), "yabause.ini", ((void*)0));


  gchar * VAR_16 = FUNC_8(FUNC_13(), "yabause", "gtk", ((void*)0));

  if (! FUNC_11(VAR_16, VAR_1))
   FUNC_18(VAR_16, 0755);
  FUNC_12(VAR_16);

  if (FUNC_11(VAR_15, VAR_1)) {

   gchar * VAR_17;

   FUNC_9(VAR_15, &VAR_17, ((void*)0), ((void*)0));
   FUNC_10(VAR_7, VAR_17, -1, ((void*)0));
  }

  FUNC_12(VAR_15);
 }

 VAR_8 = FUNC_17();

 FUNC_21(&VAR_11, &VAR_12);




 FUNC_32();







 VAR_10 = FUNC_31();

 FUNC_33();

 FUNC_23(FUNC_0(VAR_10), FUNC_14(VAR_8, "Gtk", "X", 0), FUNC_14(VAR_8, "Gtk", "Y", 0));



   for (VAR_13 = 1; VAR_13 < VAR_11; ++VAR_13) {
      if (VAR_12[VAR_13]) {

         if (0 == FUNC_28(VAR_12[VAR_13], "-h") || 0 == FUNC_28(VAR_12[VAR_13], "-?") || 0 == FUNC_28(VAR_12[VAR_13], "--help")) {
            FUNC_26(VAR_12[0]);
            return 0;
         }


         if (0 == FUNC_28(VAR_12[VAR_13], "-b") && VAR_12[VAR_13 + 1]) {
            FUNC_19(VAR_5, VAR_12[VAR_13 + 1], 256);
            VAR_9.biospath = VAR_5;
  } else if (FUNC_30(VAR_12[VAR_13], "--bios=")) {
            FUNC_19(VAR_5, VAR_12[VAR_13] + FUNC_29("--bios="), 256);
            VAR_9.biospath = VAR_5;
  }

         else if (0 == FUNC_28(VAR_12[VAR_13], "-i") && VAR_12[VAR_13 + 1]) {
            FUNC_19(VAR_6, VAR_12[VAR_13 + 1], 256);
     VAR_9.cdcoretype = 1;
  } else if (FUNC_30(VAR_12[VAR_13], "--iso=")) {
            FUNC_19(VAR_6, VAR_12[VAR_13] + FUNC_29("--iso="), 256);
     VAR_9.cdcoretype = 1;
  }

  else if (0 == FUNC_28(VAR_12[VAR_13], "-c") && VAR_12[VAR_13 + 1]) {
            FUNC_19(VAR_6, VAR_12[VAR_13 + 1], 256);
     VAR_9.cdcoretype = 2;
  } else if (FUNC_30(VAR_12[VAR_13], "--cdrom=")) {
            FUNC_19(VAR_6, VAR_12[VAR_13] + FUNC_29("--cdrom="), 256);
     VAR_9.cdcoretype = 2;
  }

         else if (FUNC_28(VAR_12[VAR_13], "-ns") == 0 || FUNC_28(VAR_12[VAR_13], "--nosound") == 0) {
     VAR_9.sndcoretype = 0;
  }

  else if (FUNC_28(VAR_12[VAR_13], "--autoload") == 0) {
            FUNC_37(FUNC_5(VAR_10));
            FUNC_7();
            VAR_14 = 1;
  }

  else if (FUNC_28(VAR_12[VAR_13], "-a") == 0 || FUNC_28(VAR_12[VAR_13], "--autostart") == 0) {
            VAR_14 = 1;
  }

  else if (FUNC_28(VAR_12[VAR_13], "-f") == 0 || FUNC_28(VAR_12[VAR_13], "--fullscreen") == 0) {
            FUNC_36(FUNC_5(VAR_10), VAR_3);
  }

         else if (FUNC_30(VAR_12[VAR_13], "--autoframeskip=")) {
            int VAR_18;
            int VAR_19;
            VAR_18 = FUNC_27(VAR_12[VAR_13] + FUNC_29("--autoframeskip="), "%d", &VAR_19);
            if (VAR_18 > 0)
               FUNC_35(FUNC_5(VAR_10), VAR_19);
         }

  else if (FUNC_30(VAR_12[VAR_13], "--binary=")) {
     char VAR_20[1024];
     unsigned int VAR_21;
     int VAR_22;

     VAR_22 = FUNC_27(VAR_12[VAR_13] + FUNC_29("--binary="), "%[^:]:%x", VAR_20, &VAR_21);
     if (VAR_22 > 0) {
        if (VAR_22 < 2) VAR_21 = 0x06004000;

               FUNC_34(FUNC_5(VAR_10));
        FUNC_4(VAR_20, VAR_21);
     }
  }
      }
   }

   if (VAR_14) FUNC_34(FUNC_5(VAR_10));


 FUNC_22 ();

 FUNC_6();
 FUNC_3();

 return 0;
}
