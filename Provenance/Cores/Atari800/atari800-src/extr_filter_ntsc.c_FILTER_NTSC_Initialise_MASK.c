
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* sharpness; char* resolution; char* artifacts; char* fringing; char* bleed; char* burst_phase; } ;


 int FUNC_0 (char*,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 TYPE_1__ VAR_2 ;
 int FUNC_2 (char*,...) ;
 int VAR_3 ;
 void* FUNC_3 (char*) ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (char*,char*) ;

int FUNC_5(int *VAR_5, char *VAR_6[])
{
 int VAR_7;
 int VAR_8;

 for (VAR_7 = VAR_8 = 1; VAR_7 < *VAR_5; VAR_7++) {
  int VAR_9 = (VAR_7 + 1 < *VAR_5);
  int VAR_10 = VAR_0;

  if (FUNC_4(VAR_6[VAR_7], "-ntsc-sharpness") == 0) {
   if (VAR_9)
    VAR_2.sharpness = FUNC_3(VAR_6[++VAR_7]);
   else VAR_10 = VAR_3;
  }
  else if (FUNC_4(VAR_6[VAR_7], "-ntsc-resolution") == 0) {
   if (VAR_9)
    VAR_2.resolution = FUNC_3(VAR_6[++VAR_7]);
   else VAR_10 = VAR_3;
  }
  else if (FUNC_4(VAR_6[VAR_7], "-ntsc-artifacts") == 0) {
   if (VAR_9)
    VAR_2.artifacts = FUNC_3(VAR_6[++VAR_7]);
   else VAR_10 = VAR_3;
  }
  else if (FUNC_4(VAR_6[VAR_7], "-ntsc-fringing") == 0) {
   if (VAR_9)
    VAR_2.fringing = FUNC_3(VAR_6[++VAR_7]);
   else VAR_10 = VAR_3;
  }
  else if (FUNC_4(VAR_6[VAR_7], "-ntsc-bleed") == 0) {
   if (VAR_9)
    VAR_2.bleed = FUNC_3(VAR_6[++VAR_7]);
   else VAR_10 = VAR_3;
  }
  else if (FUNC_4(VAR_6[VAR_7], "-ntsc-burstphase") == 0) {
   if (VAR_9)
    VAR_2.burst_phase = FUNC_3(VAR_6[++VAR_7]);
   else VAR_10 = VAR_3;
  }
  else if (FUNC_4(VAR_6[VAR_7], "-ntsc-filter-preset") == 0) {
   if (VAR_9) {
    int VAR_11 = FUNC_0(VAR_6[++VAR_7], VAR_4, VAR_1);
    if (VAR_11 < 0) {
     FUNC_2("Invalid value for -ntsc-filter-preset");
     return VAR_0;
    }
    FUNC_1(VAR_11);
   } else VAR_10 = VAR_3;
  }
  else {
   if (FUNC_4(VAR_6[VAR_7], "-help") == 0) {
    FUNC_2("\t-ntsc-sharpness <n>   Set sharpness for NTSC filter (default %.2g)", VAR_2.sharpness);
    FUNC_2("\t-ntsc-resolution <n>  Set resolution for NTSC filter (default %.2g)", VAR_2.resolution);
    FUNC_2("\t-ntsc-artifacts <n>   Set luma artifacts ratio for NTSC filter (default %.2g)", VAR_2.artifacts);
    FUNC_2("\t-ntsc-fringing <n>    Set chroma fringing ratio for NTSC filter (default %.2g)", VAR_2.fringing);
    FUNC_2("\t-ntsc-bleed <n>       Set bleed for NTSC filter (default %.2g)", VAR_2.bleed);
    FUNC_2("\t-ntsc-burstphase <n>  Set burst phase (artifact colours) for NTSC filter (default %.2g)", VAR_2.burst_phase);
    FUNC_2("\t-ntsc-filter-preset composite|svideo|rgb|monochrome");
    FUNC_2("\t                      Use one of predefined NTSC filter adjustments");
   }
   VAR_6[VAR_8++] = VAR_6[VAR_7];
  }

  if (VAR_10) {
   FUNC_2("Missing argument for '%s'", VAR_6[VAR_7]);
   return VAR_0;
  }
 }
 *VAR_5 = VAR_8;

 return VAR_3;
}
