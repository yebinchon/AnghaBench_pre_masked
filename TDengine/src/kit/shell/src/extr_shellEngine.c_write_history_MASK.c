
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int hstart; int hend; char** hist; } ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (int *,char*,char*) ;
 int FUNC_3 (char*) ;
 TYPE_1__ VAR_1 ;
 int * VAR_2 ;
 int FUNC_4 (char*) ;

void FUNC_5() {
  char VAR_3[128];
  FUNC_3(VAR_3);

  FILE *VAR_4 = FUNC_1(VAR_3, "w");
  if (VAR_4 == ((void*)0)) {
    FUNC_2(VAR_2, "Opening file %s\n", VAR_3);
    return;
  }

  for (int VAR_5 = VAR_1.hstart; VAR_5 != VAR_1.hend;) {
    if (VAR_1.hist[VAR_5] != ((void*)0)) {
      FUNC_2(VAR_4, "%s\n", VAR_1.hist[VAR_5]);
      FUNC_4(VAR_1.hist[VAR_5]);
    }
    VAR_5 = (VAR_5 + 1) % VAR_0;
  }
  FUNC_0(VAR_4);
}
