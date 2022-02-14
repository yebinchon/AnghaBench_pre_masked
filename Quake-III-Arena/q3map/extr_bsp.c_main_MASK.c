
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,char**) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 () ;
 int FUNC_3 (char*,...) ;
 char* FUNC_4 (char*) ;
 double FUNC_5 () ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int,char**) ;
 int FUNC_8 (char*) ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 (char*) ;
 int FUNC_16 (char*) ;
 int FUNC_17 () ;
 int FUNC_18 (int,char**) ;
 int FUNC_19 (int,char**) ;
 int FUNC_20 (int,char**) ;
 int FUNC_21 (char*,...) ;
 double FUNC_22 (char*) ;
 void* FUNC_23 (char*) ;
 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 double VAR_6 ;
 char* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;
 void* VAR_17 ;
 void* VAR_18 ;
 char* VAR_19 ;
 void* VAR_20 ;
 int FUNC_24 (char*) ;
 int VAR_21 ;
 void* VAR_22 ;
 char* VAR_23 ;
 int FUNC_25 (char*,char*,char*) ;
 scalar_t__ FUNC_26 (char*,char*) ;
 int FUNC_27 (char*,char*) ;
 scalar_t__ FUNC_28 (char*) ;
 char* VAR_24 ;
 void* VAR_25 ;
 void* VAR_26 ;
 void* VAR_27 ;

int FUNC_29 (int VAR_28, char **VAR_29) {
 int VAR_30;
 double VAR_31, VAR_32;
 char VAR_33[1024];

 FUNC_21 ("Q3Map v1.0s (c) 1999 Id Software Inc.\n");

 if ( VAR_28 < 2 ) {
  FUNC_3 ("usage: q3map [options] mapfile");
 }


 if (!FUNC_26(VAR_29[1], "-info")) {
  FUNC_0( VAR_28 - 2, VAR_29 + 2 );
  return 0;
 }
 if (!FUNC_26(VAR_29[1], "-light")) {
  FUNC_7( VAR_28 - 1, VAR_29 + 1 );
  return 0;
 }
 if (!FUNC_26(VAR_29[1], "-vlight")) {
  FUNC_18( VAR_28 - 1, VAR_29 + 1 );
  return 0;
 }
 if (!FUNC_26(VAR_29[1], "-vsound")) {
  FUNC_19( VAR_28 - 1, VAR_29 + 1 );
  return 0;
 }
 if (!FUNC_26(VAR_29[1], "-vis")) {
  FUNC_20( VAR_28 - 1, VAR_29 + 1 );
  return 0;
 }



 FUNC_21 ("---- q3map ----\n");

  VAR_24[0] = '\0';

 for (VAR_30=1 ; VAR_30<VAR_28 ; VAR_30++)
 {
  if (!FUNC_26(VAR_29[VAR_30],"-tempname"))
    {
      FUNC_27(VAR_24, VAR_29[++VAR_30]);
    }
  else if (!FUNC_26(VAR_29[VAR_30],"-threads"))
  {
   VAR_16 = FUNC_23 (VAR_29[VAR_30+1]);
   VAR_30++;
  }
  else if (!FUNC_26(VAR_29[VAR_30],"-glview"))
  {
   VAR_4 = VAR_20;
  }
  else if (!FUNC_26(VAR_29[VAR_30], "-v"))
  {
   FUNC_21 ("verbose = true\n");
   VAR_26 = VAR_20;
  }
  else if (!FUNC_26(VAR_29[VAR_30], "-draw"))
  {
   FUNC_21 ("drawflag = true\n");
   VAR_0 = VAR_20;
  }
  else if (!FUNC_26(VAR_29[VAR_30], "-nowater"))
  {
   FUNC_21 ("nowater = true\n");
   VAR_15 = VAR_20;
  }
  else if (!FUNC_26(VAR_29[VAR_30], "-noopt"))
  {
   FUNC_21 ("noopt = true\n");
   VAR_12 = VAR_20;
  }
  else if (!FUNC_26(VAR_29[VAR_30], "-nofill"))
  {
   FUNC_21 ("nofill = true\n");
   VAR_10 = VAR_20;
  }
  else if (!FUNC_26(VAR_29[VAR_30], "-nodetail"))
  {
   FUNC_21 ("nodetail = true\n");
   VAR_9 = VAR_20;
  }
  else if (!FUNC_26(VAR_29[VAR_30], "-fulldetail"))
  {
   FUNC_21 ("fulldetail = true\n");
   VAR_2 = VAR_20;
  }
  else if (!FUNC_26(VAR_29[VAR_30], "-onlyents"))
  {
   FUNC_21 ("onlyents = true\n");
   VAR_17 = VAR_20;
  }
  else if (!FUNC_26(VAR_29[VAR_30], "-onlytextures"))
  {
   FUNC_21 ("onlytextures = true\n");
   VAR_18 = VAR_20;
  }
  else if (!FUNC_26(VAR_29[VAR_30], "-micro"))
  {
   VAR_6 = FUNC_22(VAR_29[VAR_30+1]);
   FUNC_21 ("microvolume = %f\n", VAR_6);
   VAR_30++;
  }
  else if (!FUNC_26(VAR_29[VAR_30], "-nofog"))
  {
   FUNC_21 ("nofog = true\n");
   VAR_11 = VAR_20;
  }
  else if (!FUNC_26(VAR_29[VAR_30], "-nosubdivide"))
  {
   FUNC_21 ("nosubdivide = true\n");
   VAR_13 = VAR_20;
  }
  else if (!FUNC_26(VAR_29[VAR_30], "-leaktest"))
  {
   FUNC_21 ("leaktest = true\n");
   VAR_5 = VAR_20;
  }
  else if (!FUNC_26(VAR_29[VAR_30], "-verboseentities"))
  {
   FUNC_21 ("verboseentities = true\n");
   VAR_27 = VAR_20;
  }
  else if (!FUNC_26(VAR_29[VAR_30], "-nocurves"))
  {
   VAR_8 = VAR_20;
   FUNC_21 ("no curve brushes\n");
  }
  else if (!FUNC_26(VAR_29[VAR_30], "-notjunc"))
  {
   VAR_14 = VAR_20;
   FUNC_21 ("no tjunction fixing\n");
  }
  else if (!FUNC_26(VAR_29[VAR_30], "-expand"))
  {
   VAR_25 = VAR_20;
   FUNC_21 ("Writing expanded.map.\n");
  }
  else if (!FUNC_26(VAR_29[VAR_30], "-showseams"))
  {
   VAR_22 = VAR_20;
   FUNC_21 ("Showing seams on terrain.\n");
  }
  else if (!FUNC_26 (VAR_29[VAR_30],"-tmpout"))
  {
   FUNC_27 (VAR_19, "/tmp");
  }
  else if (!FUNC_26 (VAR_29[VAR_30],"-fakemap"))
  {
   VAR_1 = VAR_20;
   FUNC_21( "will generate fakemap.map\n");
  }
  else if (!FUNC_26(VAR_29[VAR_30], "-samplesize"))
  {
   VAR_21 = FUNC_23(VAR_29[VAR_30+1]);
   if (VAR_21 < 1) VAR_21 = 1;
   VAR_30++;
   FUNC_21("lightmap sample size is %dx%d units\n", VAR_21, VAR_21);
  }
  else if (VAR_29[VAR_30][0] == '-')
   FUNC_3 ("Unknown option \"%s\"", VAR_29[VAR_30]);
  else
   break;
 }

 if (VAR_30 != VAR_28 - 1)
  FUNC_3 ("usage: q3map [options] mapfile");

 VAR_31 = FUNC_5 ();

 FUNC_17 ();

 FUNC_15 (VAR_29[VAR_30]);





 FUNC_27 (VAR_23, FUNC_4 (VAR_29[VAR_30]));
 FUNC_16 (VAR_23);


 FUNC_25 (VAR_33, "%s.prt", VAR_23);
 FUNC_24 (VAR_33);
 FUNC_25 (VAR_33, "%s.lin", VAR_23);
 FUNC_24 (VAR_33);

 FUNC_27 (VAR_7, FUNC_4 (VAR_29[VAR_30]));
 if ( FUNC_26(VAR_7 + FUNC_28(VAR_7) - 4, ".reg" ) ) {

  FUNC_25 (VAR_33, "%s.reg", VAR_23);
  FUNC_24 (VAR_33);

  FUNC_1 (VAR_7, ".map");
 }




 if ( VAR_17 ) {
  FUNC_10();
  return 0;
 }




 if ( VAR_18 ) {
  FUNC_11();
  return 0;
 }




 FUNC_9();


  if (FUNC_28(VAR_24) > 0) {
   FUNC_8 (VAR_24);
  } else {
   FUNC_8 (VAR_7);
  }

 FUNC_14 ();
 FUNC_13 ();

 FUNC_12 ();

 FUNC_2();

 VAR_32 = FUNC_5 ();
 FUNC_21 ("%5.0f seconds elapsed\n", VAR_32-VAR_31);


  if (FUNC_28(VAR_24) > 0) {
    FUNC_24(VAR_24);
  }

 return 0;
}
