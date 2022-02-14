
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {int user; } ;
struct TYPE_13__ {scalar_t__ daysToKeep1; scalar_t__ daysToKeep2; scalar_t__ daysToKeep; int acct; int db; } ;
struct TYPE_12__ {TYPE_2__ cfg; int createdTime; int name; } ;
typedef TYPE_1__ SDbObj ;
typedef TYPE_2__ SCreateDbMsg ;
typedef TYPE_3__ SAcctObj ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_2__*) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (int ,TYPE_1__*,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 () ;
 int FUNC_10 (TYPE_1__*) ;

int FUNC_11(SAcctObj *VAR_4, SCreateDbMsg *VAR_5) {
  SDbObj *VAR_6;
  int VAR_7;

  VAR_7 = FUNC_4(VAR_4);
  if (VAR_7 != 0) {
    return VAR_7;
  }

  VAR_6 = (SDbObj *)FUNC_6(VAR_3, VAR_5->db);
  if (VAR_6 != ((void*)0)) {
    return VAR_0;
  }

  VAR_7 = FUNC_5(VAR_5);
  if (VAR_7 != VAR_2) return VAR_7;

  FUNC_0(VAR_5->daysToKeep1 <= VAR_5->daysToKeep2 && VAR_5->daysToKeep2 <= VAR_5->daysToKeep);

  VAR_7 = FUNC_3();
  if (VAR_7 != 0) {
    return VAR_7;
  }

  VAR_6 = FUNC_1(sizeof(SDbObj));
  FUNC_2(VAR_6, 0, sizeof(SDbObj));
  FUNC_8(VAR_6->name, VAR_5->db);
  FUNC_8(VAR_5->acct, VAR_4->user);
  VAR_6->createdTime = FUNC_9();
  VAR_6->cfg = *VAR_5;

  if (FUNC_7(VAR_3, VAR_6, 0) < 0) {
    VAR_7 = VAR_1;
    FUNC_10(VAR_6);
  }

  return VAR_7;
}
