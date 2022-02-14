
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int csh ;
struct TYPE_4__ {int value; int str; } ;
struct TYPE_3__ {int second_value; int first_value; int str; } ;


 scalar_t__ VAR_0 ;



 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int,int,int *) ;
 scalar_t__ FUNC_1 (int ,int ,int ) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (char**,int) ;
 int FUNC_4 (int ,int ,char*) ;
 char** VAR_8 ;
 scalar_t__ FUNC_5 (int) ;
 int VAR_9 ;
 TYPE_2__* VAR_10 ;
 TYPE_1__* VAR_11 ;
 int VAR_12 ;
 char** FUNC_6 (char*,char*,int*) ;
 int VAR_13 ;
 int FUNC_7 (char*,char*) ;
 scalar_t__ FUNC_8 (char*,char*,int) ;
 scalar_t__ FUNC_9 (char*,int ) ;

__attribute__((used)) static int FUNC_10(void **VAR_14)
{
 csh *VAR_15;
 char **VAR_16;
 int VAR_17;
 int VAR_18, VAR_19;
 int VAR_20, VAR_21, VAR_22;

 if (VAR_7) {
  FUNC_2(VAR_13, "[  ERROR   ] --- Invalid file to setup\n");
  return -1;
 }

 VAR_22 = 0;
 while (VAR_22 < VAR_12 && VAR_8[VAR_22][0] != '#')
  VAR_22++;

 VAR_16 = FUNC_6(VAR_8[VAR_22] + 2, ", ", &VAR_17);
 if (VAR_17 != 3) {
  FUNC_2(VAR_13, "[  ERROR   ] --- Invalid options ( arch, mode, option )\n");
  VAR_7 = 1;
  return -1;
 }

 VAR_18 = FUNC_4(VAR_4, VAR_1, VAR_16[0]);
 if (!FUNC_7(VAR_16[0], "CS_ARCH_ARM64"))
  VAR_9 = 2;
 else
  VAR_9 = 1;

 VAR_19 = 0;
 for (VAR_20 = 0; VAR_20 < VAR_2; ++VAR_20) {
  if (FUNC_9(VAR_16[1], VAR_10[VAR_20].str)) {
   VAR_19 += VAR_10[VAR_20].value;
   switch (VAR_10[VAR_20].value) {
    case 130:
     VAR_9 = 0;
     break;
    case 129:
     VAR_9 = 2;
     break;
    case 128:
     VAR_9 = 1;
     break;
    default:
     break;
   }
  }
 }

 if (VAR_18 == -1) {
  FUNC_2(VAR_13, "[  ERROR   ] --- Arch is not supported!\n");
  VAR_7 = 1;
  return -1;
 }

 VAR_15 = (csh *)FUNC_5(sizeof(csh));
 if(FUNC_0(VAR_18, VAR_19, VAR_15) != VAR_0) {
  FUNC_2(VAR_13, "[  ERROR   ] --- Cannot initialize capstone\n");
  VAR_7 = 1;
  return -1;
 }

 for (VAR_20 = 0; VAR_20 < VAR_3; ++VAR_20) {
  if (FUNC_9(VAR_16[2], VAR_11[VAR_20].str)) {
   if (FUNC_1(*VAR_15, VAR_11[VAR_20].first_value, VAR_11[VAR_20].second_value) != VAR_0) {
    FUNC_2(VAR_13, "[  ERROR   ] --- Option is not supported for this arch/mode\n");
    VAR_7 = 1;
    return -1;
   }
  }
 }

 *VAR_14 = (void *)VAR_15;
 VAR_5++;
 if (VAR_6 == 0)
  while (VAR_5 < VAR_12 && FUNC_8(VAR_8[VAR_5], "0x", 2))
   VAR_5++;
 else
  while (VAR_5 < VAR_12 && FUNC_8(VAR_8[VAR_5], "// 0x", 5))
   VAR_5++;

 FUNC_3(VAR_16, VAR_17);
 return 0;
}
