
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ptrLength; size_t cfgStatus; int option; scalar_t__ ptr; } ;
typedef TYPE_1__ SGlobalConfig ;


 size_t VAR_0 ;
 int FUNC_0 (char*,int ,char*,int,char*) ;
 int FUNC_1 (char*,int ,char*,int ,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char*,int) ;
 int * VAR_1 ;

void FUNC_4(SGlobalConfig *VAR_2, char *VAR_3) {
  int VAR_4 = FUNC_2(VAR_3);
  char *VAR_5 = (char *)VAR_2->ptr;
  if (VAR_4 <= 0 || VAR_4 > VAR_2->ptrLength) {
    FUNC_0("config option:%s, input value:%s, length out of range[0, %d], use default value:%s",
           VAR_2->option, VAR_3, VAR_2->ptrLength, VAR_5);
  } else {
    if (VAR_2->cfgStatus <= VAR_0) {
      FUNC_3(VAR_5, VAR_3, VAR_2->ptrLength);
      VAR_2->cfgStatus = VAR_0;
    } else {
      FUNC_1("config option:%s, input value:%s, is configured by %s, use %s", VAR_2->option, VAR_3,
            VAR_1[VAR_2->cfgStatus], VAR_5);
    }
  }
}
