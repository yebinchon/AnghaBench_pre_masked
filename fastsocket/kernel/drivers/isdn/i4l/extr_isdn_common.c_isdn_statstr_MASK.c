
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {size_t* drvmap; char** drvid; int* chanmap; int* usage; char** num; TYPE_1__** drv; } ;
struct TYPE_3__ {int online; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_0 (char*,char*,...) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static char *
FUNC_2(void)
{
 static char VAR_3[2048];
 char *VAR_4;
 int VAR_5;

 FUNC_0(VAR_3, "idmap:\t");
 VAR_4 = VAR_3 + FUNC_1(VAR_3);
 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  FUNC_0(VAR_4, "%s ", (VAR_2->drvmap[VAR_5] < 0) ? "-" : VAR_2->drvid[VAR_2->drvmap[VAR_5]]);
  VAR_4 = VAR_3 + FUNC_1(VAR_3);
 }
 FUNC_0(VAR_4, "\nchmap:\t");
 VAR_4 = VAR_3 + FUNC_1(VAR_3);
 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  FUNC_0(VAR_4, "%d ", VAR_2->chanmap[VAR_5]);
  VAR_4 = VAR_3 + FUNC_1(VAR_3);
 }
 FUNC_0(VAR_4, "\ndrmap:\t");
 VAR_4 = VAR_3 + FUNC_1(VAR_3);
 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  FUNC_0(VAR_4, "%d ", VAR_2->drvmap[VAR_5]);
  VAR_4 = VAR_3 + FUNC_1(VAR_3);
 }
 FUNC_0(VAR_4, "\nusage:\t");
 VAR_4 = VAR_3 + FUNC_1(VAR_3);
 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  FUNC_0(VAR_4, "%d ", VAR_2->usage[VAR_5]);
  VAR_4 = VAR_3 + FUNC_1(VAR_3);
 }
 FUNC_0(VAR_4, "\nflags:\t");
 VAR_4 = VAR_3 + FUNC_1(VAR_3);
 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  if (VAR_2->drv[VAR_5]) {
   FUNC_0(VAR_4, "%ld ", VAR_2->drv[VAR_5]->online);
   VAR_4 = VAR_3 + FUNC_1(VAR_3);
  } else {
   FUNC_0(VAR_4, "? ");
   VAR_4 = VAR_3 + FUNC_1(VAR_3);
  }
 }
 FUNC_0(VAR_4, "\nphone:\t");
 VAR_4 = VAR_3 + FUNC_1(VAR_3);
 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  FUNC_0(VAR_4, "%s ", VAR_2->num[VAR_5]);
  VAR_4 = VAR_3 + FUNC_1(VAR_3);
 }
 FUNC_0(VAR_4, "\n");
 return VAR_3;
}
