
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int int64_t ;
struct TYPE_2__ {scalar_t__ state; char* sql; char* privateIpStr; int * timer; int conn; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (char*) ;
 int * VAR_5 ;
 int FUNC_6 () ;
 int FUNC_7 (char*,int ,char*) ;
 int FUNC_8 (char*,int ,char*,char*,char*,int ) ;
 int FUNC_9 () ;
 int FUNC_10 (int ,char*,int ,char*) ;
 char* VAR_6 ;

void FUNC_11() {
  if (VAR_4->state != VAR_0) {
    return;
  }

  if (VAR_5 == ((void*)0)) {
    return;
  }

  int64_t VAR_7 = FUNC_9();
  char * VAR_8 = VAR_4->sql;
  int VAR_9 = FUNC_8(VAR_8, VAR_2, "insert into %s.dn_%s values(%ld", VAR_6, VAR_4->privateIpStr, VAR_7);

  VAR_9 += FUNC_1(VAR_8 + VAR_9);
  VAR_9 += FUNC_4(VAR_8 + VAR_9);
  VAR_9 += FUNC_2(VAR_8 + VAR_9);
  VAR_9 += FUNC_0(VAR_8 + VAR_9);
  VAR_9 += FUNC_3(VAR_8 + VAR_9);
  VAR_9 += FUNC_5(VAR_8 + VAR_9);

  FUNC_7("monitor:%p, save system info, sql:%s", VAR_4->conn, VAR_8);
  FUNC_10(VAR_4->conn, VAR_8, VAR_3, "log");

  if (VAR_4->timer != ((void*)0) && VAR_4->state != VAR_1) {
    FUNC_6();
  }
}
