
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int db; void* maxSessions; void* daysToKeep; void* daysPerFile; } ;
struct TYPE_8__ {int thandle; TYPE_1__* pUser; int pAcct; int writeAuth; } ;
struct TYPE_7__ {int user; } ;
typedef TYPE_2__ SConnObj ;
typedef TYPE_3__ SAlterDbMsg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (void*) ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (int ,TYPE_3__*) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (int ,int ,int) ;

int FUNC_5(char *VAR_3, int VAR_4, SConnObj *VAR_5) {
  SAlterDbMsg *VAR_6 = (SAlterDbMsg *)VAR_3;
  int VAR_7 = 0;

  if (FUNC_3(VAR_5, VAR_2) != 0) {
    return 0;
  }

  VAR_6->daysPerFile = FUNC_0(VAR_6->daysPerFile);
  VAR_6->daysToKeep = FUNC_0(VAR_6->daysToKeep);
  VAR_6->maxSessions = FUNC_0(VAR_6->maxSessions) + 1;

  if (!VAR_5->writeAuth) {
    VAR_7 = VAR_0;
  } else {
    VAR_7 = FUNC_2(VAR_5->pAcct, VAR_6);
    if (VAR_7 == VAR_1) {
      FUNC_1("DB:%s is altered by %s", VAR_6->db, VAR_5->pUser->user);
    }
  }

  FUNC_4(VAR_5->thandle, VAR_2, VAR_7);

  return 0;
}
