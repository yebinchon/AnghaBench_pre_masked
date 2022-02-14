
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v ;
struct nouveau_pm_level {int core; int shader; int memory; int volt_min; int volt_max; int fanspeed; } ;
typedef int s ;
typedef int m ;
typedef int f ;
typedef int c ;


 int FUNC_0 (char*,int,char*,...) ;

__attribute__((used)) static void
FUNC_1(struct nouveau_pm_level *VAR_0, char *VAR_1, int VAR_2)
{
 char VAR_3[16], VAR_4[16], VAR_5[32], VAR_6[16], VAR_7[16];

 VAR_3[0] = '\0';
 if (VAR_0->core)
  FUNC_0(VAR_3, sizeof(VAR_3), " core %dMHz", VAR_0->core / 1000);

 VAR_4[0] = '\0';
 if (VAR_0->shader)
  FUNC_0(VAR_4, sizeof(VAR_4), " shader %dMHz", VAR_0->shader / 1000);

 VAR_7[0] = '\0';
 if (VAR_0->memory)
  FUNC_0(VAR_7, sizeof(VAR_7), " memory %dMHz", VAR_0->memory / 1000);

 VAR_5[0] = '\0';
 if (VAR_0->volt_min && VAR_0->volt_min != VAR_0->volt_max) {
  FUNC_0(VAR_5, sizeof(VAR_5), " voltage %dmV-%dmV",
    VAR_0->volt_min / 1000, VAR_0->volt_max / 1000);
 } else
 if (VAR_0->volt_min) {
  FUNC_0(VAR_5, sizeof(VAR_5), " voltage %dmV",
    VAR_0->volt_min / 1000);
 }

 VAR_6[0] = '\0';
 if (VAR_0->fanspeed)
  FUNC_0(VAR_6, sizeof(VAR_6), " fanspeed %d%%", VAR_0->fanspeed);

 FUNC_0(VAR_1, VAR_2, "%s%s%s%s%s\n", VAR_3, VAR_4, VAR_7, VAR_5, VAR_6);
}
