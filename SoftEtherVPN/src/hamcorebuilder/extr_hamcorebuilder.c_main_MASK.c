
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*,int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int,int,int,char**) ;
 int FUNC_5 () ;
 int FUNC_6 (char*,...) ;

int FUNC_7(int VAR_0, char *VAR_1[])
{
 FUNC_5();







 FUNC_4(0, 0, VAR_0, VAR_1);

 FUNC_3();

 FUNC_6("hamcore.se2 Build Utility\n");
 FUNC_6("Copyright (c) SoftEther VPN Project. All Rights Reserved.\n\n");

 if (VAR_0 < 3)
 {
  FUNC_6("Usage: hamcorebuilder <src_dir> <dest_hamcore_filename>\n\n");
 }
 else
 {
  char *VAR_2 = VAR_1[1];
  char *VAR_3 = VAR_1[2];

  FUNC_6("Src Dir: '%s'\n", VAR_2);
  FUNC_6("Dest Filename: '%s'\n", VAR_3);

  FUNC_6("\nProcessing...\n");




  FUNC_0(VAR_3, VAR_2, 1);


  FUNC_6("\nDone.\n");
 }

 FUNC_1();
 FUNC_2();

 return 0;
}
