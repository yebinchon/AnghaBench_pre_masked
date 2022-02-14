
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ,char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_1 (int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_2 (char*,int ,int ,int ,int *) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char*,char) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (char*,char*,int) ;

__attribute__((used)) static char *
FUNC_7( char *VAR_11 ) {

 char *VAR_12, *VAR_13;
 int VAR_14;

 VAR_12 = FUNC_4(VAR_11,',');
 if (VAR_12) {
  VAR_14 = VAR_12 - VAR_11;
  VAR_13 = VAR_12 + 1;
 } else {
  VAR_14 = FUNC_5(VAR_11);
  VAR_13 = VAR_11 + VAR_14;
        }
 if (FUNC_6("autodetect", VAR_11, VAR_14) == 0) {
  VAR_6 = 1;
  FUNC_3("The autodetection mode has been activated\n");
                return VAR_13;
        }
 if (FUNC_6("probeonly", VAR_11, VAR_14) == 0) {
  VAR_10 = 1;
  FUNC_3("The probeonly mode has been activated\n");
                return VAR_13;
        }
 if (FUNC_6("nopav", VAR_11, VAR_14) == 0) {
  if (VAR_3)
   FUNC_3("'nopav' is not supported on z/VM\n");
  else {
   VAR_8 = 1;
   FUNC_3("PAV support has be deactivated\n");
  }
  return VAR_13;
 }
 if (FUNC_6("nofcx", VAR_11, VAR_14) == 0) {
  VAR_7 = 1;
  FUNC_3("High Performance FICON support has been "
   "deactivated\n");
  return VAR_13;
 }
 if (FUNC_6("fixedbuffers", VAR_11, VAR_14) == 0) {
  if (VAR_9)
   return VAR_13;
  VAR_9 =
   FUNC_2("dasd_page_cache", VAR_4,
       VAR_4, VAR_5,
       ((void*)0));
  if (!VAR_9)
   FUNC_0(VAR_1, "%s", "Failed to create slab, "
    "fixed buffer mode disabled.");
  else
   FUNC_0(VAR_0, "%s",
     "turning on fixed buffer mode");
                return VAR_13;
        }
 return FUNC_1(-VAR_2);
}
