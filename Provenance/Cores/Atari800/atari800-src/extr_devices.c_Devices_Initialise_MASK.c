
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 () ;
 int * VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*,...) ;
 int VAR_5 ;
 int FUNC_2 (int ,char*,int ) ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (char*,char*) ;

int FUNC_4(int *VAR_7, char *VAR_8[])
{
 int VAR_9;
 int VAR_10;
 for (VAR_9 = VAR_10 = 1; VAR_9 < *VAR_7; VAR_9++) {
  int VAR_11 = (VAR_9 + 1 < *VAR_7);
  int VAR_12 = VAR_3;

  if (FUNC_3(VAR_8[VAR_9], "-H1") == 0) {
   if (VAR_11)
    FUNC_2(VAR_0[0], VAR_8[++VAR_9], VAR_4);
   else VAR_12 = VAR_5;
  }
  else if (FUNC_3(VAR_8[VAR_9], "-H2") == 0) {
   if (VAR_11)
    FUNC_2(VAR_0[1], VAR_8[++VAR_9], VAR_4);
   else VAR_12 = VAR_5;
  }
  else if (FUNC_3(VAR_8[VAR_9], "-H3") == 0) {
   if (VAR_11)
    FUNC_2(VAR_0[2], VAR_8[++VAR_9], VAR_4);
   else VAR_12 = VAR_5;
  }
  else if (FUNC_3(VAR_8[VAR_9], "-H4") == 0) {
   if (VAR_11)
    FUNC_2(VAR_0[3], VAR_8[++VAR_9], VAR_4);
   else VAR_12 = VAR_5;
  }
  else if (FUNC_3(VAR_8[VAR_9], "-Hpath") == 0) {
   if (VAR_11)
    FUNC_2(VAR_1, VAR_8[++VAR_9], VAR_4);
   else VAR_12 = VAR_5;
  }
  else if (FUNC_3(VAR_8[VAR_9], "-hreadonly") == 0)
   VAR_2 = VAR_5;
  else if (FUNC_3(VAR_8[VAR_9], "-hreadwrite") == 0)
   VAR_2 = VAR_3;
  else if (FUNC_3(VAR_8[VAR_9], "-devbug") == 0)
   VAR_6 = VAR_5;
  else {
   if (FUNC_3(VAR_8[VAR_9], "-help") == 0) {
    FUNC_1("\t-H1 <path>       Set path for H1: device");
    FUNC_1("\t-H2 <path>       Set path for H2: device");
    FUNC_1("\t-H3 <path>       Set path for H3: device");
    FUNC_1("\t-H4 <path>       Set path for H4: device");
    FUNC_1("\t-Hpath <path>    Set path for Atari executables on the H: device");
    FUNC_1("\t-hreadonly       Enable read-only mode for H: device");
    FUNC_1("\t-hreadwrite      Disable read-only mode for H: device");
    FUNC_1("\t-devbug          Debugging messages for H: and P: devices");
   }
   VAR_8[VAR_10++] = VAR_8[VAR_9];
  }

  if (VAR_12) {
   FUNC_1("Missing argument for '%s'", VAR_8[VAR_9]);
   return VAR_3;
  }
 }
 *VAR_7 = VAR_10;
 FUNC_0();

 return VAR_5;
}
