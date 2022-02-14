
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* product; scalar_t__* version; scalar_t__* vendor; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;
 TYPE_1__* VAR_6 ;
 char* FUNC_0 (int ) ;
 char* VAR_7 ;
 char* VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (char*,char const*,char const*,char const*) ;
 int FUNC_2 (char*,char const*,...) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (scalar_t__*,char const*) ;
 unsigned long FUNC_5 (char const*) ;
 int FUNC_6 (char const*,char const*,unsigned long) ;
 scalar_t__ VAR_10 ;

__attribute__((used)) static int FUNC_7(void)
{
 char const *VAR_11, *VAR_12, *VAR_13;
 int VAR_14;
 unsigned long VAR_15 = 0;


 VAR_11 = FUNC_0(VAR_2);
 VAR_12 = FUNC_0(VAR_0);
 VAR_13 = FUNC_0(VAR_1);


 FUNC_2("Acer Aspire One Fan driver, v.%s\n", VAR_3);

 if (VAR_7[0]) {
  VAR_12 = VAR_7;
  FUNC_2("forcing BIOS version: %s\n", VAR_12);
  VAR_9 = 0;
 }

 if (VAR_8[0]) {
  VAR_13 = VAR_8;
  FUNC_2("forcing BIOS product: %s\n", VAR_13);
  VAR_9 = 0;
 }

 VAR_15 = FUNC_5(VAR_13);

 if (VAR_10)
  FUNC_2("BIOS info: %s %s, product: %s\n",
   VAR_11, VAR_12, VAR_13);


 for (VAR_14 = 0; VAR_6[VAR_14].version[0]; VAR_14++) {
  if (FUNC_5(VAR_6[VAR_14].product) >= VAR_15 &&
      !FUNC_6(VAR_6[VAR_14].product, VAR_13,
      FUNC_5(VAR_6[VAR_14].product)) &&
      !FUNC_4(VAR_6[VAR_14].vendor, VAR_11) &&
      !FUNC_4(VAR_6[VAR_14].version, VAR_12)) {
   VAR_5 = &VAR_6[VAR_14];
   break;
  }
 }

 if (!VAR_5) {
  FUNC_1("unknown (unsupported) BIOS version %s/%s/%s, "
   "please report, aborting!\n", VAR_11, VAR_13, VAR_12);
  return -VAR_4;
 }





 if (!VAR_9) {
  FUNC_3("Fan control off, to enable do:\n");
  FUNC_3("echo -n \"enabled\" > "
   "/sys/class/thermal/thermal_zone0/mode\n");
 }

 return 0;
}
