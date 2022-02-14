
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arguments {char* dumpfile; char** args; scalar_t__ verbose; scalar_t__ list; } ;
typedef int FILE ;
typedef int BrInitError ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int,char**,int ,int ,struct arguments*) ;
 char* FUNC_1 (char*) ;
 char* FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int*) ;
 char* FUNC_4 (char*,char*) ;
 scalar_t__ FUNC_5 (char*,int) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int * FUNC_11 (char*,char*) ;
 int FUNC_12 (int ,char*,...) ;
 int FUNC_13 (char*,int,int,int *) ;
 int FUNC_14 (int *,int ,int ) ;
 scalar_t__ FUNC_15 (int ,int) ;
 int FUNC_16 (char*,int,int,int *) ;
 scalar_t__ FUNC_17 (char*) ;
 scalar_t__ FUNC_18 (char*) ;
 int FUNC_19 (char*,...) ;
 int FUNC_20 (char*,char*) ;
 char* VAR_3 ;
 int VAR_4 ;
 int FUNC_21 (char*) ;
 int FUNC_22 (char*,char*) ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_23 (char*) ;

int FUNC_24 (int VAR_7, char **VAR_8)
{


  BrInitError VAR_9;
  if (FUNC_3 (&VAR_9) == 0) {
    FUNC_19 ("Warning: binreloc failed to initialize (error code %d)\n", VAR_9);
  }
  FUNC_19 ("This tool is located at %s\n", FUNC_2(((void*)0)));

  struct arguments VAR_10;


  VAR_10.list = 0;
  VAR_10.verbose = 0;
  VAR_10.dumpfile = ((void*)0);


  FUNC_0 (&VAR_2, VAR_7, VAR_8, 0, 0, &VAR_10);


  if (VAR_10.list){
    FUNC_21(VAR_10.args[0]);
    FUNC_7(0);
  }


  if (VAR_10.dumpfile){
    FUNC_12 (VAR_6, "%s from the AppImage %s should be dumped to stdout\n", VAR_10.dumpfile, VAR_10.args[0]);
    FUNC_6("To be implemented");
  }


  if (VAR_10.verbose)
      FUNC_12 (VAR_6, "Original SOURCE = %s\nOriginal DESTINATION = %s\n",
        VAR_10.args[0],
        VAR_10.args[1]);


  if(FUNC_17(VAR_10.args[0])){
      char *VAR_11;
      char VAR_12[VAR_0];
      FUNC_20(VAR_10.args[0], VAR_12);
      if (VAR_10.args[1]) {
          VAR_11 = VAR_10.args[1];
      } else {


          VAR_11 = FUNC_1(FUNC_4(VAR_12, ".AppImage"));
          FUNC_12 (VAR_6, "DESTINATION not specified, so assuming %s\n", VAR_11);
      }
      FUNC_12 (VAR_6, "%s should be packaged as %s\n", VAR_10.args[0], VAR_11);




      char *VAR_13;
      FUNC_12 (VAR_5, "Generating squashfs...\n");
      VAR_13 = FUNC_4(VAR_11, ".temp");
      int VAR_14 = FUNC_22(VAR_12, VAR_13);
      if(VAR_14 != 0)
          FUNC_6("sfs_mksquashfs error");

      FUNC_12 (VAR_5, "Generating AppImage...\n");
      FILE *VAR_15 = FUNC_11(VAR_13, "rb");
      if (VAR_15 == ((void*)0)) {
         FUNC_6("Not able to open the tempfile for reading, aborting");
      }
      FILE *VAR_16 = FUNC_11(VAR_11, "w");
      if (VAR_16 == ((void*)0)) {
         FUNC_6("Not able to open the destination file for writing, aborting");
      }



      int VAR_17 = VAR_4;
      char *VAR_18 = VAR_3;
      if (VAR_10.verbose)
          FUNC_19("Size of the embedded runtime: %d bytes\n", VAR_17);






      if(VAR_17 > 128*1024-4*4096-2){
          FUNC_6("Size of the embedded runtime is too large, aborting");
      }

      FUNC_16(VAR_18, VAR_17, 1, VAR_16);

      if(FUNC_15(FUNC_10(VAR_16), 128*1024) != 0) {
          FUNC_6("Not able to write padding to destination file, aborting");
      }

      FUNC_14 (VAR_16, 0, VAR_1);
      char VAR_19;

      while (!FUNC_9(VAR_15))
      {
          FUNC_13(&VAR_19, sizeof(char), 1, VAR_15);
          FUNC_16(&VAR_19, sizeof(char), 1, VAR_16);
      }

      FUNC_8(VAR_15);
      FUNC_8(VAR_16);

      FUNC_12 (VAR_5, "Marking the AppImage as executable...\n");
      if (FUNC_5 (VAR_11, 0755) < 0) {
          FUNC_19("Could not set executable bit, aborting\n");
          FUNC_7(1);
      }
      if(FUNC_23(VAR_13) != 0) {
          FUNC_6("Could not delete the tempfile, aborting");
      }
      FUNC_12 (VAR_5, "Success\n");
}


  if(FUNC_18(VAR_10.args[0])){
      FUNC_12 (VAR_6, "%s is a file, assuming it is an AppImage and should be unpacked\n", VAR_10.args[0]);
      FUNC_6("To be implemented");
  }

  return 0;
}
