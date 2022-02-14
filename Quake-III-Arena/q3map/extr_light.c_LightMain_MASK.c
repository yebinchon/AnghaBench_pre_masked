
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (double,char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 () ;
 double FUNC_6 () ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (double) ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 (char*) ;
 int FUNC_15 (double) ;
 int FUNC_16 () ;
 char* FUNC_17 (int *,char*) ;
 int FUNC_18 (double) ;
 int FUNC_19 (char*,...) ;
 double VAR_0 ;
 double FUNC_20 (char*) ;
 void* FUNC_21 (char*) ;
 void* VAR_1 ;
 int * VAR_2 ;
 int FUNC_22 (int ) ;
 void* VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 double VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;
 int VAR_17 ;
 double VAR_18 ;
 int FUNC_23 (char const*,char*,int *,int *,int *) ;
 int FUNC_24 (char*,char*) ;
 int FUNC_25 (double,int ) ;
 scalar_t__ FUNC_26 (char const*) ;
 void* VAR_19 ;

int FUNC_27 (int VAR_20, char **VAR_21) {
 int VAR_22;
 double VAR_23, VAR_24;
 const char *VAR_25;

 FUNC_19 ("----- Lighting ----\n");

 VAR_19 = VAR_15;

 for (VAR_22=1 ; VAR_22<VAR_20 ; VAR_22++) {
  if (!FUNC_24(VAR_21[VAR_22],"-tempname"))
    {
      VAR_22++;
    } else if (!FUNC_24(VAR_21[VAR_22],"-v")) {
   VAR_19 = VAR_16;
  } else if (!FUNC_24(VAR_21[VAR_22],"-threads")) {
   VAR_12 = FUNC_21 (VAR_21[VAR_22+1]);
   VAR_22++;
  } else if (!FUNC_24(VAR_21[VAR_22],"-area")) {
   VAR_0 *= FUNC_20(VAR_21[VAR_22+1]);
   FUNC_19 ("area light scaling at %f\n", VAR_0);
   VAR_22++;
  } else if (!FUNC_24(VAR_21[VAR_22],"-point")) {
   VAR_14 *= FUNC_20(VAR_21[VAR_22+1]);
   FUNC_19 ("point light scaling at %f\n", VAR_14);
   VAR_22++;
  } else if (!FUNC_24(VAR_21[VAR_22],"-notrace")) {
   VAR_10 = VAR_16;
   FUNC_19 ("No occlusion tracing\n");
  } else if (!FUNC_24(VAR_21[VAR_22],"-patchshadows")) {
   VAR_13 = VAR_16;
   FUNC_19 ("Patch shadow casting enabled\n");
  } else if (!FUNC_24(VAR_21[VAR_22],"-extra")) {
   VAR_3 = VAR_16;
   FUNC_19 ("Extra detail tracing\n");
  } else if (!FUNC_24(VAR_21[VAR_22],"-extrawide")) {
   VAR_3 = VAR_16;
   VAR_4 = VAR_16;
   FUNC_19 ("Extra wide detail tracing\n");
  } else if (!FUNC_24(VAR_21[VAR_22], "-samplesize")) {
   VAR_17 = FUNC_21(VAR_21[VAR_22+1]);
   if (VAR_17 < 1) VAR_17 = 1;
   VAR_22++;
   FUNC_19("lightmap sample size is %dx%d units\n", VAR_17, VAR_17);
  } else if (!FUNC_24(VAR_21[VAR_22], "-novertex")) {
   VAR_11 = VAR_16;
   FUNC_19("no vertex lighting = true\n");
  } else if (!FUNC_24(VAR_21[VAR_22], "-nogrid")) {
   VAR_9 = VAR_16;
   FUNC_19("no grid lighting = true\n");
  } else if (!FUNC_24(VAR_21[VAR_22],"-border")) {
   VAR_7 = VAR_16;
   FUNC_19 ("Adding debug border to lightmaps\n");
  } else if (!FUNC_24(VAR_21[VAR_22],"-nosurf")) {
   VAR_8 = VAR_16;
   FUNC_19 ("Not tracing against surfaces\n" );
  } else if (!FUNC_24(VAR_21[VAR_22],"-dump")) {
   VAR_1 = VAR_16;
   FUNC_19 ("Dumping occlusion maps\n");
  } else {
   break;
  }
 }

 FUNC_16 ();

 if (VAR_22 != VAR_20 - 1) {
  FUNC_19("usage: q3map -light [-<switch> [-<switch> ...]] <mapname>\n"
    "\n"
    "Switches:\n"
    "   v              = verbose output\n"
    "   threads <X>    = set number of threads to X\n"
    "   area <V>       = set the area light scale to V\n"
    "   point <W>      = set the point light scale to W\n"
    "   notrace        = don't cast any shadows\n"
    "   extra          = enable super sampling for anti-aliasing\n"
    "   extrawide      = same as extra but smoothen more\n"
    "   nogrid         = don't calculate light grid for dynamic model lighting\n"
    "   novertex       = don't calculate vertex lighting\n"
    "   samplesize <N> = set the lightmap pixel size to NxN units\n");
  FUNC_22(0);
 }

 VAR_23 = FUNC_6 ();

 FUNC_14 (VAR_21[VAR_22]);





 FUNC_25 (VAR_18, FUNC_4(VAR_21[VAR_22]));
 FUNC_15 (VAR_18);
 FUNC_3 (VAR_18, ".bsp");

 FUNC_11();

 FUNC_19 ("reading %s\n", VAR_18);

 FUNC_10 (VAR_18);

 FUNC_5();

 FUNC_12();

 VAR_25 = FUNC_17( &VAR_2[0], "gridsize" );
 if (FUNC_26(VAR_25)) {
  FUNC_23( VAR_25, "%f %f %f", &VAR_6[0], &VAR_6[1], &VAR_6[2] );
  FUNC_19("grid size = {%1.1f, %1.1f, %1.1f}\n", VAR_6[0], VAR_6[1], VAR_6[2]);
 }

 FUNC_1();

 FUNC_8();

 FUNC_13();

 FUNC_0();

 FUNC_2();

 FUNC_9();

 FUNC_19 ("writing %s\n", VAR_18);
 FUNC_18 (VAR_18);

 VAR_24 = FUNC_6 ();
 FUNC_19 ("%5.0f seconds elapsed\n", VAR_24-VAR_23);

 return 0;
}
