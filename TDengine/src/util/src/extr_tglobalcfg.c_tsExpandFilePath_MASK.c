
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ** we_wordv; } ;
typedef TYPE_1__ wordexp_t ;
struct stat {int dummy; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,char*,char*,int) ;
 scalar_t__ FUNC_2 (char*,struct stat*) ;
 int FUNC_3 (char*,int *) ;
 int FUNC_4 (char*,TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_1__*) ;

void FUNC_6(char* VAR_0, char* VAR_1) {
  wordexp_t VAR_2;
  FUNC_4(VAR_1, &VAR_2, 0);
  if (VAR_2.we_wordv != ((void*)0) && VAR_2.we_wordv[0] != ((void*)0)) {
    FUNC_3(VAR_1, VAR_2.we_wordv[0]);
  }
  FUNC_5(&VAR_2);

  struct stat VAR_3;
  if (FUNC_2(VAR_1, &VAR_3) < 0) {
    int VAR_4 = FUNC_0(VAR_1, 0755);
    FUNC_1("config option:%s, input value:%s, directory not exist, create with return code:%d", VAR_0, VAR_1, VAR_4);
  }
}
