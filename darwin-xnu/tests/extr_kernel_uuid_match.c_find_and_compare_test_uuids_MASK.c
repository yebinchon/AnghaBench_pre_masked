
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uuid_t ;
struct stat {int st_mode; } ;
struct TYPE_4__ {int gl_matchc; char** gl_pathv; } ;
typedef TYPE_1__ glob_t ;


 int VAR_0 ;
 int FUNC_0 (int,int ,char*,char*) ;
 int FUNC_1 (int,char*,char*) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (char*,char*) ;
 int VAR_1 ;
 int FUNC_4 (char*,int ,int *,TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 scalar_t__ FUNC_6 (char*,int ) ;
 int FUNC_7 (char*,struct stat*) ;
 scalar_t__ FUNC_8 (int ,int ) ;

__attribute__((used)) static void FUNC_9(char *VAR_2, uuid_t VAR_3) {
 glob_t VAR_4;
 int VAR_5 = FUNC_4(VAR_2, 0, ((void*)0), &VAR_4);
 VAR_1; FUNC_0(VAR_5, 0, "glob %s", VAR_2);

 bool VAR_6 = 0;
 for (int VAR_7 = 0; VAR_7 < VAR_4.gl_matchc; VAR_7++) {
  char *VAR_8 = VAR_4.gl_pathv[VAR_7];


  struct stat VAR_9;
  int VAR_10 = FUNC_7(VAR_8, &VAR_9);
  FUNC_1(VAR_10, "stat %s", VAR_8);
  if ((VAR_9.st_mode & VAR_0) == 0) {
   continue;
  }

  FUNC_3("Reading file at path: %s", VAR_8);
  uuid_t VAR_11;
  if (FUNC_6(VAR_8, VAR_11) &&
    FUNC_8(VAR_3, VAR_11) == 0) {
   VAR_6 = 1;
   break;
  }
 }
 FUNC_5(&VAR_4);
 FUNC_2(VAR_6, "The sources match");
}
