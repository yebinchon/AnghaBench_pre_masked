
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int hstart; int hend; int ** hist; } ;
typedef int TAOS ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 TYPE_1__ VAR_3 ;
 scalar_t__ FUNC_2 (char*,char*,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,char*) ;
 scalar_t__ FUNC_6 (char*,int *) ;
 int * FUNC_7 (char*) ;
 char* FUNC_8 (char*,char*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 () ;

void FUNC_13(TAOS *VAR_4, char *VAR_5) {

  if (FUNC_2(VAR_5, "^[ \t;]*$", VAR_1)) {
    return;
  }


  if (VAR_3.hstart == VAR_3.hend ||
      VAR_3.hist[(VAR_3.hend + VAR_0 - 1) % VAR_0] == ((void*)0) ||
      FUNC_6(VAR_5, VAR_3.hist[(VAR_3.hend + VAR_0 - 1) % VAR_0]) != 0) {
    if (VAR_3.hist[VAR_3.hend] != ((void*)0)) {
      FUNC_11(VAR_3.hist[VAR_3.hend]);
    }
    VAR_3.hist[VAR_3.hend] = FUNC_7(VAR_5);

    VAR_3.hend = (VAR_3.hend + 1) % VAR_0;
    if (VAR_3.hend == VAR_3.hstart) {
      VAR_3.hstart = (VAR_3.hstart + 1) % VAR_0;
    }
  }

  FUNC_3(VAR_5);


  if (FUNC_2(VAR_5, "^[ \t]*(quit|q|exit)[ \t;]*$", VAR_1 | VAR_2)) {
    FUNC_10(VAR_4);
    FUNC_12();
    FUNC_1();
  } else if (FUNC_2(VAR_5, "^[\t ]*clear[ \t;]*$", VAR_1 | VAR_2)) {

    FUNC_9("clear");
    return;
  } else if (FUNC_2(VAR_5, "^[ \t]*source[\t ]+[^ ]+[ \t;]*$", VAR_1 | VAR_2)) {

    char *VAR_6 = FUNC_8(VAR_5, " ;");
    FUNC_0(VAR_6 != ((void*)0));
    VAR_6 = FUNC_8(((void*)0), " ;");
    FUNC_0(VAR_6 != ((void*)0));

    FUNC_5(VAR_4, VAR_6);
  } else {
    FUNC_4(VAR_4, VAR_5);
  }
}
