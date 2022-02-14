
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {int daysToKeep; int replications; int maxSessions; int db; } ;
struct TYPE_10__ {int replications; int daysToKeep; int maxSessions; } ;
struct TYPE_11__ {struct TYPE_11__* next; int vgId; TYPE_1__ cfg; struct TYPE_11__* pHead; int name; } ;
typedef TYPE_2__ SVgObj ;
typedef TYPE_2__ SDbObj ;
typedef TYPE_4__ SAlterDbMsg ;
typedef int SAcctObj ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (char*,int,int,...) ;
 int FUNC_1 (char*,int ,...) ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (TYPE_2__*,int *,int *) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int) ;
 int FUNC_6 (TYPE_2__*,int ,int ) ;
 scalar_t__ FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (int ,TYPE_2__*,int ,int) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

int FUNC_9(SAcctObj *VAR_14, SAlterDbMsg *VAR_15) {
  SDbObj *VAR_16;
  int VAR_17 = VAR_5;

  VAR_16 = (SDbObj *)FUNC_7(VAR_10, VAR_15->db);
  if (VAR_16 == ((void*)0)) {
    FUNC_1("db:%s is not exist", VAR_15->db);
    return VAR_1;
  }

  int VAR_18 = VAR_16->cfg.replications;
  if (VAR_15->daysToKeep > 0) {
    FUNC_1("db:%s daysToKeep:%d change to %d", VAR_16->name, VAR_16->cfg.daysToKeep, VAR_15->daysToKeep);
    VAR_16->cfg.daysToKeep = VAR_15->daysToKeep;
  } else if (VAR_15->replications > 0) {
    FUNC_1("db:%s replica:%d change to %d", VAR_16->name, VAR_16->cfg.replications, VAR_15->replications);
    if (VAR_15->replications < VAR_9 || VAR_15->replications > VAR_8) {
      FUNC_0("invalid db option replica: %d valid range: %d--%d", VAR_15->replications, VAR_9, VAR_8);
      return VAR_2;
    }
    VAR_16->cfg.replications = VAR_15->replications;
  } else if (VAR_15->maxSessions > 0) {
    FUNC_1("db:%s tables:%d change to %d", VAR_16->name, VAR_16->cfg.maxSessions, VAR_15->maxSessions);
    if (VAR_15->maxSessions < VAR_7 || VAR_15->maxSessions > VAR_6) {
      FUNC_0("invalid db option tables: %d valid range: %d--%d", VAR_15->maxSessions, VAR_7, VAR_6);
      return VAR_2;
    }
    if (VAR_15->maxSessions < VAR_16->cfg.maxSessions) {
      FUNC_0("invalid db option tables: %d should larger than original:%d", VAR_15->maxSessions, VAR_16->cfg.maxSessions);
      return VAR_2;
    }
    return VAR_2;


  } else {
    FUNC_0("db:%s alter msg, replica:%d, keep:%d, tables:%d, origin replica:%d keep:%d", VAR_16->name,
            VAR_15->replications, VAR_15->maxSessions, VAR_15->daysToKeep,
            VAR_16->cfg.replications, VAR_16->cfg.daysToKeep);
    return VAR_2;
  }

  if (FUNC_8(VAR_10, VAR_16, VAR_11, 1) < 0) {
    return VAR_4;
  }

  SVgObj *VAR_19 = VAR_16->pHead;
  while (VAR_19 != ((void*)0)) {
    FUNC_6(VAR_19, VAR_0, 0);
    if (VAR_18 < VAR_16->cfg.replications) {
      if (!FUNC_3(VAR_19, ((void*)0), ((void*)0))) {
        FUNC_2("db:%s vgroup:%d not enough dnode to add vnode", VAR_15->db, VAR_19->vgId);
        VAR_17 = VAR_3;
      }
    }
    if (VAR_15->maxSessions > 0) {

      FUNC_8(VAR_13, VAR_19, VAR_12, 0);
    }
    FUNC_4(VAR_19);
    VAR_19 = VAR_19->next;
  }
  FUNC_5(10);

  return VAR_17;
}
