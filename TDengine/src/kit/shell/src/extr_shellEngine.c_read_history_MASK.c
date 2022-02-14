
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int hstart; size_t hend; int * hist; } ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (int ,char*,char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char**,size_t*,int *) ;
 TYPE_1__ VAR_3 ;
 int FUNC_7 (int *,int ,int) ;
 int VAR_4 ;
 int FUNC_8 (char*) ;

void FUNC_9() {

  FUNC_7(VAR_3.hist, 0, sizeof(char *) * VAR_0);
  VAR_3.hstart = 0;
  VAR_3.hend = 0;
  char * VAR_5 = ((void*)0);
  size_t VAR_6 = 0;
  int VAR_7 = 0;

  char VAR_8[VAR_2];
  FUNC_5(VAR_8);

  if (FUNC_0(VAR_8, VAR_1) == -1) {
    return;
  }

  FILE *VAR_9 = FUNC_2(VAR_8, "r");
  if (VAR_9 == ((void*)0)) {
    FUNC_3(VAR_4, "Opening file %s\n", VAR_8);
    return;
  }

  while ((VAR_7 = FUNC_6(&VAR_5, &VAR_6, VAR_9)) != -1) {
    VAR_5[VAR_7 - 1] = '\0';
    VAR_3.hist[VAR_3.hend] = FUNC_8(VAR_5);

    VAR_3.hend = (VAR_3.hend + 1) % VAR_0;

    if (VAR_3.hend == VAR_3.hstart) {
      VAR_3.hstart = (VAR_3.hstart + 1) % VAR_0;
    }
  }

  FUNC_4(VAR_5);
  FUNC_1(VAR_9);
}
