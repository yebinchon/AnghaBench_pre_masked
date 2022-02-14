
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct arguments {scalar_t__* file; int * commands; int database; int * password; int * user; int host; scalar_t__ is_use_passwd; int * timezone; } ;
typedef int TAOS ;


 char* VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (char*) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 () ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (int *,scalar_t__*) ;
 int VAR_5 ;
 char* FUNC_7 (int *,char*) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (int ,int *,int *,int ,int ) ;
 int FUNC_10 () ;
 int FUNC_11 (int *) ;
 int FUNC_12 () ;
 int FUNC_13 (int ,int *) ;
 int * VAR_6 ;
 int * VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_14 () ;

TAOS *FUNC_15(struct arguments *VAR_11) {
  FUNC_3("\n");
  FUNC_3(VAR_0, FUNC_10());
  FUNC_1(VAR_5);


  if (VAR_11->timezone != ((void*)0)) {
    FUNC_13(VAR_4, VAR_11->timezone);
  }

  if (VAR_11->is_use_passwd) {
    if (VAR_11->password == ((void*)0)) VAR_11->password = FUNC_2("Enter password: ");
  } else {
    VAR_11->password = VAR_6;
  }

  if (VAR_11->user == ((void*)0)) {
    VAR_11->user = VAR_7;
  }

  FUNC_12();





  VAR_9 = 3;
  VAR_8 = 3000;


  TAOS *VAR_12 = FUNC_9(VAR_11->host, VAR_11->user, VAR_11->password, VAR_11->database, VAR_10);
  if (VAR_12 == ((void*)0)) {
    return VAR_12;
  }


  FUNC_4();


  if (VAR_11->commands != ((void*)0) || VAR_11->file[0] != 0) {
    if (VAR_11->commands != ((void*)0)) {
      char *VAR_13;
      VAR_13 = FUNC_7(VAR_11->commands, ";");
      while (VAR_13 != ((void*)0)) {
        FUNC_3("%s%s\n", VAR_2, VAR_13);
        FUNC_5(VAR_12, VAR_13);
        VAR_13 = FUNC_7(((void*)0), ";");
      }
    }

    if (VAR_11->file[0] != 0) {
      FUNC_6(VAR_12, VAR_11->file);
    }
    FUNC_8(VAR_12);

    FUNC_14();
    FUNC_0(VAR_1);
  }

  FUNC_3(VAR_3, FUNC_11(VAR_12));

  return VAR_12;
}
