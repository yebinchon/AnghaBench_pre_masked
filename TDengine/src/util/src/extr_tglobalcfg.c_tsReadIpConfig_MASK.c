
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_3__ {size_t cfgStatus; int option; int ptrLength; scalar_t__ ptr; } ;
typedef TYPE_1__ SGlobalConfig ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (char*,int ,char*,char*) ;
 int FUNC_2 (char*,int ,char*,int ,char*) ;
 int FUNC_3 (char*,char*,int ) ;
 int * VAR_2 ;

void FUNC_4(SGlobalConfig *VAR_3, char *VAR_4) {
  uint32_t VAR_5 = FUNC_0(VAR_4);
  char * VAR_6 = (char *)VAR_3->ptr;
  if (VAR_5 == VAR_0) {
    FUNC_1("config option:%s, input value:%s, is not a valid ip address, use default value:%s",
           VAR_3->option, VAR_4, VAR_6);
  } else {
    if (VAR_3->cfgStatus <= VAR_1) {
      FUNC_3(VAR_6, VAR_4, VAR_3->ptrLength);
      VAR_3->cfgStatus = VAR_1;
    } else {
      FUNC_2("config option:%s, input value:%s, is configured by %s, use %s", VAR_3->option, VAR_4,
            VAR_2[VAR_3->cfgStatus], VAR_6);
    }
  }
}
