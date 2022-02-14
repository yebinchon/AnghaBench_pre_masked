
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int password; int user; int addr; int port; int connectrep; int reqcmd; int responsemethod; int responseversion; int nmethods_max; int nmethods_min; int version; } ;


 char* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_1__ VAR_9 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static void FUNC_2(void)
{
  FUNC_0("Reset to defaults");
  VAR_9.version = VAR_8;
  VAR_9.nmethods_min = VAR_3;
  VAR_9.nmethods_max = VAR_2;
  VAR_9.responseversion = VAR_7;
  VAR_9.responsemethod = VAR_6;
  VAR_9.reqcmd = VAR_5;
  VAR_9.connectrep = VAR_1;
  VAR_9.port = VAR_4;
  FUNC_1(VAR_9.addr, VAR_0);
  FUNC_1(VAR_9.user, "user");
  FUNC_1(VAR_9.password, "password");
}
