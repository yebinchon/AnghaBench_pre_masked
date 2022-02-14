
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 () ;
 int VAR_8 ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,int,int,int *,int ,int ,int ) ;
 char* VAR_9 ;
 int VAR_10 ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,int *,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (char*,char*) ;

void FUNC_11(void)
{
 char *VAR_11, *VAR_12, *VAR_13, *VAR_14;
 int VAR_15;
 int VAR_16 = VAR_6;

 FUNC_3(" -> fw_cmo_feature_init()\n");
 FUNC_8(&VAR_10);
 FUNC_1(VAR_9, 0, VAR_7);
 VAR_15 = FUNC_5(FUNC_6("ibm,get-system-parameter"), 3, 1,
    ((void*)0),
    VAR_0,
    FUNC_0(VAR_9),
    VAR_7);

 if (VAR_15 != 0) {
  FUNC_9(&VAR_10);
  FUNC_3("CMO not available\n");
  FUNC_3(" <- fw_cmo_feature_init()\n");
  return;
 }

 VAR_14 = VAR_9 + VAR_1 - 2;
 VAR_11 = VAR_9 + 2;
 VAR_12 = VAR_13 = VAR_11;

 while (*VAR_11 && (VAR_11 <= VAR_14)) {



  if (VAR_11[0] == '=') {
   VAR_11[0] = '\0';
   VAR_13 = VAR_11 + 1;
  } else if (VAR_11[0] == '\0' || VAR_11[0] == ',') {

   VAR_11[0] = '\0';

   if (VAR_12 == VAR_13) {
    FUNC_3("Malformed key/value pair\n");

    break;
   }

   if (0 == FUNC_10(VAR_12, "CMOPageSize"))
    VAR_16 = FUNC_7(VAR_13, ((void*)0), 10);
   else if (0 == FUNC_10(VAR_12, "PrPSP"))
    VAR_3 = FUNC_7(VAR_13, ((void*)0), 10);
   else if (0 == FUNC_10(VAR_12, "SecPSP"))
    VAR_4 = FUNC_7(VAR_13, ((void*)0), 10);
   VAR_13 = VAR_12 = VAR_11 + 1;
  }
  VAR_11++;
 }




 VAR_2 = 1 << VAR_16;
 FUNC_3("CMO_PageSize = %lu\n", VAR_2);

 if (VAR_3 != -1 || VAR_4 != -1) {
  FUNC_4("CMO enabled\n");
  FUNC_3("CMO enabled, PrPSP=%d, SecPSP=%d\n", VAR_3,
           VAR_4);
  VAR_8 |= VAR_5;
  FUNC_2();
 } else
  FUNC_3("CMO not enabled, PrPSP=%d, SecPSP=%d\n", VAR_3,
           VAR_4);
 FUNC_9(&VAR_10);
 FUNC_3(" <- fw_cmo_feature_init()\n");
}
