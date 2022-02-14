
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int ** we_wordv; } ;
typedef TYPE_1__ wordexp_t ;
struct stat {int dummy; } ;
struct TYPE_7__ {int ptrLength; size_t cfgStatus; int option; scalar_t__ ptr; } ;
typedef TYPE_2__ SGlobalConfig ;


 size_t VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,int ,char*,int,char*) ;
 int FUNC_2 (char*,int ,char*,int) ;
 int FUNC_3 (char*,int ,char*,int ,char*) ;
 scalar_t__ FUNC_4 (char*,struct stat*) ;
 int FUNC_5 (char*,int *) ;
 int FUNC_6 (char*) ;
 int * VAR_1 ;
 int FUNC_7 (char*,TYPE_1__*,int ) ;
 int FUNC_8 (TYPE_1__*) ;

void FUNC_9(SGlobalConfig *VAR_2, char *VAR_3) {
  int VAR_4 = FUNC_6(VAR_3);
  char *VAR_5 = (char *)VAR_2->ptr;
  if (VAR_4 <= 0 || VAR_4 > VAR_2->ptrLength) {
    FUNC_1("config option:%s, input value:%s, length out of range[0, %d], use default value:%s",
           VAR_2->option, VAR_3, VAR_2->ptrLength, VAR_5);
  } else {
    if (VAR_2->cfgStatus <= VAR_0) {
      wordexp_t VAR_6;
      FUNC_7(VAR_3, &VAR_6, 0);
      if (VAR_6.we_wordv != ((void*)0) && VAR_6.we_wordv[0] != ((void*)0)) {
        FUNC_5(VAR_5, VAR_6.we_wordv[0]);
      }
      FUNC_8(&VAR_6);

      struct stat VAR_7;
      if (FUNC_4(VAR_5, &VAR_7) < 0) {
        int VAR_8 = FUNC_0(VAR_5, 0755);
        FUNC_2("config option:%s, input value:%s, directory not exist, create with return code:%d",
               VAR_2->option, VAR_3, VAR_8);
      }
      VAR_2->cfgStatus = VAR_0;
    } else {
      FUNC_3("config option:%s, input value:%s, is configured by %s, use %s", VAR_2->option, VAR_3,
            VAR_1[VAR_2->cfgStatus], VAR_5);
    }
  }
}
