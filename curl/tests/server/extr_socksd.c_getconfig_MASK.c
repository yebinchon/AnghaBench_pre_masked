
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int buffer ;
struct TYPE_2__ {void* connectrep; void* responsemethod; void* password; void* user; void* port; void* addr; void* nmethods_max; void* nmethods_min; void* version; } ;
typedef int FILE ;


 int VAR_0 ;
 void* FUNC_0 (char*) ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (char*,int,int *) ;
 int * FUNC_3 (int ,int ) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 () ;
 void* FUNC_6 (char*) ;
 int FUNC_7 (char*,char*,char*,char*) ;
 int FUNC_8 (char*,char*) ;
 int FUNC_9 (void*,char*) ;

__attribute__((used)) static void FUNC_10(void)
{
  FILE *VAR_3 = FUNC_3(VAR_2, VAR_0);
  FUNC_5();
  if(VAR_3) {
    char VAR_4[512];
    FUNC_4("parse config file");
    while(FUNC_2(VAR_4, sizeof(VAR_4), VAR_3)) {
      char VAR_5[32];
      char VAR_6[32];
      if(2 == FUNC_7(VAR_4, "%31s %31s", VAR_5, VAR_6)) {
        if(!FUNC_8(VAR_5, "version")) {
          VAR_1.version = FUNC_0(VAR_6);
          FUNC_4("version [%d] set", VAR_1.version);
        }
        else if(!FUNC_8(VAR_5, "nmethods_min")) {
          VAR_1.nmethods_min = FUNC_0(VAR_6);
          FUNC_4("nmethods_min [%d] set", VAR_1.nmethods_min);
        }
        else if(!FUNC_8(VAR_5, "nmethods_max")) {
          VAR_1.nmethods_max = FUNC_0(VAR_6);
          FUNC_4("nmethods_max [%d] set", VAR_1.nmethods_max);
        }
        else if(!FUNC_8(VAR_5, "backend")) {
          FUNC_9(VAR_1.addr, VAR_6);
          FUNC_4("backend [%s] set", VAR_1.addr);
        }
        else if(!FUNC_8(VAR_5, "backendport")) {
          VAR_1.port = FUNC_6(VAR_6);
          FUNC_4("backendport [%d] set", VAR_1.port);
        }
        else if(!FUNC_8(VAR_5, "user")) {
          FUNC_9(VAR_1.user, VAR_6);
          FUNC_4("user [%s] set", VAR_1.user);
        }
        else if(!FUNC_8(VAR_5, "password")) {
          FUNC_9(VAR_1.password, VAR_6);
          FUNC_4("password [%s] set", VAR_1.password);
        }





        else if(!FUNC_8(VAR_5, "method")) {
          VAR_1.responsemethod = FUNC_0(VAR_6);
          FUNC_4("method [%d] set", VAR_1.responsemethod);
        }
        else if(!FUNC_8(VAR_5, "response")) {
          VAR_1.connectrep = FUNC_0(VAR_6);
          FUNC_4("response [%d] set", VAR_1.connectrep);
        }
      }
    }
    FUNC_1(VAR_3);
  }
}
