
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_10__ {char* user; } ;
struct TYPE_9__ {char* user; char* acct; int superAuth; int writeAuth; int createdTime; int pass; } ;
typedef TYPE_1__ SUserObj ;
typedef TYPE_2__ SAcctObj ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,char*) ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,int ,int) ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (int ,char*) ;
 scalar_t__ FUNC_6 (int ,TYPE_1__*,int ) ;
 scalar_t__ FUNC_7 (char*,char*) ;
 int FUNC_8 (char*,char*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int *,int ,int ) ;
 int FUNC_11 () ;
 int FUNC_12 (TYPE_1__*) ;
 int VAR_3 ;

int FUNC_13(SAcctObj *VAR_4, char *VAR_5, char *VAR_6) {
  SUserObj *VAR_7;
  int VAR_8;

  VAR_8 = FUNC_4(VAR_4);
  if (VAR_8 != 0) {
    return VAR_8;
  }

  VAR_7 = (SUserObj *)FUNC_5(VAR_3, VAR_5);
  if (VAR_7 != ((void*)0)) {
    FUNC_0("user:%s is already there", VAR_5);
    return VAR_2;
  }

  VAR_8 = FUNC_3();
  if (VAR_8 != 0) {
    return VAR_8;
  }

  VAR_7 = FUNC_1(sizeof(SUserObj));
  FUNC_2(VAR_7, 0, sizeof(SUserObj));
  FUNC_8(VAR_7->user, VAR_5);
  FUNC_10((uint8_t*) VAR_6, FUNC_9(VAR_6), VAR_7->pass);
  FUNC_8(VAR_7->acct, VAR_4->user);
  VAR_7->createdTime = FUNC_11();
  VAR_7->superAuth = 0;
  VAR_7->writeAuth = 1;
  if (FUNC_7(VAR_7->user, "root") == 0 || FUNC_7(VAR_7->user, VAR_7->acct) == 0) {
    VAR_7->superAuth = 1;
  }

  VAR_8 = VAR_1;
  if (FUNC_6(VAR_3, VAR_7, 0) < 0) {
    FUNC_12(VAR_7);
    VAR_8 = VAR_0;
  }



  return VAR_8;
}
