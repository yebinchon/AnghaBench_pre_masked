
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int acct; } ;
struct TYPE_7__ {int name; TYPE_1__ cfg; } ;
typedef int STabObj ;
typedef TYPE_2__ SDbObj ;
typedef int SAcctObj ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,int *,int *) ;
 int FUNC_1 (TYPE_2__*,int *,int *) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int * FUNC_3 (int ) ;
 int * FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int ,int *) ;
 int VAR_4 ;

int FUNC_7(SDbObj *VAR_5, char *VAR_6, int VAR_7) {
  STabObj * VAR_8;
  SAcctObj *VAR_9;

  VAR_8 = FUNC_4(VAR_6);
  if (VAR_8 == ((void*)0)) {
    if (VAR_7) {
      return VAR_2;
    } else {
      return VAR_0;
    }
  }

  VAR_9 = FUNC_3(VAR_5->cfg.acct);


  if (FUNC_2(VAR_5->name, VAR_4)) {
    return VAR_1;
  }

  if (FUNC_5(VAR_8)) {
    return FUNC_1(VAR_5, VAR_8, VAR_9);
  } else {
    FUNC_0(VAR_5, VAR_8, VAR_9);


    FUNC_6(VAR_3, VAR_8);
  }

  return 0;
}
