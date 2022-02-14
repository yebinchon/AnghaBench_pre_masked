
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char** we_wordv; } ;
typedef TYPE_1__ wordexp_t ;
typedef int FILE ;


 char* VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (char**,size_t*,int *) ;
 char* VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (char*,char**,int*) ;
 int FUNC_5 (char*,char*) ;
 int VAR_3 ;
 int FUNC_6 (char*,char*,char*) ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 () ;
 int FUNC_10 (char*,char*) ;
 int FUNC_11 (char*,TYPE_1__*,int ) ;
 int FUNC_12 (TYPE_1__*) ;

void FUNC_13() {
  FUNC_9();

  FILE * VAR_4;
  char * VAR_5, *VAR_6, *VAR_7;
  size_t VAR_8;
  int VAR_9, VAR_10;
  char VAR_11[128];

  VAR_2 = 135;
  VAR_3 = 135;

  wordexp_t VAR_12;
  FUNC_11(VAR_0, &VAR_12, 0);
  if (VAR_12.we_wordv != ((void*)0) && VAR_12.we_wordv[0] != ((void*)0)) {
    FUNC_7(VAR_0, VAR_12.we_wordv[0]);
  } else {
    FUNC_5("configDir:%s not there, use default value: /etc/taos", VAR_0);
    FUNC_7(VAR_0, "/etc/taos");
  }
  FUNC_12(&VAR_12);

  FUNC_10("logDir", VAR_1);
  FUNC_6(VAR_11, "%s/taos.cfg", VAR_0);
  VAR_4 = FUNC_2(VAR_11, "r");
  if (VAR_4 == ((void*)0)) {
    FUNC_5("\noption file:%s not found, all options are set to system default\n", VAR_11);
    return;
  }

  VAR_5 = ((void*)0);
  while (!FUNC_1(VAR_4)) {
    FUNC_8(VAR_5);
    VAR_5 = VAR_6 = VAR_7 = ((void*)0);
    VAR_8 = VAR_9 = VAR_10 = 0;

    FUNC_3(&VAR_5, &VAR_8, VAR_4);
    if (VAR_5 == ((void*)0)) break;

    FUNC_4(VAR_5, &VAR_6, &VAR_9);
    if (VAR_9 == 0) continue;
    VAR_6[VAR_9] = 0;

    FUNC_4(VAR_6 + VAR_9 + 1, &VAR_7, &VAR_10);
    if (VAR_10 == 0) continue;
    VAR_7[VAR_10] = 0;

    FUNC_10(VAR_6, VAR_7);
  }

  FUNC_8(VAR_5);
  FUNC_0(VAR_4);
}
