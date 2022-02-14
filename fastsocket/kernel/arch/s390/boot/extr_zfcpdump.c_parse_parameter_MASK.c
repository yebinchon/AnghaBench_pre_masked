
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* parm_dir; char* parm_compress; char* parm_debug; int parm_mode; int parm_mem; int * parm_part; } ;


 char* VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 char* VAR_4 ;
 char* VAR_5 ;
 char* VAR_6 ;
 char* VAR_7 ;
 char* VAR_8 ;
 char* VAR_9 ;
 char* VAR_10 ;
 char* VAR_11 ;
 char* VAR_12 ;
 int VAR_13 ;
 char* VAR_14 ;
 char* VAR_15 ;
 int VAR_16 ;
 char* VAR_17 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,char*,...) ;
 char* FUNC_2 (char*) ;
 TYPE_1__ VAR_18 ;
 scalar_t__ FUNC_3 (char*,char*) ;
 void* FUNC_4 (char*,char*) ;
 int FUNC_5 (char*,char**,int ) ;

__attribute__((used)) static int FUNC_6(char *VAR_19)
{
 char *VAR_20;
 char *VAR_21;

 VAR_20 = FUNC_4(VAR_19, "=");
 if (VAR_20 == ((void*)0))
  return 0;

 if (FUNC_3(VAR_20, VAR_8) == 0) {

  VAR_18.parm_dir = FUNC_4(((void*)0), "=");
  if (VAR_18.parm_dir == ((void*)0)) {
   FUNC_1("No value for '%s' parameter specified\n",
        VAR_8);
   FUNC_1("Using default: %s\n", VAR_9);
   VAR_18.parm_dir = VAR_9;
  }
 } else if (FUNC_3(VAR_20, VAR_17) == 0) {

  VAR_18.parm_part = FUNC_4(((void*)0), "=");
  if (VAR_18.parm_part == ((void*)0)) {
   FUNC_0("No value for '%s' parameter "
      "specified\n", VAR_17);
   return -1;
  }
 } else if (FUNC_3(VAR_20, VAR_10) == 0) {

  char *VAR_22 = FUNC_4(((void*)0), "=");
  if (VAR_22 == ((void*)0)) {
   FUNC_0("No value for '%s' parameter "
      "specified\n", VAR_10);
   return -1;
  }
  VAR_18.parm_mem = FUNC_5(VAR_22, &VAR_21, 0);
  if (*VAR_21 != 0) {
   FUNC_0("Invalid value for '%s' parameter "
      "specified\n", VAR_10);
   return -1;
  }
 } else if (FUNC_3(VAR_20, VAR_0) == 0) {

  VAR_18.parm_compress = FUNC_4(((void*)0), "=");
  if (VAR_18.parm_compress == ((void*)0)) {
   FUNC_1("No value for '%s' parameter "
       "specified\n", VAR_0);
   FUNC_1("Using default: %s\n", VAR_1);
   VAR_18.parm_compress = VAR_1;
  } else if ((FUNC_3(VAR_18.parm_compress, VAR_2) != 0) &&
      (FUNC_3(VAR_18.parm_compress, VAR_3) != 0)) {
   FUNC_1("Unknown dump compression '%s' "
       "specified!\n", VAR_18.parm_compress);
   FUNC_1("Using default: %s\n", VAR_1);
   VAR_18.parm_compress = VAR_1;
  }
 } else if (FUNC_3(VAR_20, VAR_4) == 0) {

  char *VAR_23 = FUNC_4(((void*)0), "=");
  if (VAR_23 == ((void*)0)) {
   FUNC_1("No value for '%s' parameter "
    "specified\n", VAR_4);
   FUNC_1("Using default: %d\n", VAR_5);
  } else {
   VAR_18.parm_debug = FUNC_2(VAR_23);
   if ((VAR_18.parm_debug < VAR_7) ||
       (VAR_18.parm_debug > VAR_6)) {
    FUNC_1("Invalid value (%i) for %s "
    "parameter specified (allowed range is "
    "%i - %i)\n", VAR_18.parm_debug, VAR_4,
    VAR_7, VAR_6);
    FUNC_1("Using default: %i\n",
    VAR_5);
    VAR_18.parm_debug = VAR_5;
   }
  }
 } else if (FUNC_3(VAR_20, VAR_11) == 0) {

  char *VAR_24 = FUNC_4(((void*)0), "=");
  if (VAR_24 == ((void*)0)) {
   FUNC_1("No value for '%s' parameter "
    "specified\n", VAR_11);
   FUNC_1("Using default: %s\n", VAR_14);
  } else if (FUNC_3(VAR_24, VAR_15) == 0) {
   VAR_18.parm_mode = VAR_16;
  } else if (FUNC_3(VAR_24, VAR_12) == 0) {
   VAR_18.parm_mode = VAR_13;
  } else {
   FUNC_1("Unknown dump mode: %s\n", VAR_24);
   FUNC_1("Using default: %s\n", VAR_14);
  }
 }
 return 0;
}
